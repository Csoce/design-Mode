#ifndef  __TEXTFCTORY_H__
#define __TEXTFCTORY_H__

#include "TextFactory.h"
#include "TextBase.h"
class LineTextFactory : public TextFactory
{
public:
    virtual TextBase* CreateTextFactory();
};

#endif // ! __TEXTFCTORY_H__


