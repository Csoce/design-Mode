//
// 创建导向器   ----> 
// 创建生成器
// 导向器 分解内容并传给相应的生成器
// 生成器完成内容的构建，并返回结果
//
#include "Builder.h"

Builder::Builder()
{
	m_str = "Bilder base";
	m_int = 0;
	m_float = 0.1;
}
const string Builder::PartStr()
{
	return m_str;
}

const int Builder::PartInt()
{
	return m_int;
}

const float Builder::Partfloat()
{
	return m_float;
}