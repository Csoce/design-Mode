#include "LineCreator.h"
#include "LineManIpulator.h"
LineCreator::LineCreator()
{

}

LineCreator::~LineCreator()
{

}

ManIpulator* LineCreator::CreateTextInput()
{
	return new LineManIpulator;
}