#include "LineTextFactory.h"
#include "StyleText.h"
TextBase* LineTextFactory::CreateTextFactory()
{
	return new StyleText;
}
