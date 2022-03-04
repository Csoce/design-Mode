#include "TextShape.h"
#include <string>

/*
* 以下是对象适配器


TextShape::TextShape()
{
	m_Tview =  new TextView();
}

TextShape::~TextShape()
{
	Close();
}

void TextShape::Close()
{
	if (m_Tview != nullptr)
	{
		delete m_Tview;
		m_Tview = nullptr;
	}
}

void TextShape::Input()
{
	std::string str = "textView";
	m_Tview->ShowText(str);
}

*/

void TextShape::Input()
{
	std::string str = "base TextView";
	TextView::ShowText(str);
}