#include "ConcretePrototype2.h"
#include <iostream>
ConcretePrototype2::ConcretePrototype2()
{

}

ConcretePrototype2::~ConcretePrototype2()
{

}

Prototype* ConcretePrototype2::Clone()
{
	return new ConcretePrototype2(*this);
}

void ConcretePrototype2::Input()
{
	std::cout << "ConcretePrototype2" << std::endl;
}