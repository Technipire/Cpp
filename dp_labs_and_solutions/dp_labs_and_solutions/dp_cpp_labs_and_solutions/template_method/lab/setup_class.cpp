// setup_class.cpp

#include "cash_purchase.h"
class purchase;
#include "setup_class.h"

purchase * setup_class::setup()
{
	return new cash_purchase();
}
