#pragma once

class Scene1 : public Scene
{
private:
    ObImage* Grandel;
    ObImage* Play;
    ObImage* Credit;
    ObImage* Exit;
    ObImage* Name;
    ObImage* Add;

    ObImage* Background;

    int Click_Num2;

public:
    Scene1();
    ~Scene1();
    //���������Լ��� �ݵ� �ڽ�Ŭ�������� �����ؾ���
   void Init() override;
   void Update() override;
   void LateUpdate() override;
   void Render() override;
};

