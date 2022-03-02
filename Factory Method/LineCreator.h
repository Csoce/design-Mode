#ifndef __LINEBREATOR_H__
#define __LINEBREATOR_H__
#include "Creator.h"
#include "ManIpulator.h"
class LineCreator :
    public Creator
{
public:
    LineCreator();
    virtual ~LineCreator();

public:
    virtual ManIpulator* CreateTextInput();

};

#endif