#include "RowTextFactory.h"
#include "CssText.h"
TextBase* RowTextFactory::CreateTextFactory()
{
	return new CssText;
}