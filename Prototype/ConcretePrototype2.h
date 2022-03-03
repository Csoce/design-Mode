#pragma once
#include "Prototype.h"
class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2();
	virtual ~ConcretePrototype2();

public:
	virtual Prototype* Clone();
	virtual void Input();
};

