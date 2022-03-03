#ifndef __CLIENT_H__
#define __CLIENT_H__
#include "Prototype.h"
class Client
{
public:
	Client(Prototype* pType);
	virtual ~Client();
	void Close();

public:
	void show();
private:
	Prototype* m_prType;
};

#endif //__CLIENT_H__