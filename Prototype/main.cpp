/*
* 原型模式
* 
* 克隆自身基类：Prototype
* 克隆自身子类：ConcretePrototype1、ConcretePrototype2
* 基类提供抽象接口：Clone()
* 子类重写该接口用于克隆自身
* 
* 克隆类
* 进行克隆操作
*/


#include "main.h"
#include "Client.h"
#include "ConcretePrototype2.h"
int main(void)
{
	Client p(new ConcretePrototype2);
	p.show();
	return 0;
}