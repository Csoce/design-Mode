#ifndef __TEXTBADE_H__
#define __TEXTBADE_H__


#include<string>
class TextBase
{
public:
	TextBase() { m_strName = "base"; };

public:
	virtual std::string GetTextName();

private:
	std::string m_strName;
};
#endif // !__TEXTBADE_H__
