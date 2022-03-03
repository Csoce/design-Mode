
#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

class Prototype
{
public:
	Prototype();
	virtual ~Prototype();

public:
	virtual Prototype* Clone();
	virtual void Input();
};

#endif
