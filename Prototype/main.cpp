/*
* ԭ��ģʽ
* 
* ��¡������ࣺPrototype
* ��¡�������ࣺConcretePrototype1��ConcretePrototype2
* �����ṩ����ӿڣ�Clone()
* ������д�ýӿ����ڿ�¡����
* 
* ��¡��
* ���п�¡����
*/


#include "main.h"
#include "Client.h"
#include "ConcretePrototype2.h"
int main(void)
{
	Client p(new ConcretePrototype2);
	p.show();
	return 0;
}