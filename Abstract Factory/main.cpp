/*
* 抽象工厂
* 
* 用于创建一系列相关或相依赖的的对象
* 
* 
* 创建抽象产品   基类：TextFactory 
* 创建抽象产品   子类：LineTextFactory、RowTextFactory
* 基类定义虚函数 CreateTextFactory  用以创建具体产品
* 子类重写该函数 用于创建另外的产品
* 
* 具体产品		基类：TextBase
* 具体产品		子类：CssText、StypeText
* 
* 
* 
* 
*/

#include <iostream>
#include "LineTextFactory.h"
#include "RowTextFactory.h"
#include "TextBase.h"
int main()
{
	TextFactory* factory = new LineTextFactory();
	TextBase* f = factory->CreateTextFactory();
	f->Text1();
	f->Text2();
}