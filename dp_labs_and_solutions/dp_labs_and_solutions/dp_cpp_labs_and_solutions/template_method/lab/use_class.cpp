// use_class.cpp

#include "purchase.h"
#include "use_class.h"

void use_class::use(purchase * a_purchase)
{
	a_purchase->perform();
}
