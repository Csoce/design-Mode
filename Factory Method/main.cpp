/*
* 工厂方法
* 
* 工厂方法用于创建一个对象
* 
* 生成基类：Creator
* 生成子类：LineCreator
* 生成基类抽象接口：CreateTextInput
* 
* 产品对象基类：Manlpulator
* 产品对象子类；LineManlpulator
* 
* 每个生成类都与一个产品类进行绑定
* 当调用生成类的 CreateTextInput 时，并生成一个与之绑定的ManIpulator
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
