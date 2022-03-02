/*
* 工厂方法 基类
* 定义一个工厂接口，CreateTextInput(),用于创建对象
*/
#ifndef __CREATOR_H__
#define __CREATOR_H__
#include "Creator.h"
#include "ManIpulator.h"
class Creator
{
public:
	Creator();
	virtual ~Creator();

public:
	virtual ManIpulator* CreateTextInput() = 0;
};

#endif 