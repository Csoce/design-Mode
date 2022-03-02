#include "TextBuilder.h"
#include "Director.h"
#include <iostream>

int main(void)
{
	Director cto(new TextBuilder());
	cto.Construct();
	return 0;
}