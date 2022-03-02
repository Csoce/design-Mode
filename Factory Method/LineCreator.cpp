#include "LineCreator.h"
#include "LineManIpulator.h"
LineCreator::LineCreator()
{

}

LineCreator::~LineCreator()
{

}

ManIpulatorBase* LineCreator::CreateTextInput()
{
	return new LineManIpulator;
}