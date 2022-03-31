#pragma once
#define RATIO 1.5f
#define RUNSPEED 250.0f
#define WALKSPEED 75.0f
#define JUMPPOWER -450.0f
#define DUMBLINGPOWER -350.0f
#define GRAVITYPOWER 450.0f
#define DOWNATTACKGRAVITY 300.0f
#define STAMINAREGENERATE 20.0f
#define ATTACKSTAMINA 10.0f
#define SMASHSTAMINA 20.0f
#define DUMBLINGSTAMINA 10.0f
#define MIDDLEBOSS_HP 500
enum PlayerState
{
    PL_STAND,
    PL_WALK,
    PL_RUN,
    PL_JUMP,
    PL_DUMBLING
};

enum EnemyState
{
    EN_STAND,
    EN_RUN,
    EN_ATTACK,
    EN_HURT,
    EN_DEAD
};
enum Middle_Boss_State
{
    MI_STAND,
    MI_RUN,
    MI_ATTACK,
    MI_SLIDE,
    MI_MOLE,
    MI_SPECIAL,
    MI_MOTION,
    MI_HURT,
    MI_DEAD
};
enum DamageType
{
    R_HIT_ATTACK,
    R_HIT_KICK,
    R_HIT_DOWNATTCK,
    R_HIT_THRUST,
    R_HIT_DEFENCE,
    L_HIT_ATTACK,
    L_HIT_KICK,
    L_HIT_DOWNATTCK,
    L_HIT_THRUST,
    L_HIT_DEFENCE

};

struct Sl_ime
{
    ObRect* HitBox;
    ObRect* AttackBox;
    ObRect* Hp;
    ObImage* Stand;
    ObImage* Run;
    ObImage* Attack;
    ObImage* Hurt;
    ObImage* L_Stand;
    ObImage* L_Run;
    ObImage* L_Attack;
    ObImage* L_Hurt;

    int State;
    int Hp_Amount;
    int Damaged_Type;
    float Attack_Time;

    bool Rest;
    bool Damaged;
    bool Alive;
};

struct GO_BLIN
{
    ObRect* HitBox;
    ObRect* AttackBox;
    ObRect* Hp;
    ObImage* Stand;
    ObImage* Run;
    ObImage* Attack1;
    ObImage* Attack2;
    ObImage* Hurt;
    ObImage* L_Stand;
    ObImage* L_Run;
    ObImage* L_Attack1;
    ObImage* L_Attack2;
    ObImage* L_Hurt;

    int State;
    int Hp_Amount;
    int Damaged_Type;
    float Attack_Time;

    bool Rest;
    bool Damaged;
    bool Alive;
};

struct MIDDLE_BOSS
{
    ObRect*     HitBox;
    ObRect*     AttackBox;
    ObRect*     Hp;
    ObImage*    Stand;
    ObImage*    Run;
    ObImage*    Attack;
    ObImage*    Slide1;
    ObImage*    Slide2;
    ObImage*    Hurt;
    ObImage*    L_Stand;
    ObImage*    L_Run;
    ObImage*    L_Attack;
    ObImage*    L_Slide1;
    ObImage*    L_Slide2;
    ObImage*    L_Hurt;
    ObImage*    Mole1;
    ObImage*    Mole2;
    ObImage*    Motion;
    ObImage*    Special;
    ObImage*    Special_Effect;

    int Page;
    int State;
    int Attack_Count;
    int Hp_Amount;
    int Damaged_Type;
    float Attack_Time;

    bool Rest;
    bool Damaged;
    bool Alive;
};

struct Player
{
    ObRect* HitBox;
    ObRect* AttackBox;
    ObRect* StaminaBox;
    ObImage* Stand;
    ObImage* Walk;
    ObImage* Run;
    ObImage* Run_Attack;
    ObImage* Attack;
    ObImage* Jump;
    ObImage* Dumbling;
    ObImage* Kick;
    ObImage* Downattack1;
    ObImage* Downattack2;
    ObImage* Thrust;
    ObImage* Defence;
    ObImage* L_Stand;
    ObImage* L_Walk;
    ObImage* L_Run;
    ObImage* L_Run_Attack;
    ObImage* L_Attack;
    ObImage* L_Jump;
    ObImage* L_Dumbling;
    ObImage* L_Kick;
    ObImage* L_Downattack1;
    ObImage* L_Downattack2;
    ObImage* L_Thrust;
    ObImage* L_Defence;

    ObImage* Downattack_Effect;

    void Control_Player(float Floor_Height);

    int State;
    float Gravity;
    float Jump_Time;
    float Attack_Time;
    float Stamina;

    bool Damaged;
    float Damaged_Time;
};

class Scene2 : public Scene
{
private:
    //BACKGROUND
    ObImage* Background1;
    ObImage* Floor1;
    ObImage* Background2;
    ObImage* Floor2;
    ObImage* Background3;
    ObImage* Floor3;
    ObImage* Background4;
    ObImage* Floor4;

    //GIMIC
    ObImage* Door1;
    ObImage* Door2;
    ObImage* Door3;
    ObRect* DoorBox;
    ObImage* Grave[3];
    ObImage* Potal;
    bool Potal_Active;
    ObRect* PotalBox;
    ObImage* Potal2;
    bool Potal2_Active;
    ObRect* PotalBox2;
    ObImage* Flower;
    ObImage* Magic_Book;

    //PLAYER
    Player Link;
    ObImage* Heart[10];
    int Heart_Life;

    //ENEMY
    Sl_ime Slime;
    GO_BLIN Goblin[3];
    MIDDLE_BOSS Middle_Boss;

    //NPC
    ObImage* Npc1;
    int Npc1_Count;
    ObImage* Npc2;
    int Npc2_Count;
    ObImage* Npc2_Fear;
    ObImage* Npc3;
    int Npc3_Count;

    //SCRIPT
    ObImage* Book;
    ObImage* Manual;
    ObImage* NPC1_1;
    ObImage* NPC1_2;
    ObImage* NPC1_3;
    ObImage* NPC1_4;
    ObImage* NPC1_5;
    ObImage* NPC1_6;
    ObImage* NPC1_7;
    ObImage* NPC2_1;
    ObImage* NPC2_2;
    ObImage* NPC2_3;
    ObImage* NPC3_1;
    ObImage* NPC3_2;

    int Click_Num;

public:
    Scene2();
    ~Scene2();
    //순수가상함수는 반드 자식클래스에서 정의해야함
    void Init() override;
    void Update() override;
    void LateUpdate() override;
    void Render() override;
};

