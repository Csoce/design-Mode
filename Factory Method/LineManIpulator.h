#ifndef __LINE_MANIPULATOR_H__
#define __LINE_MANIPULATOR_H__

#include "ManIpulatorBase.h"
class LineManIpulator :public ManIpulatorBase
{
public:
    LineManIpulator();
    virtual ~LineManIpulator();

public:
    virtual void Input();
};

#endif

