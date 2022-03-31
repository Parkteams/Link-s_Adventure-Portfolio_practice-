#include "stdafx.h"
#include "MainGame.h"
#include "Scene/Scene1.h"
#include "Scene/Scene2.h"

MainGame::MainGame()
{
    srand((UINT)time(NULL));
    g_BackGround = Color(0.6f, 0.6f, 0.6f, 1.0f);
    isVsync = false;
    Object::CreateStaticMember();
    ObRect::CreateStaticMember();
    ObLine::CreateStaticMember();
    ObCircle::CreateStaticMember();
    ObStar::CreateStaticMember();
    ObImage::CreateStaticMember();
}

MainGame::~MainGame()
{
   
    Object::DeleteStaticMember();
    ObRect::DeleteStaticMember();
    ObLine::DeleteStaticMember();
    ObCircle::DeleteStaticMember();
    ObStar::DeleteStaticMember();
    ObImage::DeleteStaticMember();
    INPUT->DeleteSingleton();
    TIMER->DeleteSingleton();
    MAINCAM->DeleteSingleton();
    SCENE->DeleteSingleton();
    TEXTURE->DeleteSingleton();
    SOUND->DeleteSingleton();
    LIGHT->DeleteSingleton();
}

void MainGame::Init()
{
    //씬 추가

    SCENE->AddScene("Scene1", new Scene1());
    SCENE->AddScene("Scene2", new Scene2());
    SCENE->ChangeScene("Scene1")->Init();
    //SCENE->GetCurrentScene()->Init();

    /*SceneList.push_back(new Scene1());
    SceneList.push_back(new Scene2());*/
    //CurrentScene = SceneList[0];
    //CurrentScene->Init();
    //g_DeviceContext->ClearRenderTargetView(g_RTV, g_BackGround);

}

void MainGame::Update()
{
    //원하는 문자열 출력
    ImGui::Text("FPS: %d", TIMER->GetFPS());
    ImGui::Text("WorldTime: %f", TIMER->GetWorldTime());
    ImGui::Text("Delata: %f", DeltaTime);
    //체크박스를통해 0,1값 만들기
    ImGui::Checkbox("Vsync", &isVsync);

    g_WorldMouse.x = (float)g_ScreenMouse.x + MAINCAM->Pos.x;
    g_WorldMouse.y = (float)WINSIZEY - (float)g_ScreenMouse.y + MAINCAM->Pos.y;


    INPUT->Update();

    //씬1 변경
    if (INPUT->KeyDown(VK_F1))
    {
        SCENE->ChangeScene("Scene1")->Init();
    }
    //씬2 변경
    if (INPUT->KeyDown(VK_F2))
    {
        SCENE->ChangeScene("Scene2")->Init();
    }

    SCENE->GetCurrentScene()->Update();
}

void MainGame::LateUpdate()
{


    SCENE->GetCurrentScene()->LateUpdate();
    SOUND->Update();
}

void MainGame::Render()
{

    //그전에있던거 위에 바탕색깔기
    g_DeviceContext->ClearRenderTargetView(g_RTV, g_BackGround);
    MAINCAM->SetCam();
    LIGHT->SetLight();

    SCENE->GetCurrentScene()->Render();


    // Rendering
    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    //백 프론트 스왑      수직동기화?
    g_SwapChain->Present(isVsync, 0);
}
