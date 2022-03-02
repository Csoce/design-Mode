#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__
#include "Builder.h"
class Director
{
public:
	Director(Builder* pBler);
	~Director();

public:
	void Construct();
private:
	Builder* m_pBler;
};

#endif //__DIRECTOR_H__
