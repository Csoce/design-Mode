/*
* �������� ����
* ����һ�������ӿڣ�CreateTextInput(),���ڴ�������
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