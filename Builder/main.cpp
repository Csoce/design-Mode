/*
* 生成器模式
* 
* 生成器分为：导向器和生成器
* 生成器用于执行具体工作
* 生成器基类：Builder
* 生成器子类：TextBuilder
* 子类重写构造的生成器对象
* 
* 导向器用于导向至执行的生成器
* 导向器基类：Director
*/


#include "TextBuilder.h"
#include "Director.h"
#include <iostream>

int main(void)
{
	Director cto(new TextBuilder());
	cto.Construct();
	return 0;
}