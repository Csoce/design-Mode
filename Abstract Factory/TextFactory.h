#ifndef __TEXTFACTORY_H__
#define __TEXTFACTORY_H__
#include "TextBase.h"
class TextFactory
{
public:
	virtual TextBase* CreateTextFactory() = 0;
};

#endif __TEXTFACTORY_H__