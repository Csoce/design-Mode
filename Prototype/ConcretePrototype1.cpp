#include "ConcretePrototype1.h"
#include <iostream>
ConcretePrototype1::ConcretePrototype1()
{

}

ConcretePrototype1::~ConcretePrototype1()
{

}

Prototype* ConcretePrototype1::Clone()
{
	return new ConcretePrototype1(*this);
}

void ConcretePrototype1::Input()
{
	std::cout << "ConcretePrototype1" << std::endl;
}