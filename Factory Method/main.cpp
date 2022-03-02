// Factory Method.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "CreatorBase.h"
#include "LineManIpulator.h"
#include "LineCreator.h"
#include <iostream>

int main()
{
    LineCreator p;
    ManIpulatorBase* pIpt = p.CreateTextInput();
    pIpt->Input();

    delete pIpt;
    pIpt = nullptr;
   
}
