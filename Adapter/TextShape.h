#ifndef __TEXTSHAPE_H__
#define __TEXTSHAPE_H__
#include "Shape.h"
#include "TextView.h"

/*
* ����ʹ�õ��Ƕ���������



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
* ������ ��������
*/

class TextShape :public Shape, private TextView
{

public:
	virtual void Input();
};


#endif