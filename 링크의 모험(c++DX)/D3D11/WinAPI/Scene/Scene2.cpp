#include "stdafx.h"
#include "Scene2.h"

Scene2::Scene2()
{
    //BACKGROUND
    Background1 = new ObImage(L"Image/map/Start_Sky.png");
    Background2 = new ObImage(L"Image/map/Grave_Sky.png");
    Background3 = new ObImage(L"Image/map/Castle1.png");
    Background4 = new ObImage(L"Image/map/Boss_Sky.png");

    Floor1 = new ObImage(L"Image/map/Start_Map.png");
    Floor2 = new ObImage(L"Image/map/Grave_Map.png");
    Floor3 = new ObImage(L"Image/map/Castle2.png");
    Floor4 = new ObImage(L"Image/map/Boss_Map.png");

    //GIMIC
    Door1 = new ObImage(L"Image/gimic/Castle_Door_2.png");
    Door2 = new ObImage(L"Image/gimic/Castle_Door_1.png");
    Door3 = new ObImage(L"Image/gimic/Castle_Door_3.png");
    DoorBox = new ObRect;
    for (int i = 0; i < 3; i++)
    {
        Grave[i] = new ObImage(L"Image/gimic/Grave.png");
    }
    Potal = new ObImage(L"Image/gimic/Potal.png");
    Potal2 = new ObImage(L"Image/gimic/Potal.png");
    PotalBox = new ObRect;
    PotalBox2 = new ObRect;
    Flower = new ObImage(L"Image/gimic/Flower.png");
    Magic_Book = new ObImage(L"Image/gimic/Magic_Book.png");
    
    //ENEMY
    //SLIME
    Slime.HitBox = new ObRect;
    Slime.AttackBox = new ObRect;
    Slime.Hp = new ObRect;
    Slime.Stand = new ObImage(L"Image/enemy/Start/Slime_Stand.png");
    Slime.Run = new ObImage(L"Image/enemy/Start/Slime_MoveR.png");
    Slime.Attack = new ObImage(L"Image/enemy/Start/Slime_AttackR.png");
    Slime.Hurt = new ObImage(L"Image/enemy/Start/Slime_Hurt.png");
    Slime.L_Stand = new ObImage(L"Image/enemy/Start/Slime_StandL.png");
    Slime.L_Run = new ObImage(L"Image/enemy/Start/Slime_MoveL.png");
    Slime.L_Attack = new ObImage(L"Image/enemy/Start/Slime_AttackL.png");
    Slime.L_Hurt = new ObImage(L"Image/enemy/Start/Slime_HurtL.png");

    //GOBLIN
    for (int i = 0; i < 3; i++)
    {
        Goblin[i].HitBox = new ObRect;
        Goblin[i].AttackBox = new ObRect;
        Goblin[i].Hp = new ObRect;
        Goblin[i].Stand = new ObImage(L"Image/enemy/Grave/Goblin.png");
        Goblin[i].Run = new ObImage(L"Image/enemy/Grave/Goblin_Run.png");
        Goblin[i].Attack1 = new ObImage(L"Image/enemy/Grave/Goblin_Attack1.png");
        Goblin[i].Attack2 = new ObImage(L"Image/enemy/Grave/Goblin_Attack2.png");
        Goblin[i].Hurt = new ObImage(L"Image/enemy/Grave/Goblin_Hit.png");
        Goblin[i].L_Stand = new ObImage(L"Image/enemy/Grave/Goblin_L.png");
        Goblin[i].L_Run = new ObImage(L"Image/enemy/Grave/Goblin_Run_L.png");
        Goblin[i].L_Attack1 = new ObImage(L"Image/enemy/Grave/Goblin_Attack1_L.png");
        Goblin[i].L_Attack2 = new ObImage(L"Image/enemy/Grave/Goblin_Attack2_L.png");
        Goblin[i].L_Hurt = new ObImage(L"Image/enemy/Grave/Goblin_Hit_L.png");

    }

    //MIDDLE_BOSS
    Middle_Boss.HitBox          = new ObRect;
    Middle_Boss.AttackBox       = new ObRect;
    Middle_Boss.Hp              = new ObRect;
    Middle_Boss.Stand           = new ObImage(L"Image/enemy/Castle/Middle_Boss_Stand.png");
    Middle_Boss.Run             = new ObImage(L"Image/enemy/Castle/Middle_Boss_Run.png");
    Middle_Boss.Attack          = new ObImage(L"Image/enemy/Castle/Middle_Boss_Attack.png");
    Middle_Boss.Mole1           = new ObImage(L"Image/enemy/Castle/Middle_Boss_Mole.png");
    Middle_Boss.Mole2           = new ObImage(L"Image/enemy/Castle/Middle_Boss_Mole3.png");
    Middle_Boss.Slide1          = new ObImage(L"Image/enemy/Castle/Middle_Boss_Slide.png");
    Middle_Boss.Slide2          = new ObImage(L"Image/enemy/Castle/Middle_Boss_Slide2.png");
    Middle_Boss.Hurt            = new ObImage(L"Image/enemy/Castle/Middle_Boss_Damaged.png");
    Middle_Boss.Motion          = new ObImage(L"Image/enemy/Castle/Middle_Boss_Motion.png");
    Middle_Boss.L_Stand         = new ObImage(L"Image/enemy/Castle/Middle_Boss_Stand_L.png");
    Middle_Boss.L_Run           = new ObImage(L"Image/enemy/Castle/Middle_Boss_Run_L.png");
    Middle_Boss.L_Attack        = new ObImage(L"Image/enemy/Castle/Middle_Boss_Attack_L.png");
    Middle_Boss.L_Slide1        = new ObImage(L"Image/enemy/Castle/Middle_Boss_Slide_L.png");
    Middle_Boss.L_Slide2        = new ObImage(L"Image/enemy/Castle/Middle_Boss_Slide2_L.png");
    Middle_Boss.L_Hurt          = new ObImage(L"Image/enemy/Castle/Middle_Boss_Damaged_L.png");
    Middle_Boss.Special         = new ObImage(L"Image/enemy/Castle/Middle_Boss_Special.png");
    Middle_Boss.Special_Effect  = new ObImage(L"Image/enemy/Castle/Middle_Boss_Effect.png");

    //PLAYER
    for (int i = 0; i < 10; i++)
    {
        Heart[i] = new ObImage(L"Image/UI/Heart.png");
    }
    Link.HitBox = new ObRect;
    Link.AttackBox = new ObRect;
    Link.StaminaBox = new ObRect;

    Link.Stand = new ObImage(L"Image/character/stand.png");

    Link.Walk = new ObImage(L"Image/character/walking.png");

    Link.Run = new ObImage(L"Image/character/running.png");

    Link.Run_Attack = new ObImage(L"Image/character/running attack.png");

    Link.Attack = new ObImage(L"Image/character/attack.png");

    Link.Jump = new ObImage(L"Image/character/jump.png");
    Link.Dumbling = new ObImage(L"Image/character/dumbling.png");

    Link.Kick = new ObImage(L"Image/character/kick.png");

    Link.Downattack1 = new ObImage(L"Image/character/jump_down_attack_while.png");
    Link.Downattack2 = new ObImage(L"Image/character/jump_down_attack_land.png");

    Link.Thrust = new ObImage(L"Image/character/thrust.png");

    Link.Defence = new ObImage(L"Image/character/defence.png");

    Link.L_Stand = new ObImage(L"Image/character/standL.png");

    Link.L_Walk = new ObImage(L"Image/character/walkingL.png");

    Link.L_Run = new ObImage(L"Image/character/runningL.png");

    Link.L_Run_Attack = new ObImage(L"Image/character/running attackL.png");

    Link.L_Attack = new ObImage(L"Image/character/attackL.png");

    Link.L_Jump = new ObImage(L"Image/character/jumpL.png");
    Link.L_Dumbling = new ObImage(L"Image/character/dumblingL.png");

    Link.L_Kick = new ObImage(L"Image/character/kickL.png");

    Link.L_Downattack1 = new ObImage(L"Image/character/jump_down_attack_whileL.png");
    Link.L_Downattack2 = new ObImage(L"Image/character/jump_down_attack_landL.png");

    Link.L_Thrust = new ObImage(L"Image/character/thrustL.png");

    Link.L_Defence = new ObImage(L"Image/character/defenceL.png");

    Link.Downattack_Effect = new ObImage(L"Image/effect/Downattack_Effect.png");

    //NPC
    Npc1 = new ObImage(L"Image/npc/npc1.png");
    Npc2 = new ObImage(L"Image/npc/npc2_stand.png");
    Npc2_Fear = new ObImage(L"Image/npc/npc2_fear.png");
    Npc3 = new ObImage(L"Image/npc/npc3.png");

    //SCRIPT
    Book = new ObImage(L"Image/UI/Book.png");
    Manual = new ObImage(L"Image/script/MANUAL.png");
    NPC1_1 = new ObImage(L"Image/script/npc1_1.png");
    NPC1_2 = new ObImage(L"Image/script/npc1_2.png");
    NPC1_3 = new ObImage(L"Image/script/npc1_3.png");
    NPC1_4 = new ObImage(L"Image/script/npc1_4.png");
    NPC1_5 = new ObImage(L"Image/script/npc1_5.png");
    NPC1_6 = new ObImage(L"Image/script/npc1_6.png");
    NPC1_7 = new ObImage(L"Image/script/npc1_7.png");
    NPC2_1 = new ObImage(L"Image/script/npc2_1.png");
    NPC2_2 = new ObImage(L"Image/script/npc2_2.png");
    NPC2_3 = new ObImage(L"Image/script/npc2_3.png");
    NPC3_1 = new ObImage(L"Image/script/npc3_1.png");
    NPC3_2 = new ObImage(L"Image/script/npc3_2.png");

    //SOUND
    //                  file       , key , isLoop?
    //BGM
    SOUND->AddSound("Sound/bgm/start.mp3", "BGM1", true);
    SOUND->AddSound("Sound/bgm/Grave_Stage/Battle.mp3", "BGM2", true);
    SOUND->AddSound("Sound/bgm/Grave_Stage/Grave.mp3", "BGM3", true);
    SOUND->AddSound("Sound/bgm/Castle_Stage/Castle.mp3", "BGM4", true);
    SOUND->AddSound("Sound/bgm/Castle_Stage/Middle_Boss_Page1.mp3", "BGM5", true);
    SOUND->AddSound("Sound/bgm/Castle_Stage/Middle_Boss_Page2.mp3", "BGM6", true);
    SOUND->AddSound("Sound/bgm/Library_Stage/Battle_Page1.mp3", "BGM7", true);
    SOUND->AddSound("Sound/bgm/Library_Stage/Battle_Page2.mp3", "BGM8", true);
    SOUND->AddSound("Sound/bgm/Library_Stage/Battle_Page3.mp3", "BGM9", true);
    SOUND->AddSound("Sound/bgm/Library_Stage/Battle_Page4.mp3", "BGM10", true);
    SOUND->AddSound("Sound/bgm/Library_Stage/Boss_Dead.mp3", "BGM11", false);
    SOUND->AddSound("Sound/bgm/Library_Stage/victory.mp3", "BGM12", true);

    //LINK
    SOUND->AddSound("Sound/link/jump.wav", "JUMP", false);
    SOUND->AddSound("Sound/link/left_step.wav", "LEFT", false);
    SOUND->AddSound("Sound/link/long.wav", "LONG", false);
    SOUND->AddSound("Sound/link/middle.wav", "MIDDLE", false);
    SOUND->AddSound("Sound/link/short.wav", "SHORT", false);
    SOUND->AddSound("Sound/link/link_damage.wav", "LINK_DAMAGE", false);
    SOUND->AddSound("Sound/link/damaged/hit1.wav", "HIT1", false);
    SOUND->AddSound("Sound/link/damaged/hit2.wav", "HIT2", false);
    SOUND->AddSound("Sound/link/damaged/strong_hit.wav", "HIT3", false);

    //ENEMY
    SOUND->AddSound("Sound/enemy/slime/Slime_Attack.wav", "SLIME_ATTACK", false);
    SOUND->AddSound("Sound/enemy/slime/Slime_Damaged.wav", "SLIME_DAMAGED", false);
    SOUND->AddSound("Sound/enemy/slime/Slime_Dead.wav", "SLIME_DEAD", false);
    SOUND->AddSound("Sound/enemy/goblin/Goblin_Dead.wav", "GOBLIN_DEAD", false);
    SOUND->AddSound("Sound/enemy/goblin/Goblin_Attack.wav", "GOBLIN_ATTACK", false);
    SOUND->AddSound("Sound/enemy/goblin/Goblin_Damaged.wav", "GOBLIN_DAMAGED", false);
    SOUND->AddSound("Sound/enemy/goblin/Goblin_Appear.wav", "GOBLIN_APPEAR", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Attack.wav", "MIDDLE_ATTACK", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Damaged.wav", "MIDDLE_DAMAGED", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Dead.wav", "MIDDLE_DEAD", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Mole.wav", "MIDDLE_MOLE", true);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Mole2.wav", "MIDDLE_MOLE2", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Motion.wav", "MIDDLE_MOTION", true);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Motion2.wav", "MIDDLE_MOTION2", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Slide.wav", "MIDDLE_SLIDE", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Special.wav", "MIDDLE_SPECIAL", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/Start.wav", "MIDDLE_START", false);
    SOUND->AddSound("Sound/enemy/Middle_Boss/You.wav", "MIDDLE_YOU", false);

    //NPC
    SOUND->AddSound("Sound/npc/Start/Touch.wav", "NPC1", false);
    SOUND->AddSound("Sound/npc/Grave/Run.wav", "NPC2_1", false);
    SOUND->AddSound("Sound/npc/Grave/Touch.wav", "NPC2_2", false);
    SOUND->AddSound("Sound/npc/Castle/Touch.wav", "NPC3_1", false);
    SOUND->AddSound("Sound/npc/Castle/Escape.wav", "NPC3_2", false);

    //EFFECT
    SOUND->AddSound("Sound/effect/aquire.wav", "ACQUIRE", false);
    SOUND->AddSound("Sound/effect/portal.wav", "PORTAL", false);
}

Scene2::~Scene2()
{
    delete Background1;
    delete Background2;
    delete Background3;
    delete Background4;
    delete Floor1;
    delete Floor2;
    delete Floor3;
    delete Floor4;

    delete Door1;
    delete Door2;
    delete Door3;
    delete DoorBox;
    for (int i = 0; i < 3; i++)
        delete Grave[i];
    delete Potal;
    delete PotalBox;
    delete Potal2;
    delete PotalBox2;
    delete Flower;
    delete Magic_Book;

    //ENEMY
    //SLIME
    delete Slime.HitBox;
    delete Slime.AttackBox;
    delete Slime.Hp;
    delete Slime.Stand;
    delete Slime.Run;
    delete Slime.Attack;
    delete Slime.Hurt;
    delete Slime.L_Stand;
    delete Slime.L_Run;
    delete Slime.L_Attack;
    delete Slime.L_Hurt;
    //GOBLIN
    for (int i = 0; i < 3; i++)
    {
        delete Goblin[i].HitBox;
        delete Goblin[i].AttackBox;
        delete Goblin[i].Hp;
        delete Goblin[i].Stand;
        delete Goblin[i].Run;
        delete Goblin[i].Attack1;
        delete Goblin[i].Attack2;
        delete Goblin[i].Hurt;
        delete Goblin[i].L_Stand;
        delete Goblin[i].L_Run;
        delete Goblin[i].L_Attack1;
        delete Goblin[i].L_Attack2;
        delete Goblin[i].L_Hurt;
    }
    //MIDDLEBOSS
    delete Middle_Boss.HitBox;
    delete Middle_Boss.AttackBox;
    delete Middle_Boss.Hp;
    delete Middle_Boss.Stand;
    delete Middle_Boss.Run;
    delete Middle_Boss.Attack;
    delete Middle_Boss.Mole1;
    delete Middle_Boss.Mole2;
    delete Middle_Boss.Slide1;
    delete Middle_Boss.Slide2;
    delete Middle_Boss.Hurt;
    delete Middle_Boss.Motion;
    delete Middle_Boss.L_Stand;
    delete Middle_Boss.L_Run;
    delete Middle_Boss.L_Attack;
    delete Middle_Boss.L_Slide1;
    delete Middle_Boss.L_Slide2;
    delete Middle_Boss.L_Hurt;
    delete Middle_Boss.Special;
    delete Middle_Boss.Special_Effect;
    //LINK
    for (int i= 0; i < 10; i++)
    {
        delete Heart[i];
    }
    delete Link.HitBox;
    delete Link.AttackBox;
    delete Link.StaminaBox;
    delete Link.Stand;
    delete Link.Walk;
    delete Link.Run;
    delete Link.Run_Attack;
    delete Link.Attack;
    delete Link.Jump;
    delete Link.Dumbling;
    delete Link.Kick;
    delete Link.Downattack1;
    delete Link.Downattack2;
    delete Link.Thrust;
    delete Link.Defence;
    delete Link.L_Stand;
    delete Link.L_Walk;
    delete Link.L_Run;
    delete Link.L_Run_Attack;
    delete Link.L_Attack;
    delete Link.L_Jump;
    delete Link.L_Dumbling;
    delete Link.L_Kick;
    delete Link.L_Downattack1;
    delete Link.L_Downattack2;
    delete Link.L_Thrust;
    delete Link.L_Defence;

    delete Npc1;
    delete Npc2;
    delete Npc2_Fear;
    delete Npc3;

    delete Book;
    delete Manual;

    delete NPC1_1;
    delete NPC1_2;
    delete NPC1_3;
    delete NPC1_4;
    delete NPC1_5;
    delete NPC1_6;
    delete NPC1_7;
    delete NPC2_1;
    delete NPC2_2;
    delete NPC2_3;
    delete NPC3_1;
    delete NPC3_2;

    delete Link.Downattack_Effect;
}

void Scene2::Init()
{
    //BACKGROUND
    Background1->Position = Vector2(0.0f, 0.0f);
    Background1->Scale = Vector2(2047.0f / 901.0f * WINSIZEY, WINSIZEY);
    Background1->Pivot = OFFSET_LB;

    Floor1->Position = Vector2(0.0f, 0.0f);
    Floor1->Scale = Vector2(2047.0f / 901.0f * WINSIZEY, WINSIZEY);
    Floor1->Pivot = OFFSET_LB;

    Background2->Position = Vector2(2000.0f, 0.0f);
    Background2->Scale = Vector2(957.0f / 448.0f * WINSIZEY, WINSIZEY);
    Background2->Pivot = OFFSET_LB;

    Floor2->Position = Vector2(2000.0f, 0.0f);
    Floor2->Scale = Vector2(957.0f / 448.0f * WINSIZEY, WINSIZEY);
    Floor2->Pivot = OFFSET_LB;

    Background3->Position = Vector2(4000.0f, 0.0f);
    Background3->Scale = Vector2(1024.0f / 451.0f * WINSIZEY, WINSIZEY);
    Background3->Pivot = OFFSET_LB;

    Floor3->Position = Vector2(4000.0f, 0.0f);
    Floor3->Scale = Vector2(1024.0f / 451.0f * WINSIZEY, WINSIZEY);
    Floor3->Pivot = OFFSET_LB;

    Background4->Position = Vector2(6000.0f, 0.0f);
    Background4->Scale = Vector2(1024.0f / 449.0f * WINSIZEY, WINSIZEY);
    Background4->Pivot = OFFSET_LB;

    Floor4->Position = Vector2(6000.0f, 0.0f);
    Floor4->Scale = Vector2(1024.0f / 449.0f * WINSIZEY, WINSIZEY);
    Floor4->Pivot = OFFSET_LB;

    //ENEMY
    //SLIME
    Slime.HitBox->Position = Vector2(1080.0f, 70.0f);
    Slime.HitBox->Scale = Vector2(41.5f / RATIO * RATIO, 20.0f * RATIO);
    Slime.HitBox->Pivot = OFFSET_B;
    Slime.HitBox->isFill = false;
    Slime.HitBox->color = Color(0.0f, 0.0f, 0.0f, 0.5f);
    Slime.HitBox->isActive = false;

    Slime.AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
    Slime.AttackBox->Pivot = Vector2(0.0f, 0.5f);
    Slime.AttackBox->isFill = false;
    Slime.AttackBox->color = Color(1.0f, 0.0f, 0.0f, 0.5f);
    Slime.AttackBox->isActive = false;
    Slime.AttackBox->P = &Slime.HitBox->RT;

    Slime.Hp->Position = Vector2(-30.0f, 50.0f);
    Slime.Hp->Scale = Vector2(40.0f * RATIO, 10.0f * RATIO);
    Slime.Hp->Pivot = OFFSET_LB;
    Slime.Hp->color = Color(0.5f, 0.0f, 0.0f, 0.5f);
    Slime.Hp->isActive = false;
    Slime.Hp->P = &Slime.HitBox->RT;

    Slime.Stand->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.Stand->Pivot = Vector2(0.25f, 0.0f);
    Slime.Stand->MaxFrame = Int2(7, 1);
    Slime.Stand->P = &Slime.HitBox->RT;
    Slime.Stand->isActive = false;

    Slime.Run->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.Run->Pivot = Vector2(0.25f, 0.0f);
    Slime.Run->MaxFrame = Int2(7, 1);
    Slime.Run->P = &Slime.HitBox->RT;
    Slime.Run->isActive = false;

    Slime.Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.Attack->Pivot = Vector2(0.25f, 0.0f);
    Slime.Attack->MaxFrame = Int2(5, 1);
    Slime.Attack->P = &Slime.HitBox->RT;
    Slime.Attack->isActive = false;

    Slime.Hurt->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.Hurt->Pivot = Vector2(0.25f, 0.0f);
    Slime.Hurt->MaxFrame = Int2(2, 1);
    Slime.Hurt->P = &Slime.HitBox->RT;
    Slime.Hurt->isActive = false;

    Slime.L_Stand->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.L_Stand->Pivot = Vector2(-0.25f, 0.0f);
    Slime.L_Stand->MaxFrame = Int2(7, 1);
    Slime.L_Stand->P = &Slime.HitBox->RT;
    Slime.L_Stand->isActive = false;

    Slime.L_Run->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.L_Run->Pivot = Vector2(-0.25f, 0.0f);
    Slime.L_Run->MaxFrame = Int2(7, 1);
    Slime.L_Run->P = &Slime.HitBox->RT;
    Slime.L_Run->isActive = false;

    Slime.L_Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.L_Attack->Pivot = Vector2(-0.25f, 0.0f);
    Slime.L_Attack->MaxFrame = Int2(5, 1);
    Slime.L_Attack->P = &Slime.HitBox->RT;
    Slime.L_Attack->isActive = false;

    Slime.L_Hurt->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Slime.L_Hurt->Pivot = Vector2(-0.25f, 0.0f);
    Slime.L_Hurt->MaxFrame = Int2(2, 1);
    Slime.L_Hurt->P = &Slime.HitBox->RT;
    Slime.L_Hurt->isActive = false;
    //GOBLIN
    for (int i = 0; i < 3; i++)
    {
        Goblin[i].HitBox->Position = Vector2(2600.0f + 120.0f * i, 70.0f);
        Goblin[i].HitBox->Scale = Vector2(60.0f, 60.0f);
        Goblin[i].HitBox->Pivot = OFFSET_B;
        Goblin[i].HitBox->isFill = false;
        Goblin[i].HitBox->color = Color(0.0f, 0.0f, 0.0f, 0.5f);
        Goblin[i].HitBox->isActive = false;

        Goblin[i].AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        Goblin[i].AttackBox->Pivot = Vector2(0.0f, 0.5f);
        Goblin[i].AttackBox->isFill = false;
        Goblin[i].AttackBox->color = Color(1.0f, 0.0f, 0.0f, 0.5f);
        Goblin[i].AttackBox->isActive = false;
        Goblin[i].AttackBox->P = &Goblin[i].HitBox->RT;

        Goblin[i].Hp->Position = Vector2(-30.0f, 70.0f);
        Goblin[i].Hp->Scale = Vector2(40.0f * RATIO, 10.0f * RATIO);
        Goblin[i].Hp->Pivot = OFFSET_LB;
        Goblin[i].Hp->color = Color(0.5f, 0.0f, 0.0f, 0.5f);
        Goblin[i].Hp->isActive = false;
        Goblin[i].Hp->P = &Goblin[i].HitBox->RT;

        Goblin[i].Stand->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].Stand->Pivot = Vector2(0.15f, 0.45f);
        Goblin[i].Stand->MaxFrame = Int2(5, 1);
        Goblin[i].Stand->P = &Goblin[i].HitBox->RT;
        Goblin[i].Stand->isActive = false;

        Goblin[i].Run->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].Run->Pivot = Vector2(0.15f, 0.45f);
        Goblin[i].Run->MaxFrame = Int2(10, 1);
        Goblin[i].Run->P = &Goblin[i].HitBox->RT;
        Goblin[i].Run->isActive = false;

        Goblin[i].Attack1->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].Attack1->Pivot = Vector2(0.15f, 0.45f);
        Goblin[i].Attack1->MaxFrame = Int2(6, 1);
        Goblin[i].Attack1->P = &Goblin[i].HitBox->RT;
        Goblin[i].Attack1->isActive = false;

        Goblin[i].Attack2->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].Attack2->Pivot = Vector2(0.15f, 0.45f);
        Goblin[i].Attack2->MaxFrame = Int2(7, 1);
        Goblin[i].Attack2->P = &Goblin[i].HitBox->RT;
        Goblin[i].Attack2->isActive = false;

        Goblin[i].Hurt->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].Hurt->Pivot = Vector2(0.15f, 0.45f);
        Goblin[i].Hurt->MaxFrame = Int2(2, 1);
        Goblin[i].Hurt->P = &Goblin[i].HitBox->RT;
        Goblin[i].Hurt->isActive = false;

        Goblin[i].L_Stand->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].L_Stand->Pivot = Vector2(-0.15f, 0.45f);
        Goblin[i].L_Stand->MaxFrame = Int2(5, 1);
        Goblin[i].L_Stand->P = &Goblin[i].HitBox->RT;
        Goblin[i].L_Stand->isActive = false;

        Goblin[i].L_Run->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].L_Run->Pivot = Vector2(-0.15f, 0.45f);
        Goblin[i].L_Run->MaxFrame = Int2(10, 1);
        Goblin[i].L_Run->P = &Goblin[i].HitBox->RT;
        Goblin[i].L_Run->isActive = false;

        Goblin[i].L_Attack1->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].L_Attack1->Pivot = Vector2(-0.15f, 0.45f);
        Goblin[i].L_Attack1->MaxFrame = Int2(6, 1);
        Goblin[i].L_Attack1->P = &Goblin[i].HitBox->RT;
        Goblin[i].L_Attack1->isActive = false;

        Goblin[i].L_Attack2->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].L_Attack2->Pivot = Vector2(-0.15f, 0.45f);
        Goblin[i].L_Attack2->MaxFrame = Int2(7, 1);
        Goblin[i].L_Attack2->P = &Goblin[i].HitBox->RT;
        Goblin[i].L_Attack2->isActive = false;

        Goblin[i].L_Hurt->Scale = Vector2(101.0f * RATIO, 70.0f * RATIO);
        Goblin[i].L_Hurt->Pivot = Vector2(-0.15f, 0.45f);
        Goblin[i].L_Hurt->MaxFrame = Int2(2, 1);
        Goblin[i].L_Hurt->P = &Goblin[i].HitBox->RT;
        Goblin[i].L_Hurt->isActive = false;
    }
    //MIDDLE_BOSS
    Middle_Boss.HitBox->Position = Vector2(5100.0f, 70.0f);
    Middle_Boss.HitBox->Scale = Vector2(100.0f, 100.0f);
    Middle_Boss.HitBox->Pivot = OFFSET_B;
    Middle_Boss.HitBox->isFill = false;
    Middle_Boss.HitBox->color = Color(0.0f, 0.5f, 0.0f, 0.5f);
    Middle_Boss.HitBox->isActive = true;

    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
    Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
    Middle_Boss.AttackBox->isFill = false;
    Middle_Boss.AttackBox->color = Color(1.0f, 0.0f, 0.0f, 0.5f);
    Middle_Boss.AttackBox->isActive = false;
    Middle_Boss.AttackBox->P = &Middle_Boss.HitBox->RT;

    Middle_Boss.Hp->Position = Vector2(-50.0f, 110.0f);
    Middle_Boss.Hp->Scale = Vector2(100.0f, 15.0f);
    Middle_Boss.Hp->Pivot = OFFSET_LB;
    Middle_Boss.Hp->color = Color(0.5f, 0.0f, 0.0f, 0.5f);
    Middle_Boss.Hp->isActive = false;
    Middle_Boss.Hp->P = &Middle_Boss.HitBox->RT;

    Middle_Boss.Stand->Scale = Vector2(115.0f, 112.0f);
    Middle_Boss.Stand->Pivot = Vector2(0.019f, 0.5f);
    Middle_Boss.Stand->MaxFrame = Int2(4, 1);
    Middle_Boss.Stand->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Stand->isActive = false;

    Middle_Boss.Run->Scale = Vector2(173.0f, 112.0f);
    Middle_Boss.Run->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Run->MaxFrame = Int2(6, 1);
    Middle_Boss.Run->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Run->isActive = false;

    Middle_Boss.Attack->Scale = Vector2(173.0f, 112.0f);
    Middle_Boss.Attack->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Attack->MaxFrame = Int2(4, 1);
    Middle_Boss.Attack->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Attack->isActive = false;


    Middle_Boss.Mole1->Scale = Vector2(150.0f, 112.0f);
    Middle_Boss.Mole1->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Mole1->MaxFrame = Int2(6, 1);
    Middle_Boss.Mole1->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Mole1->isActive = false;

    Middle_Boss.Mole2->Scale = Vector2(150.0f, 112.0f);
    Middle_Boss.Mole2->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Mole2->MaxFrame = Int2(2, 1);
    Middle_Boss.Mole2->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Mole2->isActive = false;

    Middle_Boss.Slide1->Scale = Vector2(150.0f, 112.0f);
    Middle_Boss.Slide1->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Slide1->MaxFrame = Int2(2, 1);
    Middle_Boss.Slide1->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Slide1->isActive = false;

    Middle_Boss.Slide2->Scale = Vector2(150.0f, 100.0f);
    Middle_Boss.Slide2->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Slide2->MaxFrame = Int2(3, 1);
    Middle_Boss.Slide2->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Slide2->isActive = false;

    Middle_Boss.Hurt->Scale = Vector2(115.0f, 112.0f);
    Middle_Boss.Hurt->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Hurt->MaxFrame = Int2(2, 1);
    Middle_Boss.Hurt->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Hurt->isActive = false;

    Middle_Boss.L_Stand->Scale = Vector2(115.0f, 112.0f);
    Middle_Boss.L_Stand->Pivot = Vector2(-0.019f, 0.5f);
    Middle_Boss.L_Stand->MaxFrame = Int2(4, 1);
    Middle_Boss.L_Stand->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Stand->isActive = false;

    Middle_Boss.L_Run->Scale = Vector2(173.0f, 112.0f);
    Middle_Boss.L_Run->Pivot = Vector2(-0.006f, 0.5f);
    Middle_Boss.L_Run->MaxFrame = Int2(6, 1);
    Middle_Boss.L_Run->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Run->isActive = false;

    Middle_Boss.L_Attack->Scale = Vector2(173.0f, 112.0f);
    Middle_Boss.L_Attack->Pivot = Vector2(-0.006f, 0.5f);
    Middle_Boss.L_Attack->MaxFrame = Int2(4, 1);
    Middle_Boss.L_Attack->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Attack->isActive = false;

    Middle_Boss.L_Slide1->Scale = Vector2(150.0f, 112.0f);
    Middle_Boss.L_Slide1->Pivot = Vector2(-0.006f, 0.5f);
    Middle_Boss.L_Slide1->MaxFrame = Int2(2, 1);
    Middle_Boss.L_Slide1->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Slide1->isActive = false;

    Middle_Boss.L_Slide2->Scale = Vector2(150.0f, 100.0f);
    Middle_Boss.L_Slide2->Pivot = Vector2(-0.006f, 0.5f);
    Middle_Boss.L_Slide2->MaxFrame = Int2(3, 1);
    Middle_Boss.L_Slide2->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Slide2->isActive = false;

    Middle_Boss.L_Hurt->Scale = Vector2(115.0f, 112.0f);
    Middle_Boss.L_Hurt->Pivot = Vector2(-0.006f, 0.5f);
    Middle_Boss.L_Hurt->MaxFrame = Int2(2, 1);
    Middle_Boss.L_Hurt->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.L_Hurt->isActive = false;

    Middle_Boss.Motion->Scale = Vector2(180.0f, 130.0f);
    Middle_Boss.Motion->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Motion->MaxFrame = Int2(3, 1);
    Middle_Boss.Motion->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Motion->isActive = false;

    Middle_Boss.Special->Scale = Vector2(180.0f, 130.0f);
    Middle_Boss.Special->Pivot = Vector2(0.006f, 0.5f);
    Middle_Boss.Special->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Special->isActive = false;

    Middle_Boss.Special_Effect->Scale = Vector2(236.0f, 214.0f);
    Middle_Boss.Special_Effect->Pivot = Vector2(0.006f, 0.27f);
    Middle_Boss.Special_Effect->MaxFrame = Int2(3, 1);
    Middle_Boss.Special_Effect->P = &Middle_Boss.HitBox->RT;
    Middle_Boss.Special_Effect->isActive = false;


    //PLAYER
    for (int i = 0; i < 10; i++)
    {
        Heart[i]->Position = MAINCAM->Pos + Vector2(21.0f * i + 10.0f, 30.0f);
        Heart[i]->Scale = Vector2(20.0f, 20.0f);
        Heart[i]->isActive = true;
    }

    Link.HitBox->Position = Vector2(WINSIZEX/2.0f, 70.0f);
    Link.HitBox->Scale = Vector2(20.0f * RATIO, 45.0f * RATIO);
    Link.HitBox->Pivot = OFFSET_B;
    Link.HitBox->isFill = false;
    Link.HitBox->color = Color(0.0f, 0.0f, 0.0f, 0.5f);
    Link.HitBox->isActive = false;

    Link.AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
    Link.AttackBox->Pivot = Vector2(0.0f, 0.5f);
    Link.AttackBox->isFill = false;
    Link.AttackBox->color = Color(1.0f, 0.0f, 0.0f, 0.5f);
    Link.AttackBox->isActive = false;
    Link.AttackBox->P = &Link.HitBox->RT;

    Link.StaminaBox->Position = Vector2(-30.0f, 90.0f);
    Link.StaminaBox->Scale = Vector2(40.0f * RATIO, 10.0f * RATIO);
    Link.StaminaBox->Pivot = OFFSET_LB;
    Link.StaminaBox->color = Color(0.5f, 0.5f, 0.0f, 0.5f);
    Link.StaminaBox->isActive = true;
    Link.StaminaBox->P = &Link.HitBox->RT;

    Link.Stand->Scale = Vector2(486.0f/5.0f* RATIO, 97.0f *RATIO);
    Link.Stand->Pivot = Vector2(0.15f, 0.46f);
    Link.Stand->MaxFrame = Int2(5, 1);
    Link.Stand->P = &Link.HitBox->RT;
    Link.Stand->isActive = false;

    Link.Walk->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Walk->Pivot = Vector2(0.15f, 0.45f);
    Link.Walk->MaxFrame = Int2(8, 1);
    Link.Walk->P = &Link.HitBox->RT;
    Link.Walk->isActive = false;

    Link.Run->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Run->Pivot = Vector2(0.13f, 0.5f);
    Link.Run->MaxFrame = Int2(10, 1);
    Link.Run->P = &Link.HitBox->RT;
    Link.Run->isActive = false;

    Link.Run_Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Run_Attack->Pivot = Vector2(0.2f, 0.45f);
    Link.Run_Attack->MaxFrame = Int2(6, 1);
    Link.Run_Attack->P = &Link.HitBox->RT;
    Link.Run_Attack->isActive = false;

    Link.Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Attack->Pivot = Vector2(0.15f, 0.50f);
    Link.Attack->MaxFrame = Int2(5, 1);
    Link.Attack->P = &Link.HitBox->RT;
    Link.Attack->isActive = false;

    Link.Jump->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Jump->Pivot = Vector2(0.15f, 0.5f);
    Link.Jump->MaxFrame = Int2(12, 1);
    Link.Jump->P = &Link.HitBox->RT;
    Link.Jump->isActive = false;

    Link.Dumbling->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Dumbling->Pivot = Vector2(0.15f, 0.46f);
    Link.Dumbling->MaxFrame = Int2(12, 1);
    Link.Dumbling->P = &Link.HitBox->RT;
    Link.Dumbling->isActive = false;

    Link.Kick->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Kick->Pivot = Vector2(0.15f, 0.5f);
    Link.Kick->MaxFrame = Int2(5, 1);
    Link.Kick->P = &Link.HitBox->RT;
    Link.Kick->isActive = false;

    Link.Downattack1->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Downattack1->Pivot = Vector2(0.15f, 0.46f);
    Link.Downattack1->MaxFrame = Int2(12, 1);
    Link.Downattack1->P = &Link.HitBox->RT;
    Link.Downattack1->isActive = false;

    Link.Downattack2->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Downattack2->Pivot = Vector2(0.15f, 0.5f);
    Link.Downattack2->MaxFrame = Int2(10, 1);
    Link.Downattack2->P = &Link.HitBox->RT;
    Link.Downattack2->isActive = false;

    Link.Thrust->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Thrust->Pivot = Vector2(0.15f, 0.5f);
    Link.Thrust->MaxFrame = Int2(6, 1);
    Link.Thrust->P = &Link.HitBox->RT;
    Link.Thrust->isActive = false;

    Link.Defence->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Defence->Pivot = Vector2(0.15f, 0.5f);
    Link.Defence->MaxFrame = Int2(7, 1);
    Link.Defence->P = &Link.HitBox->RT;
    Link.Defence->isActive = false;

    Link.L_Stand->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Stand->Pivot = Vector2(-0.15f, 0.46f);
    Link.L_Stand->MaxFrame = Int2(5, 1);
    Link.L_Stand->P = &Link.HitBox->RT;
    Link.L_Stand->isActive = false;
        
    Link.L_Walk->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Walk->Pivot = Vector2(-0.15f, 0.45f);
    Link.L_Walk->MaxFrame = Int2(8, 1);
    Link.L_Walk->P = &Link.HitBox->RT;
    Link.L_Walk->isActive = false;
         
    Link.L_Run->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Run->Pivot = Vector2(-0.13f, 0.5f);
    Link.L_Run->MaxFrame = Int2(10, 1);
    Link.L_Run->P = &Link.HitBox->RT;
    Link.L_Run->isActive = false;
       
    Link.L_Run_Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Run_Attack->Pivot = Vector2(-0.2f, 0.45f);
    Link.L_Run_Attack->MaxFrame = Int2(6, 1);
    Link.L_Run_Attack->P = &Link.HitBox->RT;
    Link.L_Run_Attack->isActive = false;
      
    Link.L_Attack->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Attack->Pivot = Vector2(-0.15f, 0.50f);
    Link.L_Attack->MaxFrame = Int2(5, 1);
    Link.L_Attack->P = &Link.HitBox->RT;
    Link.L_Attack->isActive = false;
       
    Link.L_Jump->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Jump->Pivot = Vector2(-0.15f, 0.5f);
    Link.L_Jump->MaxFrame = Int2(12, 1);
    Link.L_Jump->P = &Link.HitBox->RT;
    Link.L_Jump->isActive = false;
       
    Link.L_Dumbling->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Dumbling->Pivot = Vector2(-0.15f, 0.46f);
    Link.L_Dumbling->MaxFrame = Int2(12, 1);
    Link.L_Dumbling->P = &Link.HitBox->RT;
    Link.L_Dumbling->isActive = false;

    Link.L_Kick->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Kick->Pivot = Vector2(-0.15f, 0.5f);
    Link.L_Kick->MaxFrame = Int2(5, 1);
    Link.L_Kick->P = &Link.HitBox->RT;
    Link.L_Kick->isActive = false;
       
    Link.L_Downattack1->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Downattack1->Pivot = Vector2(-0.15f, 0.46f);
    Link.L_Downattack1->MaxFrame = Int2(12, 1);
    Link.L_Downattack1->P = &Link.HitBox->RT;
    Link.L_Downattack1->isActive = false;

    Link.L_Downattack2->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Downattack2->Pivot = Vector2(-0.15f, 0.5f);
    Link.L_Downattack2->MaxFrame = Int2(10, 1);
    Link.L_Downattack2->P = &Link.HitBox->RT;
    Link.L_Downattack2->isActive = false;

    Link.L_Thrust->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Thrust->Pivot = Vector2(-0.15f, 0.5f);
    Link.L_Thrust->MaxFrame = Int2(6, 1);
    Link.L_Thrust->P = &Link.HitBox->RT;
    Link.L_Thrust->isActive = false;

    Link.L_Defence->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.L_Defence->Pivot = Vector2(-0.15f, 0.5f);
    Link.L_Defence->MaxFrame = Int2(7, 1);
    Link.L_Defence->P = &Link.HitBox->RT;
    Link.L_Defence->isActive = false;

    Link.Downattack_Effect->Scale = Vector2(486.0f / 5.0f * RATIO, 97.0f * RATIO);
    Link.Downattack_Effect->Pivot = Vector2(0.0f, 0.5f);
    Link.Downattack_Effect->MaxFrame = Int2(5, 1);
    Link.Downattack_Effect->P = &Link.HitBox->RT;
    Link.Downattack_Effect->isActive = false;

    //GIMIC
    Door1->Position = Vector2(4530.0f, 247.0f);
    Door1->Scale = Vector2(150.0f, 103.0f);
    Door1->Pivot = OFFSET_LB;
    Door1->isActive = true;

    Door2->Position = Vector2(4530.0f, 247.0f);
    Door2->Scale = Vector2(150.0f, 103.0f);
    Door2->Pivot = OFFSET_LB;
    Door2->isActive = true;

    Door3->Position = Vector2(4530.0f, 247.0f);
    Door3->Scale = Vector2(150.0f, 103.0f);
    Door3->Pivot = OFFSET_LB;
    Door3->isActive = false;

    DoorBox->Position = Vector2(4550.0f, 247.0f);
    DoorBox->Scale = Vector2(120.0f, 103.0f);
    DoorBox->isFill = false;
    DoorBox->Pivot = OFFSET_LB;
    DoorBox->color = Color(0.0f, 0.5f, 0.0f, 0.5f);
    DoorBox->isActive = false;

    for (int i = 0; i < 3; i++)
    {
        Grave[i]->Position = Vector2(2600.0f + 120.0f * i, 70.0f);
        Grave[i]->Scale = Vector2(60.0f, 54.0f);
        Grave[i]->Pivot = OFFSET_LB;
        Grave[i]->isActive = true;
    }

    Flower->Position = Vector2(2980.0f, 70.0f);
    Flower->Scale = Vector2(66.0f, 79.0f);
    Flower->Pivot = OFFSET_LB;
    Flower->isActive = true;
    Flower->CollisionType = COL_RECT;

    Magic_Book->Position = Vector2(6855.0f, 94.0f);
    Magic_Book->Scale = Vector2(327.0f, 286.0f);
    Magic_Book->Pivot = OFFSET_LB;
    Magic_Book->isActive = true;
    Magic_Book->CollisionType = COL_RECT;

    Potal->Position = Vector2(1080.0f, 70.0f);
    Potal->Scale = Vector2(100.0f, 96.0f);
    Potal->Pivot = OFFSET_LB;
    Potal->MaxFrame = Int2(8, 1);
    Potal->isActive = false;

    PotalBox->Position = Vector2(1080.0f, 70.0f);
    PotalBox->Scale = Vector2(100.0f, 96.0f);
    PotalBox->isFill = false;
    PotalBox->Pivot = OFFSET_LB;
    PotalBox->color = Color(0.0f, 0.5f, 0.0f, 0.5f);
    PotalBox->isActive = false;

    Potal2->Position = Vector2(2980.0f, 70.0f);
    Potal2->Scale = Vector2(100.0f, 96.0f);
    Potal2->Pivot = OFFSET_LB;
    Potal2->MaxFrame = Int2(8, 1);
    Potal2->isActive = false;

    PotalBox2->Position = Vector2(2980.0f, 70.0f);
    PotalBox2->Scale = Vector2(100.0f, 96.0f);
    PotalBox2->isFill = false;
    PotalBox2->Pivot = OFFSET_LB;
    PotalBox2->color = Color(0.0f, 0.5f, 0.0f, 0.5f);
    PotalBox2->isActive = false;

    //NPC
    Npc1->Position = Vector2(WINSIZEX, 150.0f);
    Npc1->Scale = Vector2(100.0f, 156.0f);
    Npc1->MaxFrame = Int2(5, 1);
    Npc1->CollisionType = COL_RECT;
    Npc1->isActive = true;
    Npc1->ChangeAnim(_LOOP, 0.2f);

    Npc2->Position = Vector2(2550.0f, 150.0f);
    Npc2->Scale = Vector2(180.0f, 160.0f);
    Npc2->MaxFrame = Int2(6, 1);
    Npc2->CollisionType = COL_RECT;
    Npc2->isActive = true;
    Npc2->ChangeAnim(_LOOP, 0.2f);

    Npc2_Fear->Position = Vector2(2550.0f, 150.0f);
    Npc2_Fear->Scale = Vector2(180.0f, 160.0f);
    Npc2_Fear->MaxFrame = Int2(3, 1);
    Npc2_Fear->CollisionType = COL_RECT;
    Npc2_Fear->isActive = false;
    Npc2_Fear->ChangeAnim(_LOOP, 0.2f);

    //SCRIPT
    Book->Position = MAINCAM->Pos + Vector2(WINSIZEX-130.0f, WINSIZEY-70.0f);
    Book->Scale = Vector2(104.0f, 88.0f);
    Book->CollisionType = COL_RECT;
    Book->isActive = true;
    Book->Pivot = OFFSET_LB;

    Manual->Position = MAINCAM->Pos + Vector2(WINSIZEX*0.5f, WINSIZEY * 0.5f);
    Manual->Scale = Vector2(400.0f, 300.0f);
    Manual->CollisionType = COL_RECT;
    Manual->isActive = false;

    NPC1_1->Position = Vector2(0.0f, 60.0f);
    NPC1_1->Scale = Vector2(400.0f, 80.0f);
    NPC1_1->CollisionType = COL_RECT;
    NPC1_1->Pivot = OFFSET_B;
    NPC1_1->isActive = false;
    NPC1_1->P = &Npc1->RT;

    NPC1_2->Position = Vector2(0.0f, 60.0f);
    NPC1_2->Scale = Vector2(400.0f, 60.0f);
    NPC1_2->CollisionType = COL_RECT;
    NPC1_2->Pivot = OFFSET_B;
    NPC1_2->isActive = false;
    NPC1_2->P = &Npc1->RT;

    NPC1_3->Position = Vector2(0.0f, 60.0f);
    NPC1_3->Scale = Vector2(400.0f, 40.0f);
    NPC1_3->CollisionType = COL_RECT;
    NPC1_3->Pivot = OFFSET_B;
    NPC1_3->isActive = false;
    NPC1_3->P = &Npc1->RT;

    NPC1_4->Position = Vector2(0.0f, 60.0f);
    NPC1_4->Scale = Vector2(400.0f, 40.0f);
    NPC1_4->CollisionType = COL_RECT;
    NPC1_4->Pivot = OFFSET_B;
    NPC1_4->isActive = false;
    NPC1_4->P = &Npc1->RT;

    NPC1_5->Position = Vector2(0.0f, 60.0f);
    NPC1_5->Scale = Vector2(450.0f, 30.0f);
    NPC1_5->CollisionType = COL_RECT;
    NPC1_5->Pivot = OFFSET_B;
    NPC1_5->isActive = false;
    NPC1_5->P = &Npc1->RT;

    NPC1_6->Position = Vector2(0.0f, 60.0f);
    NPC1_6->Scale = Vector2(300.0f, 30.0f);
    NPC1_6->CollisionType = COL_RECT;
    NPC1_6->Pivot = OFFSET_B;
    NPC1_6->isActive = false;
    NPC1_6->P = &Npc1->RT;

    NPC1_7->Position = Vector2(0.0f, 60.0f);
    NPC1_7->Scale = Vector2(400.0f, 40.0f);
    NPC1_7->CollisionType = COL_RECT;
    NPC1_7->Pivot = OFFSET_B;
    NPC1_7->isActive = false;
    NPC1_7->P = &Npc1->RT;

    NPC2_1->Position = Vector2(0.0f, 60.0f);
    NPC2_1->Scale = Vector2(400.0f, 60.0f);
    NPC2_1->CollisionType = COL_RECT;
    NPC2_1->Pivot = OFFSET_B;
    NPC2_1->isActive = false;
    NPC2_1->P = &Npc2->RT;

    NPC2_2->Position = Vector2(0.0f, 60.0f);
    NPC2_2->Scale = Vector2(400.0f, 65.0f);
    NPC2_2->CollisionType = COL_RECT;
    NPC2_2->Pivot = OFFSET_B;
    NPC2_2->isActive = false;
    NPC2_2->P = &Npc2->RT;

    NPC2_3->Position = Vector2(0.0f, 60.0f);
    NPC2_3->Scale = Vector2(350.0f, 65.0f);
    NPC2_3->CollisionType = COL_RECT;
    NPC2_3->Pivot = OFFSET_B;
    NPC2_3->isActive = false;
    NPC2_3->P = &Npc2->RT;

    NPC3_1->Position = Vector2(0.0f, 60.0f);
    NPC3_1->Scale = Vector2(350.0f, 65.0f);
    NPC3_1->CollisionType = COL_RECT;
    NPC3_1->Pivot = Vector2(-0.23f,1.29f);
    NPC3_1->isActive = false;
    NPC3_1->P = &Middle_Boss.HitBox->RT;

    NPC3_2->Position = Vector2(0.0f, 60.0f);
    NPC3_2->Scale = Vector2(264.0f, 25.0f);
    NPC3_2->CollisionType = COL_RECT;
    NPC3_2->Pivot = Vector2(-0.12f, 2.52f);
    NPC3_2->isActive = false;
    NPC3_2->P = & Middle_Boss.HitBox->RT;

    //SETTING
    //GIMIC
    Potal_Active = false;
    Potal2_Active = false;
    //NPC
    Npc1_Count = 0;
    Npc2_Count = 0;
    Npc3_Count = 0;
    //ENEMY
    Slime.State = EN_DEAD;
    Slime.Hp_Amount = 100;
    Slime.Attack_Time = 0.0f;
    Slime.Rest = true;
    Slime.Damaged = false;
    Slime.Alive = false;
    for (int i = 0; i < 3; i++)
    {
        Goblin[i].State = EN_DEAD;
        Goblin[i].Hp_Amount = 100;
        Goblin[i].Attack_Time = 0.0f;
        Goblin[i].Rest = true;
        Goblin[i].Damaged = false;
        Goblin[i].Alive = false;
    }
    Middle_Boss.Page = 0;
    Middle_Boss.State = MI_DEAD;
    Middle_Boss.Attack_Count = 0;
    Middle_Boss.Hp_Amount = MIDDLEBOSS_HP;
    Middle_Boss.Attack_Time = 0;
    Middle_Boss.Rest = true;
    Middle_Boss.Damaged = false;
    Middle_Boss.Alive = false;
    Middle_Boss.L_Stand->isActive = true;
    Middle_Boss.L_Stand->ChangeAnim(_LOOP, 0.5f); 
    //LINK
    Link.State = PL_STAND;
    Link.Gravity = 0.0f;
    Link.Stand->isActive = true;
    Link.L_Stand->isActive = false;
    Link.Stand->ChangeAnim(_LOOP, 0.5f);
    Link.HitBox->isActive = true;
    Link.AttackBox->isActive = false;
    Link.Jump_Time = 0.0f;
    Link.Attack_Time = 0.0f;
    Link.Stamina = 100.0f;
    Link.Damaged = false;
    Link.Damaged_Time = 0.0f;
    Heart_Life = 10;
    //BGM
    SOUND->Play("BGM1");
    SOUND->SetVolume("BGM1", 0.3f);
    //MOUSE
    Click_Num = 0;
}

void Scene2::Update()
{
    //IMGUI
    ImGui::SliderFloat("POS_LINK_X", &Link.HitBox->Position.x, 0.0f, 8000.0f);
    ImGui::SliderFloat("POS_LINK_Y", &Link.HitBox->Position.y, 0.0f, 2000.0f);
    ImGui::SliderFloat("POS_CAM_X", &MAINCAM->Pos.x, 0.0f, 8000.0f);
    ImGui::SliderFloat("GRAVITY", &Link.Gravity, 0.0f, 500.0f);
    ImGui::SliderInt("Middle_Boss._Hp", &Middle_Boss.Hp_Amount, 0, 500);
    ImGui::SliderInt("Player_HP", &Heart_Life, 0, 10);
    ImGui::SliderFloat("1", &Magic_Book->Position.x, 6000.0f, 8000.0f);
    ImGui::SliderFloat("2", &Magic_Book->Position.y, 0.0f, 500.0f);
    ImGui::SliderFloat("3", &Magic_Book->Scale.x, 0.0f, 500.0f);
    ImGui::SliderFloat("4", &Magic_Book->Scale.y, 0.0f, 500.0f);
    ImGui::SliderFloat("5", &NPC3_1->Scale.x, 0.0f, 500.0f);
    ImGui::SliderFloat("6", &NPC3_1->Scale.y, 0.0f, 300.0f);
    ImGui::SliderFloat("7", &NPC3_1->Pivot.x, -1.0f, 1.0f);
    ImGui::SliderFloat("8", &NPC3_1->Pivot.y, -1.0f, 3.0f);
    ImGui::SliderFloat("9", &NPC3_2->Scale.x, 0.0f, 500.0f);
    ImGui::SliderFloat("10", &NPC3_2->Scale.y, 0.0f, 300.0f);
    ImGui::SliderFloat("11", &NPC3_2->Pivot.x, -1.0f, 1.0f);
    ImGui::SliderFloat("12", &NPC3_2->Pivot.y, -1.0f, 3.0f);
    /////////////////////////////////////////////////////
    //UI
    Book->Position = MAINCAM->Pos + Vector2(WINSIZEX - 130.0f, WINSIZEY - 70.0f);
    Manual->Position = MAINCAM->Pos + Vector2(WINSIZEX * 0.5f, WINSIZEY * 0.5f);
    for (int i = 0; i < Heart_Life; i++)
    {
        Heart[i]->Position = MAINCAM->Pos + Vector2(21.0f * i + 10.0f, 30.0f);
    }
    //LINK
    Link.StaminaBox->Scale = Vector2(40.0f * RATIO / 100.0f * Link.Stamina, 10.0f * RATIO);
    if (Link.Stamina > 100)
        Link.Stamina = 100;
    if (Link.Stamina < 0)
        Link.Stamina = 0;
    if(Link.State != PL_RUN and Link.State != PL_JUMP and Link.State != PL_DUMBLING and !Link.Attack->isActive and !Link.L_Attack->isActive
        and !Link.Kick->isActive and !Link.L_Kick->isActive and !Link.Thrust->isActive and !Link.L_Thrust->isActive and !Link.Defence->isActive and !Link.L_Defence->isActive)
        Link.Stamina += STAMINAREGENERATE * DeltaTime;
    Link.Control_Player(70.0f);
    //LINK DIE
    if (Heart_Life <= 0)
    {
        SOUND->Play("MIDDLE_YOU");
        SOUND->SetVolume("MIDDLE_YOU", 0.3f);
        //middle boss
        Npc3_Count = 0;
        Middle_Boss.Page = 0;
        Middle_Boss.State = MI_DEAD;
        Middle_Boss.Attack_Count = 0;
        Middle_Boss.Hp_Amount = MIDDLEBOSS_HP;
        Middle_Boss.Attack_Time = 0;
        Middle_Boss.Rest = true;
        Middle_Boss.Damaged = false;
        Middle_Boss.Alive = false;
        Middle_Boss.L_Stand->isActive = true;
        Middle_Boss.L_Stand->ChangeAnim(_LOOP, 0.5f);
        Middle_Boss.HitBox->Position = Vector2(5100.0f, 70.0f);
        Middle_Boss.HitBox->Scale = Vector2(100.0f, 100.0f);
        Middle_Boss.HitBox->Pivot = OFFSET_B;
        Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
        Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
        Middle_Boss.AttackBox->isActive = false;
        Middle_Boss.Stand->isActive = false;
        Middle_Boss.Run->isActive = false;
        Middle_Boss.Attack->isActive = false;
        Middle_Boss.Slide1->isActive = false;
        Middle_Boss.Slide2->isActive = false;
        Middle_Boss.L_Run->isActive = false;
        Middle_Boss.L_Attack->isActive = false;
        Middle_Boss.L_Slide1->isActive = false;
        Middle_Boss.L_Slide2->isActive = false;
        Middle_Boss.Mole1->isActive = false;
        Middle_Boss.Mole2->isActive = false;
        Middle_Boss.Motion->isActive = false;
        Middle_Boss.Special->isActive = false;
        Middle_Boss.Special_Effect->isActive = false;


        Link.State = PL_STAND;
        Link.Gravity = 0.0f;
        Link.Stand->isActive = true;
        Link.Stand->ChangeAnim(_LOOP, 0.5f);
        Link.Walk->isActive = false;
        Link.Run->isActive = false;
        Link.Walk->isActive = false;
        Link.Run_Attack->isActive = false;
        Link.Attack->isActive = false;
        Link.Jump->isActive = false;
        Link.Dumbling->isActive = false;
        Link.Kick->isActive = false;
        Link.Downattack1->isActive = false;
        Link.Downattack2->isActive = false;
        Link.Thrust->isActive = false;
        Link.Defence->isActive = false;
        Link.L_Stand->isActive = false;
        Link.L_Walk->isActive = false;
        Link.L_Run->isActive = false;
        Link.L_Run_Attack->isActive = false;
        Link.L_Attack->isActive = false;
        Link.L_Jump->isActive = false;
        Link.L_Dumbling->isActive = false;
        Link.L_Kick->isActive = false;
        Link.L_Downattack1->isActive = false;
        Link.L_Downattack2->isActive = false;
        Link.L_Thrust->isActive = false;
        Link.L_Defence->isActive = false;
        Link.HitBox->isActive = true;
        Link.AttackBox->isActive = false;
        Link.Jump_Time = 0.0f;
        Link.Attack_Time = 0.0f;
        Link.Stamina = 100.0f;
        Link.Damaged = false;
        Link.Damaged_Time = 0.0f;
        Heart_Life = 10;
        Link.HitBox->Position = Vector2(WINSIZEX / 2.0f, 70.0f);
        MAINCAM->Pos.x = 0.0f;

        SOUND->Stop("BGM2");
        SOUND->Stop("BGM3");
        SOUND->Stop("BGM4");
        SOUND->Stop("BGM5");
        SOUND->Stop("BGM6");
        SOUND->Stop("BGM7");
        SOUND->Stop("BGM8");
        SOUND->Stop("BGM9");
        SOUND->Stop("BGM10");
        SOUND->Stop("BGM11");
        SOUND->Stop("BGM12");
        SOUND->Play("BGM1");
        SOUND->SetVolume("BGM1", 0.3f);
    }
    if (Link.Damaged)
    {
        Link.Damaged_Time += DeltaTime;
        Link.Stand->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Walk->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Run->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Run_Attack->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Attack->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Jump->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Dumbling->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Kick->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Downattack1->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Downattack2->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Thrust->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.Defence->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Stand->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Walk->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Run->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Run_Attack->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Attack->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Jump->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Dumbling->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Kick->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Downattack1->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Downattack2->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Thrust->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        Link.L_Defence->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
        if (Link.Damaged_Time > 2.0f)
        {
            Link.Damaged = false;
            Link.Damaged_Time = 0.0f;
            Link.Stand->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Walk->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Run->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Run_Attack->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Attack->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Jump->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Dumbling->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Kick->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Downattack1->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Downattack2->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Thrust->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.Defence->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Stand->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Walk->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Run->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Run_Attack->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Attack->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Jump->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Dumbling->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Kick->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Downattack1->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Downattack2->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Thrust->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
            Link.L_Defence->color = Color(0.5f, 0.5f, 0.5f, 0.5f);
        }
    }
    //BOOK
    if (isCollision(Book, g_WorldMouse) and Npc1_Count>0)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            Manual->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(Manual, g_WorldMouse) and Manual->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            Manual->isActive = false;
            Npc1_Count = 2;
            Click_Num = 0;
        }
    }

    /////////////////////////////////////////
    //START
    //NPC, SCRIPT
    if (isCollision(Npc1, g_WorldMouse) and Npc1_Count==0)
    {
        if (INPUT->KeyUp(VK_LBUTTON))
        {
            SOUND->Play("NPC1");
            SOUND->SetVolume("NPC1", 0.3f);
            Npc1_Count = 1;
            NPC1_1->isActive = true;
        }
    }
    if (isCollision(NPC1_1, g_WorldMouse) and NPC1_1->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_1->isActive = false;
            Click_Num = 0;
        }
    }
    if (isCollision(Npc1, g_WorldMouse) and Npc1_Count == 2)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            SOUND->Play("NPC1");
            SOUND->SetVolume("NPC1", 0.3f);
            NPC1_2->isActive = true;
            Npc1_Count = 3;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_2, g_WorldMouse) and NPC1_2->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num==-1)
        {
            NPC1_2->isActive = false;
            NPC1_3->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_3, g_WorldMouse) and NPC1_3->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_3->isActive = false;
            NPC1_4->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_4, g_WorldMouse) and NPC1_4->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_4->isActive = false;
            NPC1_5->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_5, g_WorldMouse) and NPC1_5->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_5->isActive = false;
            NPC1_6->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_6, g_WorldMouse) and NPC1_6->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_6->isActive = false;
            NPC1_7->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC1_7, g_WorldMouse) and NPC1_7->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC1_7->isActive = false;
            NPC1_7->isActive = false;
            Click_Num = 0;
            Npc1_Count = 4;
        }
    }
    if (Npc1_Count == 4)
    {
        Slime.Alive = true;
        Slime.State = EN_STAND;
        Slime.HitBox->isActive = true;
        Slime.Hp->isActive = true;
        Slime.Stand->isActive = true;
        Slime.Stand->ChangeAnim(_LOOP, 0.5f);
        Npc1_Count = 5;
    }
    //ENEMY
    //SLIME
    Slime.Hp->Scale = Vector2(40.0f * RATIO / 100.0f * Slime.Hp_Amount, 10.0f * RATIO);
    if (Slime.Hp_Amount <= 0)
    {
        SOUND->Play("SLIME_DEAD");
        SOUND->SetVolume("SLIME_DEAD", 0.3f);
        SOUND->Play("ACQUIRE");
        SOUND->SetVolume("ACQUIRE", 0.3f);
        Slime.Hp_Amount = 100;
        Slime.State = EN_DEAD;
        Slime.Attack_Time = 0.0f;
        Slime.Rest = true;
        Slime.Alive = false;
        Slime.HitBox->isActive = false;
        Slime.AttackBox->isActive = false;
        Slime.Hp->isActive = false;
        Slime.Stand->isActive = false;
        Slime.Run->isActive = false;
        Slime.Attack->isActive = false;
        Slime.Hurt->isActive = false;
        Slime.L_Stand->isActive = false;
        Slime.L_Run->isActive = false;
        Slime.L_Attack->isActive = false;
        Slime.L_Hurt->isActive = false;
        Npc1_Count = 6;
        Potal_Active = true;
    }
    if (Potal_Active)
    {
        Potal->isActive = true;
        PotalBox->isActive = true;
        Potal->ChangeAnim(_LOOP, 0.3f);
        Potal_Active = false;
    }
    //slime argorithm
    //slime stand
    if (Slime.State == EN_STAND and Slime.Alive)
    {
        Slime.Attack_Time += DeltaTime;
        if (Slime.Attack_Time > 2.0f and !Slime.Rest)
        {
            Slime.Rest = true;
            Slime.Attack_Time = 0.0f;
        }
        //go run
        if (Slime.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Slime.HitBox->Position.x > 100.0f and Link.HitBox->Position.x - Slime.HitBox->Position.x < 400.0f and Slime.Rest)
        {
            Slime.State = EN_RUN;
            Slime.Run->isActive = true;
            Slime.Run->ChangeAnim(_LOOP, 0.3f);
            Slime.Stand->isActive = false;
            Slime.L_Stand->isActive = false;
        }
        if (Slime.HitBox->Position.x > Link.HitBox->Position.x and Slime.HitBox->Position.x - Link.HitBox->Position.x > 100.0f and Slime.HitBox->Position.x - Link.HitBox->Position.x < 400.0f and Slime.Rest)
        {
            Slime.State = EN_RUN;
            Slime.L_Run->isActive = true;
            Slime.L_Run->ChangeAnim(_REVERSE_LOOP, 0.3f);
            Slime.Stand->isActive = false;
            Slime.L_Stand->isActive = false;
        }

        //go attack
        if (Slime.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Slime.HitBox->Position.x < 100.0f and Slime.Rest)
        {
            SOUND->Play("SLIME_ATTACK");
            SOUND->SetVolume("SLIME_ATTACK", 0.3f);
            Slime.Attack_Time = 0.0f;
            Slime.State = EN_ATTACK;
            Slime.Attack->isActive = true;
            Slime.Attack->ChangeAnim(_ONCE, 0.3f);
            Slime.Stand->isActive = false;
            Slime.L_Stand->isActive = false;
        }
        if (Slime.HitBox->Position.x > Link.HitBox->Position.x and Slime.HitBox->Position.x - Link.HitBox->Position.x < 100.0f and Slime.Rest)
        {
            SOUND->Play("SLIME_ATTACK");
            SOUND->SetVolume("SLIME_ATTACK", 0.3f);
            Slime.Attack_Time = 0.0f;
            Slime.State = EN_ATTACK;
            Slime.L_Attack->isActive = true;
            Slime.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
            Slime.Stand->isActive = false;
            Slime.L_Stand->isActive = false;
        }
    }
    //slime run
    if (Slime.State == EN_RUN and Slime.Alive)
    {
        if (Slime.HitBox->Position.x < Link.HitBox->Position.x)
        {
            Slime.HitBox->Position.x += 80.0f * DeltaTime;
        }
        if (Slime.HitBox->Position.x > Link.HitBox->Position.x)
        {
            Slime.HitBox->Position.x -= 80.0f * DeltaTime;
        }
        //go stand
        if (Slime.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Slime.HitBox->Position.x > 400.0f)
        {
            Slime.State = EN_STAND;
            Slime.Stand->isActive = true;
            Slime.Stand->ChangeAnim(_LOOP, 0.5f);
            Slime.Run->isActive = false;
            Slime.L_Run->isActive = false;
        }
        if (Slime.HitBox->Position.x > Link.HitBox->Position.x and Slime.HitBox->Position.x - Link.HitBox->Position.x > 400.0f)
        {
            Slime.State = EN_STAND;
            Slime.L_Stand->isActive = true;
            Slime.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
            Slime.Run->isActive = false;
            Slime.L_Run->isActive = false;
        }
        //go attack
        if (Slime.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Slime.HitBox->Position.x < 100.0f)
        {
            SOUND->Play("SLIME_ATTACK");
            SOUND->SetVolume("SLIME_ATTACK", 0.3f);
            Slime.Attack_Time = 0.0f;
            Slime.State = EN_ATTACK;
            Slime.Attack->isActive = true;
            Slime.Attack->ChangeAnim(_ONCE, 0.3f);
            Slime.Run->isActive = false;
            Slime.L_Run->isActive = false;
        }
        if (Slime.HitBox->Position.x > Link.HitBox->Position.x and Slime.HitBox->Position.x - Link.HitBox->Position.x < 100.0f)
        {
            SOUND->Play("SLIME_ATTACK");
            SOUND->SetVolume("SLIME_ATTACK", 0.3f);
            Slime.Attack_Time = 0.0f;
            Slime.State = EN_ATTACK;
            Slime.L_Attack->isActive = true;
            Slime.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
            Slime.Run->isActive = false;
            Slime.L_Run->isActive = false;
        }
    }
    //slime attack
    if (Slime.State == EN_ATTACK and Slime.Alive)
    {
        Slime.Attack_Time += DeltaTime;
        if (Slime.Attack_Time > 1.5f)
        {
            Slime.Rest = false;
            Slime.Attack_Time = 0.0f;
            if (Slime.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Slime.State = EN_STAND;
                Slime.Stand->isActive = true;
                Slime.Stand->ChangeAnim(_LOOP, 0.5f);
                Slime.Attack->isActive = false;
                Slime.L_Attack->isActive = false;
            }
            if (Slime.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Slime.State = EN_STAND;
                Slime.L_Stand->isActive = true;
                Slime.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Slime.Attack->isActive = false;
                Slime.L_Attack->isActive = false;
            }
        }
        if (Slime.Attack_Time > 0.6f)
        {
            if (Slime.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Slime.HitBox->Position.x += 100.0f * DeltaTime;
            }
            if (Slime.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Slime.HitBox->Position.x -= 100.0f * DeltaTime;
            }
        }
    }
    //Potal
    if (isCollision(PotalBox, Link.HitBox) and INPUT->KeyDown('Q') and Potal->isActive)
    {
        SOUND->Play("PORTAL");
        SOUND->SetVolume("PORTAL", 0.3f);
        SOUND->Stop("BGM1");
        SOUND->Play("BGM3");
        SOUND->SetVolume("BGM3", 0.3f);
        Link.HitBox->Position = Vector2(2100.0f, 70.0f);
        MAINCAM->Pos.x = 2000.0f;
    }
    ///////////////////////////////////////////////////////////////////

    //GRAVE
    //NPC, SCRIPT
    if (isCollision(Npc2, g_WorldMouse) and Npc2_Count == 0)
    {
        if (INPUT->KeyUp(VK_LBUTTON))
        {
            SOUND->Play("NPC2_2");
            SOUND->SetVolume("NPC2_2", 0.3f);
            NPC2_1->isActive = true;
            Npc2_Count = 1;
        }
    }
    if (isCollision(NPC2_1, g_WorldMouse) and NPC2_1->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC2_1->isActive = false;
            NPC2_2->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC2_2, g_WorldMouse) and NPC2_2->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC2_2->isActive = false;
            Click_Num = 0;
            Npc2_Count = 2;
        }
    }
    //FLOWER
    if (isCollision(Flower, Link.HitBox) and INPUT->KeyDown('Q') and Npc2_Count == 2)
    {
        SOUND->Play("ACQUIRE");
        SOUND->SetVolume("ACQUIRE", 0.3f);
        Flower->isActive = false;
        Npc2_Count = 3;
    }
    if (Npc2_Count == 3)
    {
        Npc2->isActive = false;
        Npc2_Fear->isActive = true;
        Npc2_Fear->ChangeAnim(_ONCE, 0.5f);
        SOUND->Stop("BGM3");
        SOUND->Play("BGM2");
        SOUND->SetVolume("BGM2", 0.3f);

        for (int i = 0; i < 3; i++)
        {
            Goblin[i].Alive = true;
            Goblin[i].State = EN_STAND;
            Goblin[i].HitBox->isActive = true;
            Goblin[i].Hp->isActive = true;
            Goblin[i].Stand->isActive = true;
            Goblin[i].Stand->ChangeAnim(_LOOP, 0.5f);
            SOUND->Play("NPC2_1");
            SOUND->SetVolume("NPC2_1", 0.3f);
            SOUND->Play("GOBLIN_APPEAR");
            SOUND->SetVolume("GOBLIN_APPEAR", 0.3f);
            if (i == 2)
                Npc2_Count = 4;
        }
    }

    //ENEMY
    //GOBLIN
    for (int i = 0; i < 3; i++)
    {
        Goblin[i].Hp->Scale = Vector2(40.0f * RATIO / 100.0f * Goblin[i].Hp_Amount, 10.0f * RATIO);
    }
    for (int i = 0; i < 3; i++)
    {
        if (Goblin[i].Hp_Amount <= 0)
        {
            SOUND->Play("GOBLIN_DEAD");
            SOUND->SetVolume("GOBLIN_DEAD", 0.3f);
            Goblin[i].Hp_Amount = 150;
            Goblin[i].State = EN_DEAD;
            Goblin[i].Attack_Time = 0.0f;
            Goblin[i].Rest = true;
            Goblin[i].Alive = false;
            Goblin[i].HitBox->isActive = false;
            Goblin[i].AttackBox->isActive = false;
            Goblin[i].Hp->isActive = false;
            Goblin[i].Stand->isActive = false;
            Goblin[i].Run->isActive = false;
            Goblin[i].Attack1->isActive = false;
            Goblin[i].Attack2->isActive = false;
            Goblin[i].Hurt->isActive = false;
            Goblin[i].L_Stand->isActive = false;
            Goblin[i].L_Run->isActive = false;
            Goblin[i].L_Attack1->isActive = false;
            Goblin[i].L_Attack2->isActive = false;
            Goblin[i].L_Hurt->isActive = false;
        }
    }
    if (Goblin[0].Hp_Amount == 150 and Goblin[1].Hp_Amount == 150 and Goblin[2].Hp_Amount == 150)
    {
        Npc2_Count = 5;
        Npc2->isActive = true;
        Npc2_Fear->isActive = false;
        Npc2->ChangeAnim(_LOOP, 0.5f);
        SOUND->Stop("BGM2");
        SOUND->Play("BGM3");
        SOUND->SetVolume("BGM3", 0.3f);
        for (int i = 0; i < 3; i++)
        {
            Goblin[i].Hp_Amount = 100;
        }
    }
    if (isCollision(Npc2, g_WorldMouse) and Npc2_Count == 5)
    {
        if (INPUT->KeyUp(VK_LBUTTON))
        {
            SOUND->Play("NPC2_2");
            SOUND->SetVolume("NPC2_2", 0.3f);
            NPC2_3->isActive = true;
            Npc2_Count = 6;
        }
    }
    if (isCollision(NPC2_3, g_WorldMouse) and NPC2_3->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC2_3->isActive = false;
            Click_Num = 0;
            Potal2_Active = true;
        }
    }
    if (Potal2_Active)
    {
        Potal2->isActive = true;
        PotalBox2->isActive = true;
        Potal2->ChangeAnim(_LOOP, 0.3f);
        Potal2_Active = false;
    }
    //goblin argorithm
    for (int i = 0; i < 3; i++)
    {
        //stand
        if (Goblin[i].State == EN_STAND and Goblin[i].Alive)
        {
            Goblin[i].Attack_Time += DeltaTime;
            if (Goblin[i].Attack_Time > 2.0f and !Goblin[i].Rest)
            {
                Goblin[i].Rest = true;
                Goblin[i].Attack_Time = 0.0f;
            }
            //go run
            if (Goblin[i].HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Goblin[i].HitBox->Position.x > 200.0f and Link.HitBox->Position.x - Goblin[i].HitBox->Position.x < 400.0f and Goblin[i].Rest)
            {
                Goblin[i].State = EN_RUN;
                Goblin[i].Run->isActive = true;
                Goblin[i].Run->ChangeAnim(_LOOP, 0.2f);
                Goblin[i].Stand->isActive = false;
                Goblin[i].L_Stand->isActive = false;
            }
            if (Goblin[i].HitBox->Position.x > Link.HitBox->Position.x and Goblin[i].HitBox->Position.x - Link.HitBox->Position.x > 200.0f and Goblin[i].HitBox->Position.x - Link.HitBox->Position.x < 400.0f and Goblin[i].Rest)
            {
                Goblin[i].State = EN_RUN;
                Goblin[i].L_Run->isActive = true;
                Goblin[i].L_Run->ChangeAnim(_REVERSE_LOOP, 0.2f);
                Goblin[i].Stand->isActive = false;
                Goblin[i].L_Stand->isActive = false;
            }
            
            //go attack
            if (Goblin[i].HitBox->Position.x <= Link.HitBox->Position.x and Link.HitBox->Position.x - Goblin[i].HitBox->Position.x < 200.0f and Goblin[i].Rest)
            {
                SOUND->Play("GOBLIN_ATTACK");
                SOUND->SetVolume("GOBLIN_ATTACK", 0.3f);
                Goblin[i].Attack_Time = 0.0f;
                Goblin[i].State = EN_ATTACK;
                Goblin[i].Attack1->isActive = true;
                Goblin[i].Attack1->ChangeAnim(_ONCE, 0.1f);
                Goblin[i].Stand->isActive = false;
                Goblin[i].L_Stand->isActive = false;
            }
            if (Goblin[i].HitBox->Position.x >= Link.HitBox->Position.x and Goblin[i].HitBox->Position.x - Link.HitBox->Position.x < 200.0f and Goblin[i].Rest)
            {
                SOUND->Play("GOBLIN_ATTACK");
                SOUND->SetVolume("GOBLIN_ATTACK", 0.3f);
                Goblin[i].Attack_Time = 0.0f;
                Goblin[i].State = EN_ATTACK;
                Goblin[i].L_Attack1->isActive = true;
                Goblin[i].L_Attack1->ChangeAnim(_REVERSE_ONCE, 0.1f);
                Goblin[i].Stand->isActive = false;
                Goblin[i].L_Stand->isActive = false;
            }
        }
        //run
        if (Goblin[i].State == EN_RUN and Goblin[i].Alive)
        {
            if (Goblin[i].HitBox->Position.x < Link.HitBox->Position.x)
            {
                Goblin[i].HitBox->Position.x += 80.0f * DeltaTime;
            }
            if (Goblin[i].HitBox->Position.x > Link.HitBox->Position.x)
            {
                Goblin[i].HitBox->Position.x -= 80.0f * DeltaTime;
            }
            //go stand
            if (Goblin[i].HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Goblin[i].HitBox->Position.x > 400.0f)
            {
                Goblin[i].State = EN_STAND;
                Goblin[i].Stand->isActive = true;
                Goblin[i].Stand->ChangeAnim(_LOOP, 0.5f);
                Goblin[i].Run->isActive = false;
                Goblin[i].L_Run->isActive = false;
            }
            if (Goblin[i].HitBox->Position.x > Link.HitBox->Position.x and Goblin[i].HitBox->Position.x - Link.HitBox->Position.x > 400.0f)
            {
                Goblin[i].State = EN_STAND;
                Goblin[i].L_Stand->isActive = true;
                Goblin[i].L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Goblin[i].Run->isActive = false;
                Goblin[i].L_Run->isActive = false;
            }
            //go attack
            if (Goblin[i].HitBox->Position.x <= Link.HitBox->Position.x and Link.HitBox->Position.x - Goblin[i].HitBox->Position.x < 200.0f)
            {
                SOUND->Play("GOBLIN_ATTACK");
                SOUND->SetVolume("GOBLIN_ATTACK", 0.3f);
                Goblin[i].Attack_Time = 0.0f;
                Goblin[i].State = EN_ATTACK;
                Goblin[i].Attack1->isActive = true;
                Goblin[i].Attack1->ChangeAnim(_ONCE, 0.1f);
                Goblin[i].Run->isActive = false;
                Goblin[i].L_Run->isActive = false;
            }
            if (Goblin[i].HitBox->Position.x >= Link.HitBox->Position.x and Goblin[i].HitBox->Position.x - Link.HitBox->Position.x < 200.0f)
            {
                SOUND->Play("GOBLIN_ATTACK");
                SOUND->SetVolume("GOBLIN_ATTACK", 0.3f);
                Goblin[i].Attack_Time = 0.0f;
                Goblin[i].State = EN_ATTACK;
                Goblin[i].L_Attack1->isActive = true;
                Goblin[i].L_Attack1->ChangeAnim(_REVERSE_ONCE, 0.1f);
                Goblin[i].Run->isActive = false;
                Goblin[i].L_Run->isActive = false;
            }
        }
        //attack
        if (Goblin[i].State == EN_ATTACK and Goblin[i].Alive)
        {
            Goblin[i].Attack_Time += DeltaTime;
            if (Goblin[i].Attack_Time > 0.6f and (Goblin[i].Attack1->isActive or Goblin[i].L_Attack1->isActive))
            {
                if (Goblin[i].Attack1->isActive)
                {
                    Goblin[i].Attack1->isActive = false;
                    Goblin[i].L_Attack1->isActive = false;
                    Goblin[i].Attack2->isActive = true;
                    Goblin[i].Attack2->ChangeAnim(_ONCE, 0.1f);
                }
                if (Goblin[i].L_Attack1->isActive)
                {
                    Goblin[i].Attack1->isActive = false;
                    Goblin[i].L_Attack1->isActive = false;
                    Goblin[i].L_Attack2->isActive = true;
                    Goblin[i].L_Attack2->ChangeAnim(_REVERSE_ONCE, 0.1f);
                }
            }
            if (Goblin[i].Attack_Time > 0.8f and Goblin[i].Attack_Time < 1.1f and Goblin[i].Attack2->isActive)
            {
                Goblin[i].AttackBox->isActive = true;
                Goblin[i].AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
                Goblin[i].AttackBox->Pivot = Vector2(0.6f, 0.5f);
            }
            if (Goblin[i].Attack_Time > 0.8f and Goblin[i].Attack_Time < 1.1f and Goblin[i].L_Attack2->isActive)
            {
                Goblin[i].AttackBox->isActive = true;
                Goblin[i].AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
                Goblin[i].AttackBox->Pivot = Vector2(-0.6f, 0.5f);
            }
            if (Goblin[i].Attack_Time > 1.1f)
            {
                Goblin[i].AttackBox->isActive = false;
                Goblin[i].AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                Goblin[i].AttackBox->Pivot = Vector2(0.0f, 0.5f);
            }
            if (Goblin[i].Attack_Time >= 1.3f)
            {
                Goblin[i].Rest = false;
                Goblin[i].Attack_Time = 0.0f;
                if (Goblin[i].HitBox->Position.x <= Link.HitBox->Position.x)
                {
                    Goblin[i].State = EN_STAND;
                    Goblin[i].Stand->isActive = true;
                    Goblin[i].Stand->ChangeAnim(_LOOP, 0.5f);
                    Goblin[i].Attack2->isActive = false;
                    Goblin[i].L_Attack2->isActive = false;
                    Goblin[i].Attack1->isActive = false;
                    Goblin[i].L_Attack1->isActive = false;
                }
                if (Goblin[i].HitBox->Position.x >= Link.HitBox->Position.x)
                {
                    Goblin[i].State = EN_STAND;
                    Goblin[i].L_Stand->isActive = true;
                    Goblin[i].L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Goblin[i].Attack2->isActive = false;
                    Goblin[i].L_Attack2->isActive = false;
                    Goblin[i].Attack1->isActive = false;
                    Goblin[i].L_Attack1->isActive = false;
                }
            }
            if (Goblin[i].Attack_Time > 0.2f and Goblin[i].Attack_Time < 0.8f)
            {
                if (Goblin[i].HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Goblin[i].HitBox->Position.x += 200.0f * DeltaTime;
                }
                if (Goblin[i].HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Goblin[i].HitBox->Position.x -= 200.0f * DeltaTime;
                }
            }
        }
    }
    //Potal
    if (isCollision(PotalBox2, Link.HitBox) and INPUT->KeyDown('Q') and Npc2_Count == 6)
    {
        SOUND->Play("PORTAL");
        SOUND->SetVolume("PORTAL", 0.3f);
        SOUND->Stop("BGM3");
        SOUND->Play("BGM4");
        SOUND->SetVolume("BGM4", 0.3f);
        Link.HitBox->Position = Vector2(4100.0f, 70.0f);
        MAINCAM->Pos.x = 4000.0f;
    }

    //CASTLE
    //script
    if (isCollision(Middle_Boss.HitBox, g_WorldMouse) and Npc3_Count == 0)
    {
        if (INPUT->KeyUp(VK_LBUTTON))
        {
            SOUND->Play("MIDDLE_MOLE2");
            SOUND->SetVolume("MIDDLE_MOLE2", 0.3f);
            NPC3_1->isActive = true;
            Npc3_Count = 1;
        }
    }
    if (isCollision(NPC3_1, g_WorldMouse) and NPC3_1->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC3_1->isActive = false;
            NPC3_2->isActive = true;
            Click_Num = 0;
        }
    }
    if (isCollision(NPC3_2, g_WorldMouse) and NPC3_2->isActive)
    {
        if (INPUT->KeyDown(VK_LBUTTON) and Click_Num == 0)
            Click_Num = -1;
        if (INPUT->KeyUp(VK_LBUTTON) and Click_Num == -1)
        {
            NPC3_2->isActive = false;
            Click_Num = 0;
            Npc3_Count = 2;
            SOUND->Play("MIDDLE_START");
            SOUND->SetVolume("MIDDLE_START", 0.3f);
        }
    }
    if (Npc3_Count == 2)
    {
        Npc3_Count = 3;
        SOUND->Stop("BGM4");
        SOUND->Play("BGM8");
        SOUND->SetVolume("BGM8", 0.3f);
        Middle_Boss.Page = 1;
        Middle_Boss.Alive = true;
        Middle_Boss.State = MI_STAND;
        Middle_Boss.HitBox->isActive = true;
        Middle_Boss.Hp->isActive = true;
        Middle_Boss.L_Stand->isActive = true;
        Middle_Boss.L_Stand->ChangeAnim(_LOOP, 0.5f);
    }
    //ENEMY
    //MiddleBoss
    Middle_Boss.Hp->Scale = Vector2(100.0f/ MIDDLEBOSS_HP * Middle_Boss.Hp_Amount, 15.0f);
    if (Middle_Boss.Hp_Amount <= MIDDLEBOSS_HP/2 and Middle_Boss.Page == 1)
    {
        SOUND->Play("MIDDLE_MOTION2");
        SOUND->SetVolume("MIDDLE_MOTION2", 0.3f);
        SOUND->Play("MIDDLE_MOTION");
        SOUND->SetVolume("MIDDLE_MOTION", 0.3f);
        Middle_Boss.Page = 2;
        Middle_Boss.Hp_Amount = MIDDLEBOSS_HP / 2;
        Middle_Boss.State = MI_MOTION;
        Middle_Boss.Attack_Time = 0.0f;
        Middle_Boss.Attack_Count = 0;
        Middle_Boss.Rest = true;
        Middle_Boss.Stand->isActive = false;
        Middle_Boss.Run->isActive = false;
        Middle_Boss.Attack->isActive = false;
        Middle_Boss.Slide1->isActive = false;
        Middle_Boss.Slide2->isActive = false;
        Middle_Boss.Hurt->isActive = false;
        Middle_Boss.L_Stand->isActive = false;
        Middle_Boss.L_Run->isActive = false;
        Middle_Boss.L_Attack->isActive = false;
        Middle_Boss.L_Slide1->isActive = false;
        Middle_Boss.L_Slide2->isActive = false;
        Middle_Boss.L_Hurt->isActive = false;
        Middle_Boss.Mole1->isActive = false;
        Middle_Boss.Mole2->isActive = false;
        Middle_Boss.Special->isActive = false;
        Middle_Boss.Special_Effect->isActive = false;
        Middle_Boss.Motion->isActive = true;
        Middle_Boss.Motion->ChangeAnim(_LOOP, 0.2f);
        SOUND->Stop("BGM8");
        SOUND->Play("BGM10");
        SOUND->SetVolume("BGM10", 0.3f);
    }
    if (Middle_Boss.Hp_Amount <= 0 and Middle_Boss.Page == 2)
    {
        SOUND->Play("MIDDLE_DEAD");
        SOUND->SetVolume("MIDDLE_DEAD", 0.3f);
        SOUND->Play("ACQUIRE");
        SOUND->SetVolume("ACQUIRE", 0.3f);
        Middle_Boss.Page = 0;
        Middle_Boss.Hp_Amount = MIDDLEBOSS_HP;
        Middle_Boss.State = MI_DEAD;
        Middle_Boss.Attack_Time = 0.0f;
        Middle_Boss.Rest = true;
        Middle_Boss.Alive = false;
        Middle_Boss.HitBox->isActive = false;
        Middle_Boss.AttackBox->isActive = false;
        Middle_Boss.Hp->isActive = false;
        Middle_Boss.Stand->isActive = false;
        Middle_Boss.Run->isActive = false;
        Middle_Boss.Attack->isActive = false;
        Middle_Boss.Slide1->isActive = false;
        Middle_Boss.Slide2->isActive = false;
        Middle_Boss.Hurt->isActive = false;
        Middle_Boss.L_Stand->isActive = false;
        Middle_Boss.L_Run->isActive = false;
        Middle_Boss.L_Attack->isActive = false;
        Middle_Boss.L_Slide1->isActive = false;
        Middle_Boss.L_Slide2->isActive = false;
        Middle_Boss.L_Hurt->isActive = false;
        Middle_Boss.Mole1->isActive = false;
        Middle_Boss.Mole2->isActive = false;
        Middle_Boss.Motion->isActive = false;
        Middle_Boss.Special->isActive = false;
        Middle_Boss.Special_Effect->isActive = false;
        Door2->isActive = false;
        Door1->isActive = false;
        Door3->isActive = true;
        DoorBox->isActive = true;
        SOUND->Stop("BGM10");
        SOUND->Play("BGM11");
        SOUND->SetVolume("BGM11", 0.3f);
    }

    if (isCollision(DoorBox, Link.HitBox) and INPUT->KeyDown('Q') and Door3->isActive)
    {
        Link.HitBox->Position = Vector2(6100.0f, 70.0f);
        MAINCAM->Pos.x = 6000.0f;
    }
    
    //MiddleBoss algorithm
    //page1
    if (Middle_Boss.Page == 1)
    {
        //MiddleBoss stand
        if (Middle_Boss.State == MI_STAND and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 1.0f and !Middle_Boss.Rest)
            {
                Middle_Boss.Attack_Count = RndInt(0, 5);
                Middle_Boss.Rest = true;
                Middle_Boss.Attack_Time = 0.0f;
            }
            if ((Middle_Boss.Attack_Count == 0 or Middle_Boss.Attack_Count == 1 or Middle_Boss.Attack_Count == 2)and Middle_Boss.Rest)
            {
                //go run
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x > 150.0f and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 600.0f and Middle_Boss.Rest)
                {
                    Middle_Boss.State = MI_RUN;
                    Middle_Boss.Run->isActive = true;
                    Middle_Boss.Run->ChangeAnim(_LOOP, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 150.0f and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 600.0f and Middle_Boss.Rest)
                {
                    Middle_Boss.State = MI_RUN;
                    Middle_Boss.L_Run->isActive = true;
                    Middle_Boss.L_Run->ChangeAnim(_REVERSE_LOOP, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                //go attack
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 150.0f and Middle_Boss.Rest)
                {
                    SOUND->Play("MIDDLE_ATTACK");
                    SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_ATTACK;
                    Middle_Boss.Attack->isActive = true;
                    Middle_Boss.Attack->ChangeAnim(_ONCE, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 150.0f and Middle_Boss.Rest)
                {
                    SOUND->Play("MIDDLE_ATTACK");
                    SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_ATTACK;
                    Middle_Boss.L_Attack->isActive = true;
                    Middle_Boss.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
            }
            
            //go mole
            if ((Middle_Boss.Attack_Count == 3 or Middle_Boss.Attack_Count == 4 or Middle_Boss.Attack_Count == 5) and Middle_Boss.Rest)
            {
                SOUND->Play("MIDDLE_MOLE");
                SOUND->SetVolume("MIDDLE_MOLE", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_MOLE;
                Middle_Boss.Mole1->isActive = true;
                Middle_Boss.Mole1->ChangeAnim(_ONCE, 0.2f);
                Middle_Boss.Stand->isActive = false;
                Middle_Boss.L_Stand->isActive = false;
            }
        }
        //MiddleBoss run
        if (Middle_Boss.State == MI_RUN and Middle_Boss.Alive)
        {
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Middle_Boss.HitBox->Position.x += 80.0f * DeltaTime;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Middle_Boss.HitBox->Position.x -= 80.0f * DeltaTime;
            }
            //go stand
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x > 600.0f)
            {
                Middle_Boss.State = MI_STAND;
                Middle_Boss.Stand->isActive = true;
                Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 600.0f)
            {
                Middle_Boss.State = MI_STAND;
                Middle_Boss.L_Stand->isActive = true;
                Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            //go attack
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 150.0f)
            {
                SOUND->Play("MIDDLE_ATTACK");
                SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_ATTACK;
                Middle_Boss.Attack->isActive = true;
                Middle_Boss.Attack->ChangeAnim(_ONCE, 0.3f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 150.0f)
            {
                SOUND->Play("MIDDLE_ATTACK");
                SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_ATTACK;
                Middle_Boss.L_Attack->isActive = true;
                Middle_Boss.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
        }
        //MiddleBoss attack
        if (Middle_Boss.State == MI_ATTACK and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 1.2f)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Attack->isActive = false;
                    Middle_Boss.L_Attack->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Attack->isActive = false;
                    Middle_Boss.L_Attack->isActive = false;
                }
                
            }
            if (Middle_Boss.Attack_Time > 0.3f)
            {
                Middle_Boss.AttackBox->isActive = true;
                if (Middle_Boss.Attack->isActive)
                {
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(0.35f, 0.5f);
                }
                if (Middle_Boss.L_Attack->isActive)
                {
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(-0.35f, 0.5f);
                }
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x += 100.0f * DeltaTime;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x -= 100.0f * DeltaTime;
                }
            }
        }
        //MiddleBoss mole
        if (Middle_Boss.State == MI_MOLE and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if ((Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 3.0f or Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < -3.0f) and Middle_Boss.Mole1->isActive and Middle_Boss.Attack_Time > 1.2f)
            {
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x += 500.0f * DeltaTime;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x -= 500.0f * DeltaTime;
                }
            }
            if (Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x <= 3.0f and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x >= -3.0f and Middle_Boss.Mole1->isActive and Middle_Boss.Attack_Time > 1.2f)
            {
                SOUND->Stop("MIDDLE_MOLE");
                SOUND->Play("MIDDLE_MOLE2");
                SOUND->SetVolume("MIDDLE_MOLE2", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.Mole1->isActive = false;
                Middle_Boss.Mole2->isActive = true;
                Middle_Boss.Mole2->ChangeAnim(_ONCE,0.3f);
                Middle_Boss.AttackBox->isActive = true;
                Middle_Boss.AttackBox->Scale = Vector2(144.0f, 106.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
            }
            //go stand
            if (Middle_Boss.Attack_Time > 0.6f and Middle_Boss.Mole2->isActive)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Mole1->isActive = false;
                    Middle_Boss.Mole2->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Mole1->isActive = false;
                    Middle_Boss.Mole2->isActive = false;
                }
            }

        }
    }
    //page2
    if (Middle_Boss.Page == 2)
    {
        //MiddleBoss motion
        if(Middle_Boss.State == MI_MOTION and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;

            if (Middle_Boss.Attack_Time > 3.0f)
            {
                SOUND->Stop("MIDDLE_MOTION");
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Motion->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Motion->isActive = false;
                }
            }
        }
        //MiddleBoss stand
        if (Middle_Boss.State == MI_STAND and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 1.5f and !Middle_Boss.Rest)
            {
                Middle_Boss.Attack_Count = RndInt(0, 5);
                Middle_Boss.Rest = true;
                Middle_Boss.Attack_Time = 0.0f;
            }
            if (Middle_Boss.Attack_Count == 0 and Middle_Boss.Rest)
            {
                //go run
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x > 150.0f and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 600.0f)
                {
                    Middle_Boss.State = MI_RUN;
                    Middle_Boss.Run->isActive = true;
                    Middle_Boss.Run->ChangeAnim(_LOOP, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 150.0f and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 600.0f)
                {
                    Middle_Boss.State = MI_RUN;
                    Middle_Boss.L_Run->isActive = true;
                    Middle_Boss.L_Run->ChangeAnim(_REVERSE_LOOP, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                //go attack
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 150.0f)
                {
                    SOUND->Play("MIDDLE_ATTACK");
                    SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_ATTACK;
                    Middle_Boss.Attack->isActive = true;
                    Middle_Boss.Attack->ChangeAnim(_ONCE, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 150.0f)
                {
                    SOUND->Play("MIDDLE_ATTACK");
                    SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_ATTACK;
                    Middle_Boss.L_Attack->isActive = true;
                    Middle_Boss.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                }
            }
            //go slide
            if ((Middle_Boss.Attack_Count == 1 or Middle_Boss.Attack_Count == 2) and Middle_Boss.Rest)
            {
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    SOUND->Play("MIDDLE_SLIDE");
                    SOUND->SetVolume("MIDDLE_SLIDE", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_SLIDE;
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                    Middle_Boss.Slide1->isActive = true;
                    Middle_Boss.Slide1->ChangeAnim(_ONCE, 0.5f);
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    SOUND->Play("MIDDLE_SLIDE");
                    SOUND->SetVolume("MIDDLE_SLIDE", 0.3f);
                    Middle_Boss.Attack_Time = 0.0f;
                    Middle_Boss.State = MI_SLIDE;
                    Middle_Boss.Stand->isActive = false;
                    Middle_Boss.L_Stand->isActive = false;
                    Middle_Boss.L_Slide1->isActive = true;
                    Middle_Boss.L_Slide1->ChangeAnim(_REVERSE_ONCE, 0.5f);
                }
            }
            //go mole
            if (Middle_Boss.Attack_Count == 5 and Middle_Boss.Rest)
            {
                SOUND->Play("MIDDLE_MOLE");
                SOUND->SetVolume("MIDDLE_MOLE", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_MOLE;
                Middle_Boss.Mole1->isActive = true;
                Middle_Boss.Mole1->ChangeAnim(_ONCE, 0.2f);
                Middle_Boss.Stand->isActive = false;
                Middle_Boss.L_Stand->isActive = false;
            }
            //go special
            if ((Middle_Boss.Attack_Count == 3 or Middle_Boss.Attack_Count == 4) and Middle_Boss.Rest)
            {
                SOUND->Play("MIDDLE_SPECIAL");
                SOUND->SetVolume("MIDDLE_SPECIAL", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_SPECIAL;
                Middle_Boss.Special->isActive = true;
                Middle_Boss.Stand->isActive = false;
                Middle_Boss.L_Stand->isActive = false;
            }
        }
        //MiddleBoss run
        if (Middle_Boss.State == MI_RUN and Middle_Boss.Alive)
        {
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Middle_Boss.HitBox->Position.x += 100.0f * DeltaTime;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Middle_Boss.HitBox->Position.x -= 100.0f * DeltaTime;
            }
            //go stand
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x > 600.0f)
            {
                Middle_Boss.State = MI_STAND;
                Middle_Boss.Stand->isActive = true;
                Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 600.0f)
            {
                Middle_Boss.State = MI_STAND;
                Middle_Boss.L_Stand->isActive = true;
                Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            //go attack
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Link.HitBox->Position.x - Middle_Boss.HitBox->Position.x < 150.0f)
            {
                SOUND->Play("MIDDLE_ATTACK");
                SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_ATTACK;
                Middle_Boss.Attack->isActive = true;
                Middle_Boss.Attack->ChangeAnim(_ONCE, 0.3f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < 150.0f)
            {
                SOUND->Play("MIDDLE_ATTACK");
                SOUND->SetVolume("MIDDLE_ATTACK", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.State = MI_ATTACK;
                Middle_Boss.L_Attack->isActive = true;
                Middle_Boss.L_Attack->ChangeAnim(_REVERSE_ONCE, 0.3f);
                Middle_Boss.Run->isActive = false;
                Middle_Boss.L_Run->isActive = false;
            }
        }
        //MiddleBoss attack
        if (Middle_Boss.State == MI_ATTACK and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 1.2f)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Attack->isActive = false;
                    Middle_Boss.L_Attack->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Attack->isActive = false;
                    Middle_Boss.L_Attack->isActive = false;
                }

            }
            if (Middle_Boss.Attack_Time > 0.3f)
            {
                Middle_Boss.AttackBox->isActive = true;
                if (Middle_Boss.Attack->isActive)
                {
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(0.35f, 0.5f);
                }
                if (Middle_Boss.L_Attack->isActive)
                {
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(-0.35f, 0.5f);
                }
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x += 100.0f * DeltaTime;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x -= 100.0f * DeltaTime;
                }
            }
        }
        //MiddleBoss mole
        if (Middle_Boss.State == MI_MOLE and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if ((Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x > 3.0f or Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x < -3.0f) and Middle_Boss.Mole1->isActive and Middle_Boss.Attack_Time > 1.2f)
            {
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x += 500.0f * DeltaTime;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.HitBox->Position.x -= 500.0f * DeltaTime;
                }
            }
            if (Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x <= 3.0f and Middle_Boss.HitBox->Position.x - Link.HitBox->Position.x >= -3.0f and Middle_Boss.Mole1->isActive and Middle_Boss.Attack_Time > 1.2f)
            {
                SOUND->Stop("MIDDLE_MOLE");
                SOUND->Play("MIDDLE_MOLE2");
                SOUND->SetVolume("MIDDLE_MOLE2", 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.Mole1->isActive = false;
                Middle_Boss.Mole2->isActive = true;
                Middle_Boss.Mole2->ChangeAnim(_ONCE, 0.3f);
                Middle_Boss.AttackBox->isActive = true;
                Middle_Boss.AttackBox->Scale = Vector2(144.0f, 106.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
            }
            //go stand
            if (Middle_Boss.Attack_Time > 0.6f and Middle_Boss.Mole2->isActive)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.Attack_Count = RndInt(0, 5);
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Mole1->isActive = false;
                    Middle_Boss.Mole2->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.Attack_Count = RndInt(0, 5);
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Mole1->isActive = false;
                    Middle_Boss.Mole2->isActive = false;
                }
            }
        }
        //MiddleBoss Slide
        if (Middle_Boss.State == MI_SLIDE and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 1.0f and Middle_Boss.Slide1->isActive)
            {
                Middle_Boss.Slide1->isActive = false;
                Middle_Boss.Slide2->isActive = true;
                Middle_Boss.Slide2->ChangeAnim(_ONCE, 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.AttackBox->isActive = true;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.24f, 0.5f);
            }
            if (Middle_Boss.Attack_Time > 1.0f and Middle_Boss.L_Slide1->isActive)
            {
                Middle_Boss.L_Slide1->isActive = false;
                Middle_Boss.L_Slide2->isActive = true;
                Middle_Boss.L_Slide2->ChangeAnim(_REVERSE_ONCE, 0.3f);
                Middle_Boss.Attack_Time = 0.0f;
                Middle_Boss.AttackBox->isActive = true;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(-0.24f, 0.5f);
            }
            if (Middle_Boss.Slide2->isActive or Middle_Boss.L_Slide2->isActive)
            {
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Middle_Boss.Attack_Time>0.9f)
                {
                    Middle_Boss.Slide2->isActive = true;
                    Middle_Boss.Slide2->Frame.x = 2;
                    Middle_Boss.L_Slide2->isActive = false;
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(0.24f, 0.5f);
                    Middle_Boss.HitBox->Position.x += 200.0f * DeltaTime;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.Attack_Time > 0.9f)
                {
                    Middle_Boss.L_Slide2->isActive = true;
                    Middle_Boss.L_Slide2->Frame.x = 2;
                    Middle_Boss.Slide2->isActive = false;
                    Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                    Middle_Boss.AttackBox->Pivot = Vector2(-0.24f, 0.5f);
                    Middle_Boss.HitBox->Position.x -= 200.0f * DeltaTime;
                }
            }
            //go stand
            if (Middle_Boss.Attack_Time > 5.0f)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Slide2->isActive = false;
                    Middle_Boss.L_Slide2->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Slide2->isActive = false;
                    Middle_Boss.L_Slide2->isActive = false;
                }
            }
        }
        //MiddleBoss Special
        if (Middle_Boss.State == MI_SPECIAL and Middle_Boss.Alive)
        {
            Middle_Boss.Attack_Time += DeltaTime;
            if (Middle_Boss.Attack_Time > 2.0f and Middle_Boss.Special->isActive)
            {
                Middle_Boss.Special->isActive = false;
                Middle_Boss.Motion->isActive = true;
                Middle_Boss.Motion->ChangeAnim(_LOOP, 0.2f);
                Middle_Boss.AttackBox->isActive = true;
                Middle_Boss.AttackBox->Scale = Vector2(235.0f, 220.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.245f);
                Middle_Boss.Special_Effect->isActive = true;
                Middle_Boss.Special_Effect->ChangeAnim(_LOOP, 0.3f);
            }
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x and Middle_Boss.Motion->isActive)
            {
                Middle_Boss.Special_Effect->Pivot.x += 1.5f * DeltaTime;
                Middle_Boss.AttackBox->Pivot.x += 1.5f * DeltaTime;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x and Middle_Boss.Motion->isActive)
            {
                Middle_Boss.Special_Effect->Pivot.x -= 1.0f * DeltaTime;
                Middle_Boss.AttackBox->Pivot.x -= 1.0f * DeltaTime;
            }
            //go stand
            if (Middle_Boss.Attack_Time > 5.0f)
            {
                Middle_Boss.AttackBox->isActive = false;
                Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
                Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
                Middle_Boss.Special_Effect->Pivot = Vector2(0.006f, 0.27f);
                Middle_Boss.Rest = false;
                Middle_Boss.Attack_Time = 0.0f;
                if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.Stand->isActive = true;
                    Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                    Middle_Boss.Special_Effect->isActive = false;
                    Middle_Boss.Motion->isActive = false;
                }
                if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Middle_Boss.State = MI_STAND;
                    Middle_Boss.L_Stand->isActive = true;
                    Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Middle_Boss.Special_Effect->isActive = false;
                    Middle_Boss.Motion->isActive = false;
                }
            }
        }
    }
    

    //Library
    if (isCollision(Magic_Book, Link.HitBox) and INPUT->KeyDown('Q') and Magic_Book->isActive)
    {
        Magic_Book->isActive=false;
        SOUND->Play("ACQUIRE");
        SOUND->SetVolume("ACQUIRE", 0.3f);
        SOUND->Stop("BGM11");
        SOUND->Play("BGM12");
        SOUND->SetVolume("BGM12", 0.3f);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Scene2::LateUpdate()
{
    //Camera Move
    //START
    if (Link.HitBox->Position.x  < 20.0f * RATIO)
    {
        Link.HitBox->Position.x = 20.0f * RATIO;
    }
    if (Link.HitBox->Position.x > 0.5f * WINSIZEX and Link.HitBox->Position.x < (2047.0f / 901.0f * WINSIZEY - 0.5f*WINSIZEX))
    {
        if (Link.HitBox->Position.x > (WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
        if (Link.HitBox->Position.x < (WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
    }
    if (Link.HitBox->Position.x > (2047.0f / 901.0f * WINSIZEY - 20.0f * RATIO) and Link.HitBox->Position.x < (2047.0f / 901.0f * WINSIZEY - 20.0f * RATIO + 100.0f))
    {
        Link.HitBox->Position.x = (2047.0f / 901.0f * WINSIZEY - 20.0f * RATIO);
    }
    //GRAVE
    if (Link.HitBox->Position.x < (2000.0f + 20.0f * RATIO) and Link.HitBox->Position.x > (2000.0f + 20.0f * RATIO-100.0f))
    {
        Link.HitBox->Position.x = (2000.0f + 20.0f * RATIO);
    }
    if (Link.HitBox->Position.x > (2000.0f + 0.5f * WINSIZEX) and Link.HitBox->Position.x < (2000.0f + (957.0f / 448.0f * WINSIZEY) - 0.5f * WINSIZEX))
    {
        if (Link.HitBox->Position.x > (2000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
        if (Link.HitBox->Position.x < (2000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
    }
    if (Link.HitBox->Position.x > (2000.0f + (957.0f / 448.0f * WINSIZEY) - 20.0f * RATIO) and Link.HitBox->Position.x < (2000.0f + (957.0f / 448.0f * WINSIZEY) - 20.0f * RATIO + 100.0f))
    {
        Link.HitBox->Position.x = (2000.0f + (957.0f / 448.0f * WINSIZEY) - 20.0f * RATIO);
    }
    //CASTLE
    if (Link.HitBox->Position.x < (4000.0f + 20.0f * RATIO) and Link.HitBox->Position.x >(4000.0f + 20.0f * RATIO - 100.0f))
    {
        Link.HitBox->Position.x = (4000.0f + 20.0f * RATIO);
    }
    if (Link.HitBox->Position.x > (4000.0f + 0.5f * WINSIZEX) and Link.HitBox->Position.x < (4000.0f + (1024.0f / 451.0f * WINSIZEY) - 0.5f * WINSIZEX))
    {
        if (Link.HitBox->Position.x > (4000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
        if (Link.HitBox->Position.x < (4000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
    }
    if (Link.HitBox->Position.x > (4000.0f + (1024.0f / 451.0f * WINSIZEY) - 20.0f * RATIO) and Link.HitBox->Position.x < (4000.0f + (1024.0f / 451.0f * WINSIZEY) - 20.0f * RATIO + 100.0f))
    {
        Link.HitBox->Position.x = (4000.0f + (1024.0f / 451.0f * WINSIZEY) - 20.0f * RATIO);
    }
    //BOSSMAP
    if (Link.HitBox->Position.x < (6000.0f + 20.0f * RATIO) and Link.HitBox->Position.x >(6000.0f + 20.0f * RATIO - 100.0f))
    {
        Link.HitBox->Position.x = (6000.0f + 20.0f * RATIO);
    }
    if (Link.HitBox->Position.x > (6000.0f + 0.5f * WINSIZEX) and Link.HitBox->Position.x < (6000.0f + (1024.0f / 449.0f * WINSIZEY) - 0.5f * WINSIZEX))
    {
        if (Link.HitBox->Position.x > (6000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
        if (Link.HitBox->Position.x < (6000.0f + WINSIZEX / 2.0f))
        {
            MAINCAM->Pos.x = Link.HitBox->Position.x - (WINSIZEX / 2.0f);
        }
    }
    if (Link.HitBox->Position.x > (6000.0f + (1024.0f / 449.0f * WINSIZEY) - 20.0f * RATIO) and Link.HitBox->Position.x < (6000.0f + (1024.0f / 449.0f * WINSIZEY) - 20.0f * RATIO + 100.0f))
    {
        Link.HitBox->Position.x = (6000.0f + (1024.0f / 449.0f * WINSIZEY) - 20.0f * RATIO);
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Start
    //Slime collision
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Run_Attack->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.3f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Attack->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.3f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Kick->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_KICK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Downattack1->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Slime.Hp_Amount -= 20.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Downattack2->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Slime.Hp_Amount -= 30.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_DOWNATTCK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Thrust->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Slime.Hp_Amount -= 20.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_THRUST;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.Defence->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("LEFT");
        SOUND->SetVolume("LEFT", 0.3f);
        Slime.State = EN_HURT;
        Slime.Damaged_Type = R_HIT_DEFENCE;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Run_Attack->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Attack->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Kick->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_KICK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Attack->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Slime.Hp_Amount -= 10.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Downattack1->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Slime.Hp_Amount -= 20.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Downattack2->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Slime.Hp_Amount -= 30.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_DOWNATTCK;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Thrust->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Slime.Hp_Amount -= 20.0f;
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_THRUST;
    }
    if (isCollision(Slime.HitBox, Link.AttackBox) and Slime.State != EN_HURT and Link.L_Defence->isActive)
    {
        Slime.Attack_Time = 0.0f;
        SOUND->Play("SLIME_DAMAGED");
        SOUND->SetVolume("SLIME_DAMAGED", 0.2f);
        SOUND->Play("LEFT");
        SOUND->SetVolume("LEFT", 0.3f);
        Slime.State = EN_HURT;
        Slime.Damaged_Type = L_HIT_DEFENCE;
    }
    //link damaged by slime
    if (isCollision(Slime.HitBox, Link.HitBox) and Slime.State == EN_ATTACK and !Link.Damaged)
    {
        SOUND->Play("LINK_DAMAGE");
        SOUND->SetVolume("LINK_DAMAGE", 0.3f);
        Link.Damaged = true;
        Heart_Life -= 1;
    }
    
    //slime damaged
    if (Slime.State == EN_HURT)
    {
        Slime.Attack_Time += DeltaTime;
        if (Slime.Damaged_Type == R_HIT_ATTACK)
        {
            Slime.L_Hurt->isActive = true;
            Slime.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x += DeltaTime * 100.0f;
        }
        if (Slime.Damaged_Type == R_HIT_KICK)
        {
            Slime.L_Hurt->isActive = true;
            Slime.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.5f)
                Slime.HitBox->Position.x += DeltaTime * 300.0f;
        }
        if (Slime.Damaged_Type == R_HIT_DOWNATTCK)
        {
            Slime.L_Hurt->isActive = true;
            Slime.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x += DeltaTime * 120.0f;
        }
        if (Slime.Damaged_Type == R_HIT_THRUST)
        {
            Slime.L_Hurt->isActive = true;
            Slime.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x += DeltaTime * 200.0f;
        }
        if (Slime.Damaged_Type == L_HIT_ATTACK)
        {
            Slime.Hurt->isActive = true;
            Slime.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x -= DeltaTime * 100.0f;
        }
        if (Slime.Damaged_Type == L_HIT_KICK)
        {
            Slime.Hurt->isActive = true;
            Slime.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.5f)
                Slime.HitBox->Position.x -= DeltaTime * 300.0f;
        }
        if (Slime.Damaged_Type == L_HIT_DOWNATTCK)
        {
            Slime.Hurt->isActive = true;
            Slime.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x -= DeltaTime * 120.0f;
        }
        if (Slime.Damaged_Type == L_HIT_THRUST)
        {
            Slime.Hurt->isActive = true;
            Slime.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.3f)
                Slime.HitBox->Position.x -= DeltaTime * 200.0f;
        }
        if (Slime.Damaged_Type == R_HIT_DEFENCE)
        {
            Slime.L_Hurt->isActive = true;
            Slime.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.5f)
                Slime.HitBox->Position.x += DeltaTime * 100.0f;
        }
        if (Slime.Damaged_Type == L_HIT_DEFENCE)
        {
            Slime.Hurt->isActive = true;
            Slime.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Slime.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Slime.Attack_Time < 0.5f)
                Slime.HitBox->Position.x -= DeltaTime * 100.0f;
        }
        Slime.Damaged = true;
        Slime.Stand->isActive = false;
        Slime.Run->isActive = false;
        Slime.Attack->isActive = false;
        Slime.L_Stand->isActive = false;
        Slime.L_Run->isActive = false;
        Slime.L_Attack->isActive = false;
        Slime.Rest = false;
        if (Slime.Attack_Time > 0.6f and !Slime.Rest)
        {
            Slime.Damaged = false;
            Slime.Rest = true;
            Slime.Attack_Time = 0.0f;
            if (Slime.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Slime.State = EN_STAND;
                Slime.Stand->isActive = true;
                Slime.Stand->ChangeAnim(_LOOP, 0.5f);
                Slime.Hurt->isActive = false;
                Slime.L_Hurt->isActive = false;
            }
            if (Slime.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Slime.State = EN_STAND;
                Slime.L_Stand->isActive = true;
                Slime.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Slime.Hurt->isActive = false;
                Slime.L_Hurt->isActive = false;
            }
        }
    }

    //Grave
    for (int i = 0; i < 3; i++)
    {
        //Goblin collision
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Run_Attack->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("HIT1");
            SOUND->SetVolume("HIT1", 0.2f);
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.3f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Attack->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.3f);
            SOUND->Play("HIT1");
            SOUND->SetVolume("HIT1", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Kick->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT3");
            SOUND->SetVolume("HIT3", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_KICK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Downattack1->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT2");
            SOUND->SetVolume("HIT2", 0.2f);
            Goblin[i].Hp_Amount -= 20.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Downattack2->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT3");
            SOUND->SetVolume("HIT3", 0.2f);
            Goblin[i].Hp_Amount -= 30.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_DOWNATTCK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Thrust->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT2");
            SOUND->SetVolume("HIT2", 0.2f);
            Goblin[i].Hp_Amount -= 20.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_THRUST;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.Defence->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("LEFT");
            SOUND->SetVolume("LEFT", 0.3f);
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = R_HIT_DEFENCE;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Run_Attack->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT1");
            SOUND->SetVolume("HIT1", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Attack->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT1");
            SOUND->SetVolume("HIT1", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Kick->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT3");
            SOUND->SetVolume("HIT3", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_KICK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Attack->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT1");
            SOUND->SetVolume("HIT1", 0.2f);
            Goblin[i].Hp_Amount -= 10.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Downattack1->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT2");
            SOUND->SetVolume("HIT2", 0.2f);
            Goblin[i].Hp_Amount -= 20.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_ATTACK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Downattack2->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT3");
            SOUND->SetVolume("HIT3", 0.2f);
            Goblin[i].Hp_Amount -= 30.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_DOWNATTCK;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Thrust->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("HIT2");
            SOUND->SetVolume("HIT2", 0.2f);
            Goblin[i].Hp_Amount -= 20.0f;
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_THRUST;
        }
        if (isCollision(Goblin[i].HitBox, Link.AttackBox) and Goblin[i].State != EN_HURT and Link.L_Defence->isActive)
        {
            Goblin[i].Attack_Time = 0.0f;
            SOUND->Play("GOBLIN_DAMAGED");
            SOUND->SetVolume("GOBLIN_DAMAGED", 0.2f);
            SOUND->Play("LEFT");
            SOUND->SetVolume("LEFT", 0.3f);
            Goblin[i].State = EN_HURT;
            Goblin[i].Damaged_Type = L_HIT_DEFENCE;
        }
        //link damaged by Goblin
        if (isCollision(Goblin[i].AttackBox, Link.HitBox) and Goblin[i].State == EN_ATTACK and !Link.Damaged and !isCollision(Goblin[i].AttackBox, Link.AttackBox))
        {
            Heart_Life -= 1;
            SOUND->Play("LINK_DAMAGE");
            SOUND->SetVolume("LINK_DAMAGE", 0.3f);
            Link.Damaged = true;
        }

        //goblin damaged
        if (Goblin[i].State == EN_HURT)
        {
            Goblin[i].Attack_Time += DeltaTime;
            
            if (Goblin[i].Damaged_Type == R_HIT_ATTACK)
            {
                Goblin[i].L_Hurt->isActive = true;
                Goblin[i].L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x += DeltaTime * 100.0f;
            }
            if (Goblin[i].Damaged_Type == R_HIT_KICK)
            {
                Goblin[i].L_Hurt->isActive = true;
                Goblin[i].L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.5f)
                    Goblin[i].HitBox->Position.x += DeltaTime * 300.0f;
            }
            if (Goblin[i].Damaged_Type == R_HIT_DOWNATTCK)
            {
                Goblin[i].L_Hurt->isActive = true;
                Goblin[i].L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x += DeltaTime * 120.0f;
            }
            if (Goblin[i].Damaged_Type == R_HIT_THRUST)
            {
                Goblin[i].L_Hurt->isActive = true;
                Goblin[i].L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x += DeltaTime * 200.0f;
            }
            if (Goblin[i].Damaged_Type == L_HIT_ATTACK)
            {
                Goblin[i].Hurt->isActive = true;
                Goblin[i].Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].Hurt->ChangeAnim(_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x -= DeltaTime * 100.0f;
            }
            if (Goblin[i].Damaged_Type == L_HIT_KICK)
            {
                Goblin[i].Hurt->isActive = true;
                Goblin[i].Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].Hurt->ChangeAnim(_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.5f)
                    Goblin[i].HitBox->Position.x -= DeltaTime * 300.0f;
            }
            if (Goblin[i].Damaged_Type == L_HIT_DOWNATTCK)
            {
                Goblin[i].Hurt->isActive = true;
                Goblin[i].Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].Hurt->ChangeAnim(_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x -= DeltaTime * 120.0f;
            }
            if (Goblin[i].Damaged_Type == L_HIT_THRUST)
            {
                Goblin[i].Hurt->isActive = true;
                Goblin[i].Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].Hurt->ChangeAnim(_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.3f)
                    Goblin[i].HitBox->Position.x -= DeltaTime * 200.0f;
            }
            if (Goblin[i].Damaged_Type == R_HIT_DEFENCE)
            {
                Goblin[i].L_Hurt->isActive = true;
                Goblin[i].L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.5f)
                    Goblin[i].HitBox->Position.x += DeltaTime * 100.0f;
            }
            if (Goblin[i].Damaged_Type == L_HIT_DEFENCE)
            {
                Goblin[i].Hurt->isActive = true;
                Goblin[i].Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
                Goblin[i].Hurt->ChangeAnim(_ONCE, 0.3f);
                if (Goblin[i].Attack_Time < 0.5f)
                    Goblin[i].HitBox->Position.x -= DeltaTime * 100.0f;
            }
            Goblin[i].Damaged = true;
            Goblin[i].Stand->isActive = false;
            Goblin[i].Run->isActive = false;
            Goblin[i].Attack1->isActive = false;
            Goblin[i].Attack2->isActive = false;
            Goblin[i].L_Stand->isActive = false;
            Goblin[i].L_Run->isActive = false;
            Goblin[i].L_Attack1->isActive = false;
            Goblin[i].L_Attack2->isActive = false;
            Goblin[i].Rest = false;
            if (Goblin[i].Attack_Time > 0.6f and !Goblin[i].Rest)
            {
                Goblin[i].Damaged = false;
                Goblin[i].Rest = true;
                Goblin[i].Attack_Time = 0.0f;
                if (Goblin[i].HitBox->Position.x < Link.HitBox->Position.x)
                {
                    Goblin[i].State = EN_STAND;
                    Goblin[i].Stand->isActive = true;
                    Goblin[i].Stand->ChangeAnim(_LOOP, 0.5f);
                    Goblin[i].Hurt->isActive = false;
                    Goblin[i].L_Hurt->isActive = false;
                }
                if (Goblin[i].HitBox->Position.x > Link.HitBox->Position.x)
                {
                    Goblin[i].State = EN_STAND;
                    Goblin[i].L_Stand->isActive = true;
                    Goblin[i].L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                    Goblin[i].Hurt->isActive = false;
                    Goblin[i].L_Hurt->isActive = false;
                }
            }
        }
    }
    
    //MiddleBoss
    //MiddleBoss collision
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Run_Attack->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive )
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.3f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Attack->isActive and Middle_Boss.State != MI_MOTION and   Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.3f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Kick->isActive and Middle_Boss.State != MI_MOTION and   Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_KICK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Downattack1->isActive and Middle_Boss.State != MI_MOTION and   Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Middle_Boss.Hp_Amount -= 20.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Downattack2->isActive and Middle_Boss.State != MI_MOTION and   Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Middle_Boss.Hp_Amount -= 30.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_DOWNATTCK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Thrust->isActive and Middle_Boss.State != MI_MOTION and  Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Middle_Boss.Hp_Amount -= 20.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_THRUST;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.Defence->isActive and Middle_Boss.State != MI_MOTION and  Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("LEFT");
        SOUND->SetVolume("LEFT", 0.3f);
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = R_HIT_DEFENCE;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Run_Attack->isActive and Middle_Boss.State != MI_MOTION and  Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Attack->isActive and Middle_Boss.State != MI_MOTION and  Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Kick->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_KICK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Attack->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT1");
        SOUND->SetVolume("HIT1", 0.2f);
        Middle_Boss.Hp_Amount -= 10.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Downattack1->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Middle_Boss.Hp_Amount -= 20.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_ATTACK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Downattack2->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT3");
        SOUND->SetVolume("HIT3", 0.2f);
        Middle_Boss.Hp_Amount -= 30.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_DOWNATTCK;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Thrust->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("HIT2");
        SOUND->SetVolume("HIT2", 0.2f);
        Middle_Boss.Hp_Amount -= 20.0f;
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_THRUST;
    }
    if (isCollision(Middle_Boss.HitBox, Link.AttackBox) and Middle_Boss.State != MI_HURT and Link.L_Defence->isActive and Middle_Boss.State != MI_MOTION and Middle_Boss.State != MI_MOLE and !Middle_Boss.Special->isActive)
    {
        Middle_Boss.Attack_Time = 0.0f;
        SOUND->Play("MIDDLE_DAMAGED");
        SOUND->SetVolume("MIDDLE_DAMAGED", 0.2f);
        SOUND->Play("LEFT");
        SOUND->SetVolume("LEFT", 0.3f);
        Middle_Boss.State = MI_HURT;
        Middle_Boss.Damaged_Type = L_HIT_DEFENCE;
    }
    //link damaged by MiddleBoss
    if (isCollision(Middle_Boss.AttackBox, Link.HitBox) and !Link.Damaged and !(isCollision(Middle_Boss.AttackBox, Link.AttackBox) and (Middle_Boss.Attack->isActive or Middle_Boss.L_Attack->isActive)))
    {
        Heart_Life -= 1;
        SOUND->Play("LINK_DAMAGE");
        SOUND->SetVolume("LINK_DAMAGE", 0.3f);
        Link.Damaged = true;
    }

    //MiddleBoss damaged
    if (Middle_Boss.State == MI_HURT)
    {
        Middle_Boss.Attack_Time += DeltaTime;

        if (Middle_Boss.Damaged_Type == R_HIT_ATTACK)
        {
            Middle_Boss.L_Hurt->isActive = true;
            Middle_Boss.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x += DeltaTime * 100.0f;
        }
        if (Middle_Boss.Damaged_Type == R_HIT_KICK)
        {
            Middle_Boss.L_Hurt->isActive = true;
            Middle_Boss.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.5f)
                Middle_Boss.HitBox->Position.x += DeltaTime * 300.0f;
        }
        if (Middle_Boss.Damaged_Type == R_HIT_DOWNATTCK)
        {
            Middle_Boss.L_Hurt->isActive = true;
            Middle_Boss.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x += DeltaTime * 120.0f;
        }
        if (Middle_Boss.Damaged_Type == R_HIT_THRUST)
        {
            Middle_Boss.L_Hurt->isActive = true;
            Middle_Boss.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x += DeltaTime * 200.0f;
        }
        if (Middle_Boss.Damaged_Type == L_HIT_ATTACK)
        {
            Middle_Boss.Hurt->isActive = true;
            Middle_Boss.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x -= DeltaTime * 100.0f;
        }
        if (Middle_Boss.Damaged_Type == L_HIT_KICK)
        {
            Middle_Boss.Hurt->isActive = true;
            Middle_Boss.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.5f)
                Middle_Boss.HitBox->Position.x -= DeltaTime * 300.0f;
        }
        if (Middle_Boss.Damaged_Type == L_HIT_DOWNATTCK)
        {
            Middle_Boss.Hurt->isActive = true;
            Middle_Boss.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x -= DeltaTime * 120.0f;
        }
        if (Middle_Boss.Damaged_Type == L_HIT_THRUST)
        {
            Middle_Boss.Hurt->isActive = true;
            Middle_Boss.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.3f)
                Middle_Boss.HitBox->Position.x -= DeltaTime * 200.0f;
        }
        if (Middle_Boss.Damaged_Type == R_HIT_DEFENCE)
        {
            Middle_Boss.L_Hurt->isActive = true;
            Middle_Boss.L_Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.L_Hurt->ChangeAnim(_REVERSE_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.5f)
                Middle_Boss.HitBox->Position.x += DeltaTime * 100.0f;
        }
        if (Middle_Boss.Damaged_Type == L_HIT_DEFENCE)
        {
            Middle_Boss.Hurt->isActive = true;
            Middle_Boss.Hurt->color = Color(0.5f, 0.5f, 0.5f, RndFloat(0.0f, 0.5f));
            Middle_Boss.Hurt->ChangeAnim(_ONCE, 0.3f);
            if (Middle_Boss.Attack_Time < 0.5f)
                Middle_Boss.HitBox->Position.x -= DeltaTime * 100.0f;
        }
        Middle_Boss.Damaged = true;
        Middle_Boss.AttackBox->isActive = false;
        Middle_Boss.AttackBox->Scale = Vector2(100.0f, 100.0f);
        Middle_Boss.AttackBox->Pivot = Vector2(0.0f, 0.5f);
        Middle_Boss.Special_Effect->Pivot = Vector2(0.006f, 0.27f);
        Middle_Boss.Stand->isActive = false;
        Middle_Boss.Run->isActive = false;
        Middle_Boss.Attack->isActive = false;
        Middle_Boss.Slide1->isActive = false;
        Middle_Boss.Slide2->isActive = false;
        Middle_Boss.L_Stand->isActive = false;
        Middle_Boss.L_Run->isActive = false;
        Middle_Boss.L_Attack->isActive = false;
        Middle_Boss.L_Slide1->isActive = false;
        Middle_Boss.L_Slide2->isActive = false;
        Middle_Boss.Mole1->isActive = false;
        Middle_Boss.Mole2->isActive = false;
        Middle_Boss.Motion->isActive = false;
        Middle_Boss.Special->isActive = false;
        Middle_Boss.Special_Effect->isActive = false;
        Middle_Boss.Rest = false;
        if (Middle_Boss.Attack_Time > 0.6f and !Middle_Boss.Rest)
        {
            Middle_Boss.Damaged = false;
            Middle_Boss.Rest = true;
            Middle_Boss.Attack_Time = 0.0f;
            if (Middle_Boss.HitBox->Position.x < Link.HitBox->Position.x)
            {
                Middle_Boss.Attack_Count = RndInt(0, 5);
                Middle_Boss.State = MI_STAND;
                Middle_Boss.Stand->isActive = true;
                Middle_Boss.Stand->ChangeAnim(_LOOP, 0.5f);
                Middle_Boss.Hurt->isActive = false;
                Middle_Boss.L_Hurt->isActive = false;
            }
            if (Middle_Boss.HitBox->Position.x > Link.HitBox->Position.x)
            {
                Middle_Boss.Attack_Count = RndInt(0, 5);
                Middle_Boss.State = MI_STAND;
                Middle_Boss.L_Stand->isActive = true;
                Middle_Boss.L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Middle_Boss.Hurt->isActive = false;
                Middle_Boss.L_Hurt->isActive = false;
            }
        }
    }
}

void Scene2::Render()
{
    Background1->Render();
    Background2->Render();
    Background3->Render();
    Background4->Render();
    Floor1->Render();
    Floor2->Render();
    Floor3->Render();
    Floor4->Render();

    Door1->Render();
    Door2->Render();
    Door3->Render();
    DoorBox->WorldUpdate();
    for (int i = 0; i < 3; i++)
        Grave[i]->Render();
    Potal->Render();
    PotalBox->WorldUpdate();
    Potal2->Render();
    PotalBox2->WorldUpdate();
    Flower->Render();
    Magic_Book->Render();

    Npc1->Render();
    Npc2->Render();
    Npc2_Fear->Render();
    Npc3->Render();

    Slime.HitBox->WorldUpdate();
    Slime.AttackBox->WorldUpdate();
    Slime.Hp->Render();
    Slime.Stand->Render();
    Slime.Run->Render();
    Slime.Attack->Render();
    Slime.Hurt->Render();
    Slime.L_Stand->Render();
    Slime.L_Run->Render();
    Slime.L_Attack->Render();
    Slime.L_Hurt->Render();
    for (int i = 0; i < 3; i++)
    {
        Goblin[i].HitBox->WorldUpdate();
        Goblin[i].AttackBox->WorldUpdate();
        Goblin[i].Hp->Render();
        Goblin[i].Stand->Render();
        Goblin[i].Run->Render();
        Goblin[i].Attack1->Render();
        Goblin[i].Attack2->Render();
        Goblin[i].Hurt->Render();
        Goblin[i].L_Stand->Render();
        Goblin[i].L_Run->Render();
        Goblin[i].L_Attack1->Render();
        Goblin[i].L_Attack2->Render();
        Goblin[i].L_Hurt->Render();
    }
    Middle_Boss.HitBox         ->WorldUpdate();
    Middle_Boss.AttackBox      ->WorldUpdate();
    Middle_Boss.Hp             ->Render();
    Middle_Boss.Stand          ->Render();
    Middle_Boss.Run            ->Render();
    Middle_Boss.Attack         ->Render();
    Middle_Boss.Mole1          ->Render();
    Middle_Boss.Mole2          ->Render();
    Middle_Boss.Slide1         ->Render();
    Middle_Boss.Slide2         ->Render();
    Middle_Boss.Hurt           ->Render();
    Middle_Boss.Motion         ->Render();
    Middle_Boss.L_Stand        ->Render();
    Middle_Boss.L_Run          ->Render();
    Middle_Boss.L_Attack       ->Render();
    Middle_Boss.L_Slide1       ->Render();
    Middle_Boss.L_Slide2       ->Render();
    Middle_Boss.L_Hurt         ->Render();
    Middle_Boss.Special        ->Render();
    Middle_Boss.Special_Effect ->Render();

    NPC1_1->Render();
    NPC1_2->Render();
    NPC1_3->Render();
    NPC1_4->Render();
    NPC1_5->Render();
    NPC1_6->Render();
    NPC1_7->Render();
    NPC2_1->Render();
    NPC2_2->Render();
    NPC2_3->Render();
    NPC3_1->Render();
    NPC3_2->Render();

    Book->Render();
    Manual->Render();

    Link.HitBox->WorldUpdate();
    Link.AttackBox->WorldUpdate();
    Link.StaminaBox->Render();
    Link.Stand->Render();
    Link.Walk->Render();
    Link.Run->Render();
    Link.Run_Attack->Render();
    Link.Attack->Render();
    Link.Jump->Render();
    Link.Dumbling->Render();
    Link.Kick->Render();
    Link.Downattack1->Render();
    Link.Downattack2->Render();
    Link.Thrust->Render();
    Link.Defence->Render();
    Link.L_Stand->Render();
    Link.L_Walk->Render();
    Link.L_Run->Render();
    Link.L_Run_Attack->Render();
    Link.L_Attack->Render();
    Link.L_Jump->Render();
    Link.L_Dumbling->Render();
    Link.L_Kick->Render();
    Link.L_Downattack1->Render();
    Link.L_Downattack2->Render();
    Link.L_Thrust->Render();
    Link.L_Defence->Render();
    Link.Downattack_Effect->Render();
    for (int i = 0; i < Heart_Life; i++)
    {
        Heart[i]->Render();
    }
}








/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Player::Control_Player(float Floor_Height)
{
    //stand
    if (State == PL_STAND)
    {
        //go right walk
        if (INPUT->KeyDown(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and !INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            State = PL_WALK;
            Stand->isActive = false;
            L_Stand->isActive = false;
            L_Run->isActive = false;
            Run->isActive = false;
            Walk->isActive = true;
            Walk->ChangeAnim(_LOOP, 0.1f);
        }
        //go left walk
        if (INPUT->KeyDown(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and !INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            State = PL_WALK;
            Stand->isActive = false;
            L_Stand->isActive = false;
            L_Run->isActive = false;
            Run->isActive = false;
            L_Walk->isActive = true;
            L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
        }
        //go right run
        if (INPUT->KeyPress(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            State = PL_RUN;
            Stand->isActive = false;
            L_Stand->isActive = false;
            L_Run->isActive = false;
            L_Walk->isActive = false;
            Walk->isActive = false;
            Run->isActive = true;
            Run->ChangeAnim(_LOOP, 0.08f);
        }
        //go left run
        if (INPUT->KeyPress(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            State = PL_RUN;
            Stand->isActive = false;
            L_Stand->isActive = false;
            Run->isActive = false;
            L_Walk->isActive = false;
            Walk->isActive = false;
            L_Run->isActive = true;
            L_Run->ChangeAnim(_REVERSE_LOOP, 0.08f);
        }
        //go right jump
        if (INPUT->KeyDown(VK_SPACE) and Stand->isActive and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.3f);
            Stand->isActive = false;
            Jump->isActive = true;
            Jump->ChangeAnim(_ONCE, 0.15f);
        }
        if (Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }
        //go left jump
        if (INPUT->KeyDown(VK_SPACE) and L_Stand->isActive and !Attack->isActive and !L_Attack->isActive and !Kick->isActive and !L_Kick->isActive and !Defence->isActive and !L_Defence->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            L_Stand->isActive = false;
            L_Jump->isActive = true;
            L_Jump->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }

        //stand right attack
        if (INPUT->KeyDown('A') and Stand->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            Stand->isActive = false;
            Attack->isActive = true;
            Attack->ChangeAnim(_ONCE, 0.15f);
        }
        if (Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x += DeltaTime * WALKSPEED;
                AttackBox->Pivot = Vector2(0.7f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                Stand->isActive = true;
                Attack->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //stand left attack
        if (INPUT->KeyDown('A') and L_Stand->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            L_Stand->isActive = false;
            L_Attack->isActive = true;
            L_Attack->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x -= DeltaTime * WALKSPEED;
                AttackBox->Pivot = Vector2(-0.7f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                L_Stand->isActive = true;
                L_Attack->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //right kick
        if (INPUT->KeyDown('S') and Stand->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            Stand->isActive = false;
            Kick->isActive = true;
            Kick->ChangeAnim(_ONCE, 0.15f);
        }
        if (Kick->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.2f, 0.5f);
                AttackBox->Scale = Vector2(40.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                Stand->isActive = true;
                Kick->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //left kick
        if (INPUT->KeyDown('S') and L_Stand->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            L_Stand->isActive = false;
            L_Kick->isActive = true;
            L_Kick->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Kick->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(-0.2f, 0.5f);
                AttackBox->Scale = Vector2(40.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                L_Stand->isActive = true;
                L_Kick->isActive = false;
                L_Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //right defence
        if (INPUT->KeyDown(VK_DOWN) and Stand->isActive)
        {
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            Stand->isActive = false;
            Defence->isActive = true;
            Defence->Frame.x = 1;
        }
        if (Defence->isActive)
        {
            AttackBox->isActive = true;
            AttackBox->Pivot = Vector2(0.5f, 0.5f);
            AttackBox->Scale = Vector2(20.0f * RATIO, 50.0f * RATIO);
        }
        if (INPUT->KeyUp(VK_DOWN) and Defence->isActive)
        {
            Stand->isActive = true;
            Defence->isActive = false;
            Stand->ChangeAnim(_LOOP, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
        //left defence
        if (INPUT->KeyDown(VK_DOWN) and L_Stand->isActive)
        {
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            L_Stand->isActive = false;
            L_Defence->isActive = true;
            L_Defence->Frame.x = 5;
        }
        if (L_Defence->isActive)
        {
            AttackBox->isActive = true;
            AttackBox->Pivot = Vector2(-0.5f, 0.5f);
            AttackBox->Scale = Vector2(20.0f * RATIO, 50.0f * RATIO);
        }
        if (INPUT->KeyUp(VK_DOWN) and L_Defence->isActive)
        {
            L_Stand->isActive = true;
            L_Defence->isActive = false;
            L_Stand->ChangeAnim(_LOOP, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
    }
    //walk
    if (State == PL_WALK)
    {
        //move
        if (Walk->isActive)
        {
            HitBox->Position.x += DeltaTime * WALKSPEED;
        }
        if (L_Walk->isActive)
        {
            HitBox->Position.x -= DeltaTime * WALKSPEED;
        }
        //go left walk
        if (INPUT->KeyDown(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and !INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_WALK;
            Walk->isActive = false;
            L_Walk->isActive = true;
            L_Run->isActive = false;
            Run->isActive = false;
            L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
        }
        //go right walk
        if (INPUT->KeyDown(VK_RIGHT) and !L_Jump->isActive and !Jump->isActive and !INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_WALK;
            L_Walk->isActive = false;
            Walk->isActive = true;
            L_Run->isActive = false;
            Run->isActive = false;
            Walk->ChangeAnim(_LOOP, 0.1f);
        }
        //go right run
        if (INPUT->KeyPress(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_RUN;
            Walk->isActive = false;
            L_Walk->isActive = false;
            L_Run->isActive = false;
            Run->isActive = true;
            Run->ChangeAnim(_LOOP, 0.08f);
        }
        //go left run
        if (INPUT->KeyPress(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_RUN;
            Walk->isActive = false;
            L_Walk->isActive = false;
            Run->isActive = false;
            L_Run->isActive = true;
            L_Run->ChangeAnim(_REVERSE_LOOP, 0.08f);
        }
        //go right jump
        if (INPUT->KeyDown(VK_SPACE) and Walk->isActive and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            Walk->isActive = false;
            Jump->isActive = true;
            Jump->ChangeAnim(_ONCE, 0.15f);
        }
        if (Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }
        //go left jump
        if (INPUT->KeyDown(VK_SPACE) and L_Walk->isActive and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            L_Walk->isActive = false;
            L_Jump->isActive = true;
            L_Jump->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }
        //walk right attack
        if (INPUT->KeyDown('A') and Walk->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            Walk->isActive = false;
            Attack->isActive = true;
            Attack->ChangeAnim(_ONCE, 0.15f);
        }
        if (Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x += DeltaTime * WALKSPEED;
                AttackBox->Pivot = Vector2(0.7f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Attack->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
        //walk left attack
        if (INPUT->KeyDown('A') and L_Walk->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            L_Walk->isActive = false;
            L_Attack->isActive = true;
            L_Attack->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x -= DeltaTime * WALKSPEED;
                AttackBox->Pivot = Vector2(-0.7f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.75f)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Attack->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
        //walk right thrust
        if (INPUT->KeyDown('S') and Walk->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            Walk->isActive = false;
            Thrust->isActive = true;
            Thrust->ChangeAnim(_ONCE, 0.15f);
        }
        if (Thrust->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.7f, 0.5f);
                AttackBox->Scale = Vector2(60.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Thrust->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
        //walk left thrust
        if (INPUT->KeyDown('S') and L_Walk->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            L_Walk->isActive = false;
            L_Thrust->isActive = true;
            L_Thrust->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Thrust->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(-0.7f, 0.5f);
                AttackBox->Scale = Vector2(60.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Thrust->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
        //go back right stand
        if (!L_Walk->isActive and INPUT->KeyUp(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_STAND;
            Walk->isActive = false;
            L_Walk->isActive = false;
            Stand->isActive = true;
            Stand->ChangeAnim(_LOOP, 0.5f);
        }
        //go back left stand
        if (!Walk->isActive and INPUT->KeyUp(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and !Attack->isActive and !L_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_STAND;
            Walk->isActive = false;
            L_Walk->isActive = false;
            L_Stand->isActive = true;
            L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
        }
    }
    //run
    if (State == PL_RUN)
    {
        //stamina out
        if (Stamina < 5.0f)
        {
            //go left walk
            if (INPUT->KeyPress(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
            {
                State = PL_WALK;
                Run->isActive = false;
                L_Run->isActive = false;
                L_Walk->isActive = true;
                L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
            }
            //go right walk
            if (INPUT->KeyPress(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyPress(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
            {
                State = PL_WALK;
                Run->isActive = false;
                L_Run->isActive = false;
                Walk->isActive = true;
                Walk->ChangeAnim(_LOOP, 0.1f);
            }
        }
        //move
        if (Run->isActive)
        {
            Stamina -= 10.0f * DeltaTime;
            HitBox->Position.x += DeltaTime * RUNSPEED;
        }
        if (L_Run->isActive)
        {
            Stamina -= 10.0f * DeltaTime;
            HitBox->Position.x -= DeltaTime * RUNSPEED;
        }
        //go left walk
        if (INPUT->KeyPress(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyUp(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_WALK;
            Run->isActive = false;
            L_Run->isActive = false;
            L_Walk->isActive = true;
            L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
        }
        //go right walk
        if (INPUT->KeyPress(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyUp(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_WALK;
            Run->isActive = false;
            L_Run->isActive = false;
            Walk->isActive = true;
            Walk->ChangeAnim(_LOOP, 0.1f);
        }
        //go right run
        if (INPUT->KeyDown(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_RUN;
            L_Run->isActive = false;
            Run->isActive = true;
            Run->ChangeAnim(_LOOP, 0.08f);
        }
        //go left run
        if (INPUT->KeyDown(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and INPUT->KeyDown(VK_SHIFT) and !INPUT->KeyPress(VK_SPACE) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_RUN;
            Run->isActive = false;
            L_Run->isActive = true;
            L_Run->ChangeAnim(_REVERSE_LOOP, 0.08f);
        }
        //go right jump
        if (INPUT->KeyDown(VK_SPACE) and Run->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            Run->isActive = false;
            L_Run->isActive = false;
            Jump->isActive = true;
            Jump->ChangeAnim(_ONCE, 0.15f);
        }
        if (Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }
        //go left jump
        if (INPUT->KeyDown(VK_SPACE) and L_Run->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            Run->isActive = false;
            L_Run->isActive = false;
            L_Jump->isActive = true;
            L_Jump->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Jump->isActive)
        {
            HitBox->Scale = Vector2(20.0f * RATIO, 35.0f * RATIO);
            Jump_Time += DeltaTime;
            if (Jump_Time > 0.45f)
            {
                State = PL_JUMP;
                Gravity = JUMPPOWER;
            }
        }
        //go back right stand
        if (!L_Run->isActive and INPUT->KeyUp(VK_RIGHT) and !Jump->isActive and !L_Jump->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_STAND;
            Run->isActive = false;
            L_Run->isActive = false;
            Stand->isActive = true;
            Stand->ChangeAnim(_LOOP, 0.5f);
        }
        //go back left stand
        if (!Run->isActive and INPUT->KeyUp(VK_LEFT) and !Jump->isActive and !L_Jump->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive and !Thrust->isActive and !L_Thrust->isActive)
        {
            State = PL_STAND;
            Run->isActive = false;
            L_Run->isActive = false;
            L_Stand->isActive = true;
            L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
        }
        //run right attack
        if (INPUT->KeyDown('A') and Run->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            Run->isActive = false;
            Run_Attack->isActive = true;
            Run_Attack->ChangeAnim(_ONCE, 0.15f);
        }
        if (Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x += DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Run_Attack->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //run left attack
        if (INPUT->KeyDown('A') and L_Run->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            L_Run->isActive = false;
            L_Run_Attack->isActive = true;
            L_Run_Attack->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x -= DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(-0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Run_Attack->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //run right thrust
        if (INPUT->KeyDown('S') and Run->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            Run->isActive = false;
            Thrust->isActive = true;
            Thrust->ChangeAnim(_ONCE, 0.15f);
        }
        if (Thrust->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.7f, 0.5f);
                AttackBox->Scale = Vector2(60.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Thrust->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
        //run left thrust
        if (INPUT->KeyDown('S') and L_Run->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("MIDDLE");
            SOUND->SetVolume("MIDDLE", 0.2f);
            L_Run->isActive = false;
            L_Thrust->isActive = true;
            L_Thrust->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Thrust->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.3f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(-0.7f, 0.5f);
                AttackBox->Scale = Vector2(60.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Thrust->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
                AttackBox->isActive = false;
            }
        }
    }

    //jump
    if (State == PL_JUMP)
    {
        HitBox->Scale = Vector2(20.0f * RATIO, 45.0f * RATIO);
        Jump_Time = 0.0f;
        HitBox->Position += DOWN * Gravity * DeltaTime;
        Gravity += GRAVITYPOWER * DeltaTime;
        //right
        if (INPUT->KeyPress(VK_RIGHT) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            HitBox->Position.x += DeltaTime * RUNSPEED;
            //go back walk
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                State = PL_WALK;
                Walk->isActive = true;
                Jump->isActive = false;
                L_Jump->isActive = false;
                Walk->ChangeAnim(_LOOP, 0.1f);
            }
        }
        //left
        if (INPUT->KeyPress(VK_LEFT) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            HitBox->Position.x -= DeltaTime * RUNSPEED;
            //go back walk
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                State = PL_WALK;
                L_Walk->isActive = true;
                Jump->isActive = false;
                L_Jump->isActive = false;
                L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
            }
        }
        //dumbling right
        if (INPUT->KeyDown(VK_SPACE) and Jump->isActive and Stamina > DUMBLINGSTAMINA)
        {
            Stamina -= DUMBLINGSTAMINA;
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            Gravity = DUMBLINGPOWER;
            State = PL_DUMBLING;
            Jump->isActive = false;
            L_Jump->isActive = false;
            Dumbling->isActive = true;
            Dumbling->ChangeAnim(_ONCE, 0.1f);
        }
        //dumbling left
        if (INPUT->KeyDown(VK_SPACE) and L_Jump->isActive and Stamina > DUMBLINGSTAMINA)
        {
            Stamina -= DUMBLINGSTAMINA;
            SOUND->Play("JUMP");
            SOUND->SetVolume("JUMP", 0.2f);
            Gravity = DUMBLINGPOWER;
            State = PL_DUMBLING;
            Jump->isActive = false;
            L_Jump->isActive = false;
            L_Dumbling->isActive = true;
            L_Dumbling->ChangeAnim(_REVERSE_ONCE, 0.1f);
        }
        //jump right attack
        if (INPUT->KeyDown('A') and Jump->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            Jump->isActive = false;
            Run_Attack->isActive = true;
            Run_Attack->ChangeAnim(_ONCE, 0.15f);
        }
        if (Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x += DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
            }
            if (Attack_Time > 0.9f and HitBox->Position.y > Floor_Height)
            {
                Jump->isActive = true;
                Jump->Frame.x = 11;
                Run_Attack->isActive = false;
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f and HitBox->Position.y == Floor_Height)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Run_Attack->isActive = false;
                L_Run_Attack->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //jump left attack
        if (INPUT->KeyDown('A') and L_Jump->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            L_Jump->isActive = false;
            L_Run_Attack->isActive = true;
            L_Run_Attack->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x -= DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(-0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
            }
            if (Attack_Time > 0.9f and HitBox->Position.y > Floor_Height)
            {
                L_Jump->isActive = true;
                L_Jump->Frame.x = 0;
                L_Run_Attack->isActive = false;
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f and HitBox->Position.y == Floor_Height)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                Run_Attack->isActive = false;
                L_Run_Attack->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //jump right Downattack
        if (INPUT->KeyDown('S') and Jump->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("LONG");
            SOUND->SetVolume("LONG", 0.2f);
            Jump->isActive = false;
            Downattack1->isActive = true;
            Downattack1->ChangeAnim(_ONCE, 0.1f);
        }
        if (Downattack1->isActive)
        {
            Gravity += DOWNATTACKGRAVITY * DeltaTime;
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.3f);
                AttackBox->Scale = Vector2(10.0f * RATIO, 80.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Downattack2->isActive = true;
                Downattack2->ChangeAnim(_ONCE, 0.1f);
                Downattack1->isActive = false;
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                Attack_Time = 0.0f;
            }
        }
        if (Downattack2->isActive)
        {
            HitBox->Position.y = Floor_Height;
            Attack_Time += DeltaTime;
            if (Attack_Time < 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 30.0f * RATIO);
            }
            if (Attack_Time > 0.6f)
            {
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 1.0f)
            {
                Attack_Time = 0.0f;
                State = PL_STAND;
                Stand->isActive = true;
                Downattack2->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
            }
        }
        //jump left Downattack
        if (INPUT->KeyDown('S') and L_Jump->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("LONG");
            SOUND->SetVolume("LONG", 0.2f);
            L_Jump->isActive = false;
            L_Downattack1->isActive = true;
            L_Downattack1->ChangeAnim(_REVERSE_ONCE, 0.1f);
        }
        if (L_Downattack1->isActive)
        {
            Gravity += DOWNATTACKGRAVITY * DeltaTime;
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.3f);
                AttackBox->Scale = Vector2(10.0f * RATIO, 80.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                L_Downattack2->isActive = true;
                L_Downattack2->ChangeAnim(_REVERSE_ONCE, 0.1f);
                L_Downattack1->isActive = false;
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                Attack_Time = 0.0f;
            }
        }
        if (L_Downattack2->isActive)
        {
            HitBox->Position.y = Floor_Height;
            Attack_Time += DeltaTime;
            if (Attack_Time < 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 30.0f * RATIO);
            }
            if (Attack_Time > 0.6f)
            {
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 1.0f)
            {
                Attack_Time = 0.0f;
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Downattack2->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
            }
        }
        //go back stand
        if (HitBox->Position.y < Floor_Height and Jump->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive
            and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            Gravity = 0.0f;
            HitBox->Position.y = Floor_Height;
            State = PL_STAND;
            Stand->isActive = true;
            Jump->isActive = false;
            L_Jump->isActive = false;
            Run_Attack->isActive = false;
            L_Run_Attack->isActive = false;
            Stand->ChangeAnim(_LOOP, 0.5f);
            Attack_Time = 0.0f;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
        if (HitBox->Position.y < Floor_Height and L_Jump->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive
            and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            Gravity = 0.0f;
            HitBox->Position.y = Floor_Height;
            State = PL_STAND;
            L_Stand->isActive = true;
            Jump->isActive = false;
            L_Jump->isActive = false;
            Run_Attack->isActive = false;
            L_Run_Attack->isActive = false;
            L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
            Attack_Time = 0.0f;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
    }
    //dumbling
    if (State == PL_DUMBLING)
    {
        HitBox->Scale = Vector2(20.0f * RATIO, 45.0f * RATIO);
        HitBox->Position += DOWN * Gravity * DeltaTime;
        Gravity += GRAVITYPOWER * DeltaTime;
        //right
        if (INPUT->KeyPress(VK_RIGHT) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            HitBox->Position.x += DeltaTime * RUNSPEED;
            //go back walk
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                State = PL_WALK;
                Walk->isActive = true;
                Dumbling->isActive = false;
                L_Dumbling->isActive = false;
                Walk->ChangeAnim(_LOOP, 0.1f);
            }
        }
        //left
        if (INPUT->KeyPress(VK_LEFT) and !Run_Attack->isActive and !L_Run_Attack->isActive and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            HitBox->Position.x -= DeltaTime * RUNSPEED;
            //go back walk
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                State = PL_WALK;
                L_Walk->isActive = true;
                Dumbling->isActive = false;
                L_Dumbling->isActive = false;
                L_Walk->ChangeAnim(_REVERSE_LOOP, 0.1f);
            }
        }
        //jump right attack
        if (INPUT->KeyDown('A') and Dumbling->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            Dumbling->isActive = false;
            Run_Attack->isActive = true;
            Run_Attack->ChangeAnim(_ONCE, 0.15f);
        }
        if (Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x += DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
            }
            if (Attack_Time > 0.9f and HitBox->Position.y > Floor_Height)
            {
                Dumbling->isActive = true;
                Dumbling->Frame.x = 11;
                Run_Attack->isActive = false;
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f and HitBox->Position.y == Floor_Height)
            {
                State = PL_STAND;
                Stand->isActive = true;
                Run_Attack->isActive = false;
                L_Run_Attack->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //jump left attack
        if (INPUT->KeyDown('A') and L_Dumbling->isActive and Stamina > ATTACKSTAMINA)
        {
            Stamina -= ATTACKSTAMINA;
            SOUND->Play("SHORT");
            SOUND->SetVolume("SHORT", 0.2f);
            L_Dumbling->isActive = false;
            L_Run_Attack->isActive = true;
            L_Run_Attack->ChangeAnim(_REVERSE_ONCE, 0.15f);
        }
        if (L_Run_Attack->isActive)
        {
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.45f)
            {
                AttackBox->isActive = true;
                HitBox->Position.x -= DeltaTime * RUNSPEED;
                AttackBox->Pivot = Vector2(-0.6f, 0.5f);
                AttackBox->Scale = Vector2(50.0f * RATIO, 50.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
            }
            if (Attack_Time > 0.9f and HitBox->Position.y > Floor_Height)
            {
                L_Dumbling->isActive = true;
                L_Dumbling->Frame.x = 0;
                L_Run_Attack->isActive = false;
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 0.9f and HitBox->Position.y == Floor_Height)
            {
                State = PL_STAND;
                L_Stand->isActive = true;
                Run_Attack->isActive = false;
                L_Run_Attack->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
                Attack_Time = 0.0f;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
        }
        //jump right Downattack
        if (INPUT->KeyDown('S') and Dumbling->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("LONG");
            SOUND->SetVolume("LONG", 0.2f);
            Dumbling->isActive = false;
            Downattack1->isActive = true;
            Downattack1->ChangeAnim(_ONCE, 0.1f);
        }
        if (Downattack1->isActive)
        {
            Gravity += DOWNATTACKGRAVITY * DeltaTime;
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.3f);
                AttackBox->Scale = Vector2(10.0f * RATIO, 80.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                Downattack2->isActive = true;
                Downattack2->ChangeAnim(_ONCE, 0.1f);
                Downattack_Effect->isActive = true;
                Downattack_Effect->ChangeAnim(_ONCE, 0.15f);
                Downattack1->isActive = false;
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                Attack_Time = 0.0f;
            }
        }
        if (Downattack2->isActive)
        {
            HitBox->Position.y = Floor_Height;
            Attack_Time += DeltaTime;
            if (Attack_Time < 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(Floor_Height * RATIO, 50.0f * RATIO);
            }
            if (Attack_Time > 0.6f)
            {
                Downattack_Effect->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 1.0f)
            {
                Attack_Time = 0.0f;
                State = PL_STAND;
                Stand->isActive = true;
                Downattack2->isActive = false;
                Stand->ChangeAnim(_LOOP, 0.5f);
            }
        }
        //jump left Downattack
        if (INPUT->KeyDown('S') and L_Dumbling->isActive and Stamina > SMASHSTAMINA)
        {
            Stamina -= SMASHSTAMINA;
            SOUND->Play("LONG");
            SOUND->SetVolume("LONG", 0.2f);
            L_Dumbling->isActive = false;
            L_Downattack1->isActive = true;
            L_Downattack1->ChangeAnim(_REVERSE_ONCE, 0.1f);
        }
        if (L_Downattack1->isActive)
        {
            Gravity += DOWNATTACKGRAVITY * DeltaTime;
            Attack_Time += DeltaTime;
            if (Attack_Time > 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.3f);
                AttackBox->Scale = Vector2(10.0f * RATIO, 80.0f * RATIO);
            }
            if (HitBox->Position.y < Floor_Height)
            {
                L_Downattack2->isActive = true;
                L_Downattack2->ChangeAnim(_REVERSE_ONCE, 0.1f);
                Downattack_Effect->isActive = true;
                Downattack_Effect->ChangeAnim(_ONCE, 0.15f);
                L_Downattack1->isActive = false;
                L_Downattack1->isActive = false;
                Gravity = 0.0f;
                HitBox->Position.y = Floor_Height;
                Attack_Time = 0.0f;
            }
        }
        if (L_Downattack2->isActive)
        {
            HitBox->Position.y = Floor_Height;
            Attack_Time += DeltaTime;
            if (Attack_Time < 0.6f)
            {
                AttackBox->isActive = true;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->Scale = Vector2(Floor_Height * RATIO, 50.0f * RATIO);
            }
            if (Attack_Time > 0.6f)
            {
                Downattack_Effect->isActive = false;
                AttackBox->Pivot = Vector2(0.0f, 0.5f);
                AttackBox->isActive = false;
                AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
            }
            if (Attack_Time > 1.0f)
            {
                Attack_Time = 0.0f;
                State = PL_STAND;
                L_Stand->isActive = true;
                L_Downattack2->isActive = false;
                L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
            }
        }
        //go back stand
        if (HitBox->Position.y < Floor_Height and Dumbling->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive
            and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            Gravity = 0.0f;
            HitBox->Position.y = Floor_Height;
            State = PL_STAND;
            Stand->isActive = true;
            Dumbling->isActive = false;
            L_Dumbling->isActive = false;
            Run_Attack->isActive = false;
            L_Run_Attack->isActive = false;
            Stand->ChangeAnim(_LOOP, 0.5f);
            Attack_Time = 0.0f;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
        if (HitBox->Position.y < Floor_Height and L_Dumbling->isActive and !Run_Attack->isActive and !L_Run_Attack->isActive
            and !Downattack1->isActive and !L_Downattack1->isActive and !Downattack2->isActive and !L_Downattack2->isActive)
        {
            Gravity = 0.0f;
            HitBox->Position.y = Floor_Height;
            State = PL_STAND;
            L_Stand->isActive = true;
            Dumbling->isActive = false;
            L_Dumbling->isActive = false;
            Run_Attack->isActive = false;
            L_Run_Attack->isActive = false;
            L_Stand->ChangeAnim(_REVERSE_LOOP, 0.5f);
            Attack_Time = 0.0f;
            AttackBox->Pivot = Vector2(0.0f, 0.5f);
            AttackBox->isActive = false;
            AttackBox->Scale = Vector2(30.0f * RATIO, 40.0f * RATIO);
        }
    }
}

