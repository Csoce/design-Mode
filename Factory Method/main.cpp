/*
* 工厂方法
* 
* 工厂方法用于创建一个对象
* 
* 生成基类：Creator
* 生成子类：LineCreator
* 
* 产品对象基类：Manlpulator
* 产品对象子类；LineManlpulator
* 
*/
#include "Creator.h"
#include "LineManIpulator.h"
#include "LineCreator.h"
#include <iostream>

int main()
{
    Creator* p = new LineCreator();
    ManIpulator* pIpt = p->CreateTextInput();
    pIpt->Input();

    delete pIpt;
    pIpt = nullptr;
   
}
