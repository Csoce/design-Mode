// Abstract Factory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "LineTextFactory.h"
#include "RowTextFactory.h"
#include "TextBase.h"
int main()
{
	LineTextFactory factory;
	TextBase* f = factory.CreateTextFactory();
	std::cout << f->GetTextName() << std::endl;
}