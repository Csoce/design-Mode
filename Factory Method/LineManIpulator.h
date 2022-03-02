#ifndef __LINE_MANIPULATOR_H__
#define __LINE_MANIPULATOR_H__

#include "ManIpulator.h"
class LineManIpulator :public ManIpulator
{
public:
    LineManIpulator();
    virtual ~LineManIpulator();

public:
    virtual void Input();
};

#endif

