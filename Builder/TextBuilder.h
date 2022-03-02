#ifndef __TEXTBUILDER_H__
#define __TEXTBUILDER_H__

#include "Builder.h"
class TextBuilder :   public Builder
{

public:
	virtual const string PartStr();
	virtual const int PartInt();
	virtual const float Partfloat();

private:

};

#endif
