#include "stdafx.h"
#include "Scene1.h"


Scene1::Scene1()
{
    //MENU
    Grandel = new ObImage(L"Image/UI/grandel.png");
    Play = new ObImage(L"Image/UI/play.png");
    Credit = new ObImage(L"Image/UI/credit.png");
    Exit = new ObImage(L"Image/UI/exit.png");
    Name = new ObImage(L"Image/UI/name.png");
    Add = new ObImage(L"Image/UI/add.png");

    //BACKGROUND
    Background = new ObImage(L"Image/map/Background.png");
    Background->ChangeAddress(_WRAP);

    //BGM
    SOUND->AddSound("Sound/bgm/Menu/Menu.mp3", "BGM", true);
}
   

Scene1::~Scene1()
{
    delete Grandel;
    delete Play;
    delete Credit;
    delete Exit;
    delete Name;
    delete Add;
    delete Background;
}

void Scene1::Init()
{
    //BACKGROUND
    Background->Position = Vector2(0.0f, 0.0f);
    Background->Scale = Vector2(WINSIZEX, WINSIZEY);
    Background->Pivot = OFFSET_LB;

    //MENU
    Grandel->Position = Vector2(WINSIZEX / 2.0f, 450.0f);
    Grandel->Scale = Vector2(300.0f, 100.0f);

    Play->Position = Vector2(WINSIZEX / 2.0f, 300.0f);
    Play->Scale = Vector2(160.0f, 80.0f);
    Play->CollisionType = COL_RECT;

    Name->Position = Vector2(WINSIZEX / 2.0f, 120.0f);
    Name->Scale = Vector2(300.0f, 80.0f);

    Add->Position = Vector2(WINSIZEX / 2.0f, 50.0f);
    Add->Scale = Vector2(500.0f, 80.0f);

    //BGM
    SOUND->Play("BGM");
    SOUND->SetVolume("BGM", 0.3f);
}

void Scene1::Update()
{
    Background->UV.x += 0.05f * DeltaTime;
    Background->UV.z += 0.05f * DeltaTime;

}

void Scene1::LateUpdate()
{
    if (isCollision(Play, g_WorldMouse))
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num2 == 0)
            Click_Num2 = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num2 == -1)
        {
            SOUND->Stop("BGM");
            SCENE->ChangeScene("Scene2")->Init();
        }
    }
   
}

void Scene1::Render()
{
    Background->Render();
    Grandel->Render();
    Play->Render();
    Credit->Render();
    Exit->Render();
    Name->Render();
    Add->Render();

}
