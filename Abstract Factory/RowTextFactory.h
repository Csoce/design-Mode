#ifndef __ROWTEXTFACTORY_H__
#define __ROWTEXTFACTORY_H__

#include "TextFactory.h"
class RowTextFactory :  public TextFactory
{
public:
	virtual TextBase* CreateTextFactory();
};

#endif // !__ROWTEXTFACTORY_H__
