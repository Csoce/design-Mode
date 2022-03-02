#include "Director.h"
#include "TextBuilder.h"
#include <iostream>

using std::endl;
using std::cout;

Director::Director(Builder* pBler)
{
	m_pBler = pBler;
}

Director::~Director()
{
	if (m_pBler != NULL)
	{
		delete m_pBler;
		m_pBler = NULL;
	}
}

void Director::Construct()
{
	cout << m_pBler->PartStr() << endl;
	cout << m_pBler->PartInt() << endl;
	cout << m_pBler->Partfloat() << endl;
}