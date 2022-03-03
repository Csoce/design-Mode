/*
* 单例模式
* 
*/


/*
* 单例模式
*/
#ifndef __SINGLETON_H__
#define __SINGLETON_H__
class Singleton
{
public:
	static Singleton* Instance();
	
public:
	void Input();

protected:
	Singleton();

private:
	static Singleton* m_pLeton;
};

#endif