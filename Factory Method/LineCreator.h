#ifndef __LINEBREATOR_H__
#define __LINEBREATOR_H__
#include "CreatorBase.h"
#include "ManIpulatorBase.h"
class LineCreator :
    public CreatorBase
{
public:
    LineCreator();
    virtual ~LineCreator();

public:
    virtual ManIpulatorBase* CreateTextInput();

};

#endif