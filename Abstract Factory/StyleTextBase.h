#ifndef __STYLETEXTBASE_H__
#define __STYLETEXTBASE_H__


#include "TextBase.h"
class StyleTextBase : public TextBase
{
public:
    StyleTextBase() { m_strName = "style_Name"; };

public:
    virtual std::string GetTextName();

private:
    std::string m_strName;
};

#endif // !__STYLETEXTBASE_H__