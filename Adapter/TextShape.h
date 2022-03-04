#ifndef __TEXTSHAPE_H__
#define __TEXTSHAPE_H__
#include "Shape.h"
#include "TextView.h"

/*
* 以下使用的是对象适配器



class TextShape : public Shape
{
public:
	TextShape();
	virtual ~TextShape();

	void Close();
public:
	virtual void Input();

private:
	TextView* m_Tview;
};
*/


/*
* 以下是 类适配器
*/

class TextShape :public Shape, private TextView
{

public:
	virtual void Input();
};


#endif