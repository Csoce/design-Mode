/*
* 适配器模式
* 适配器分为对象适配器 和类适配器
* 对象适配器 通过添加组合实现
* 
* 类适配器 通过多重继承实现
* 
* 适配器支持：
* 插入适配器（抽象类、代理、参数化）
*/

#include "TextShape.h"
#include <iostream>

int main(void)
{
	Shape* p = new TextShape();
	p->Input();
	return 0;
}  