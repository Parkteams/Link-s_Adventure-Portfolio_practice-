#pragma once
class MainGame
{
private:

    bool   isVsync; //��������ȭ �Ұ���
    
public:
    MainGame();//����
    ~MainGame();//�Ҹ�

    void Init();//�ʱ�ȭ

    //����
    void Update();//����
    void LateUpdate();//��������
    void Render();//�׸���
};

