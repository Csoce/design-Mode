#include "LineTextFactory.h"
#include "StyleTextBase.h"
TextBase* LineTextFactory::CreateTextFactory()
{
	return new StyleTextBase;
}
