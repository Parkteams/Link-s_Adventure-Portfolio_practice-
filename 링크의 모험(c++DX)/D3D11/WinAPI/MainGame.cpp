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
    //�� �߰�

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
    //���ϴ� ���ڿ� ���
    ImGui::Text("FPS: %d", TIMER->GetFPS());
    ImGui::Text("WorldTime: %f", TIMER->GetWorldTime());
    ImGui::Text("Delata: %f", DeltaTime);
    //üũ�ڽ������� 0,1�� �����
    ImGui::Checkbox("Vsync", &isVsync);

    g_WorldMouse.x = (float)g_ScreenMouse.x + MAINCAM->Pos.x;
    g_WorldMouse.y = (float)WINSIZEY - (float)g_ScreenMouse.y + MAINCAM->Pos.y;


    INPUT->Update();

    //��1 ����
    if (INPUT->KeyDown(VK_F1))
    {
        SCENE->ChangeScene("Scene1")->Init();
    }
    //��2 ����
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

    //�������ִ��� ���� ���������
    g_DeviceContext->ClearRenderTargetView(g_RTV, g_BackGround);
    MAINCAM->SetCam();
    LIGHT->SetLight();

    SCENE->GetCurrentScene()->Render();


    // Rendering
    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    //�� ����Ʈ ����      ��������ȭ?
    g_SwapChain->Present(isVsync, 0);
}
