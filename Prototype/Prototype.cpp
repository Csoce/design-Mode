#include "Prototype.h"
#include <iostream>
Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}

Prototype* Prototype::Clone()
{
	return new Prototype(*this);
}

void Prototype::Input()
{
	std::cout << "prototype" << std::endl;
}