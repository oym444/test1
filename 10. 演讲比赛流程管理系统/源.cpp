#include <iostream>
#include"speechManager.h"
#include<map>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    //创建管理类对象
    SpeechManager sm;

    ////测试12名选手创建
    //for(map<int,Speaker>::iterator it=sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
    //{
    //    cout << "选手编号：" << it->first << "姓名：" << it->second.m_name << "分数： " << it->second.m_score[0] << endl;
    //}

    int choice = 0; //用来存储用户的选项
    while (true)
    {
        sm.show_Menu();

        cout << "请输入你的选择：" << endl;
        cin >> choice; //接受用户的选项

        switch (choice)
        {
        case 1: //开始比赛
            sm.startSpeech();
            break;
        case 2: //查看往届比赛记录
            sm.showRocord();
            break;
        case 3: //清空比赛记录
            sm.clearRocord();
            break;
        case 0:  //退出系统
            sm.exitSystem();
            break;
        default:
            system("cls"); //清屏
            break;
        }
    }
    sm.show_Menu();  


    system("pause");
    return 0;
}
