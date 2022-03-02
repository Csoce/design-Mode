#ifndef __CREATOR_H__
#define __CREATOR_H__
#include "CreatorBase.h"
#include "ManIpulatorBase.h"
class CreatorBase
{
public:
	CreatorBase();
	virtual ~CreatorBase();

public:
	virtual ManIpulatorBase* CreateTextInput() = 0;


};

#endif 