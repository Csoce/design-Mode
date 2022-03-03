#pragma once
#include "Prototype.h"
class ConcretePrototype1 :  public Prototype
{
public:
	ConcretePrototype1();
	virtual ~ConcretePrototype1();

public:
	virtual Prototype* Clone();
	virtual void Input();
};

