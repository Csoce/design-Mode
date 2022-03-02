#ifndef __TEXTBASE_H__
#define __TEXTBASE_H__

#include "TextBase.h"
class CssText :
    public TextBase
{
public:
	CssText() { m_strName = "css_name"; };

public:
	virtual std::string GetTextName();

private:
	std::string m_strName;
};

#endif // !__TEXTBASE_H__
