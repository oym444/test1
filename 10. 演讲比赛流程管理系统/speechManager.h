#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"speaker.h"
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>
using namespace std;



//设计演讲比赛管理类
class SpeechManager
{
public:
    //构造函数
    SpeechManager();

    //展示菜单
    void show_Menu();

    //退出程序
    void exitSystem();

    //析构函数
    ~SpeechManager();

    //创建12名选手
    void createSpeaker();

    //开始比赛 比赛整个流程控制函数
    void startSpeech();

    //抽签
    void speechDraw();

    //比赛
    void speechContest();

    //显示得分
    void showScore();

    //保存记录
    void saveRecord();

    //读取记录
    void loadRecord();

    //文件为空的标志
    bool fileIsEmpty;

    //往届记录
    map<int, vector<string>> m_Record;  //key代表第几届 ，value记录具体的信息

    //显示往届得分
    void showRocord();

    //清空文件
    void clearRocord();

    //初始化容器和属性
    void initSpeech();

    //成员属性
    //保存第一轮比赛选手编号容器
    vector<int>v1;

    //第一轮晋级选手编号容器
    vector<int>v2;

    //胜出前三名选手编号容器
    vector<int>vVictory;
    
    //存放编号以及对应具体选手容器
    map<int, Speaker>m_Speaker;

    //存放比赛轮数
    int m_index;
};