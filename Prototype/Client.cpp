#include "Client.h"
#include "Prototype.h"
Client::Client(Prototype* pType)
{
	m_prType = pType;
}

Client::~Client()
{
	Close();
}

void Client::Close()
{
	if (m_prType != nullptr)
	{
		delete m_prType;
		m_prType = nullptr;
	}
}

void Client::show()
{
	m_prType->Input();
}