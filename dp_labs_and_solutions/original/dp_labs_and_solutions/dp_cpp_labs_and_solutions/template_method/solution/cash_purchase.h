// cash_purchase.h

#ifndef cash_purchase_header
#define cash_purchase_header

#include "purchase.h"

class cash_purchase : public purchase
{
protected:
	virtual void pay();
};

#endif
