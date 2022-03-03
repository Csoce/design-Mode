#include "Singleton.h"
#include <iostream>

//单例模式 唯一实例
Singleton* Singleton::m_pLeton = nullptr;

Singleton::Singleton()
{
	
}

void Singleton::Input()
{
	std::cout << "Singleton" << std::endl;
}

Singleton* Singleton::Instance()
{
	if (m_pLeton == nullptr)
		m_pLeton = new Singleton();

	return m_pLeton;
}