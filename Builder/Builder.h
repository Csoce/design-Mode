#ifndef __BUILDER_H__
#define __BUILDER_H__
#include <string>

using std::string;

class Builder
{
public:
	Builder();
	virtual ~Builder() = default;

public:
	virtual const string PartStr();
	virtual const int PartInt();
	virtual const float Partfloat();

private:
	string m_str;
	int m_int;
	float m_float;
};

#endif //__BUILDER_H__
