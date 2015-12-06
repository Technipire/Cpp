// credit_card_purchase.h

#ifndef credit_card_purchase_header
#define credit_card_purchase_header

#include "purchase.h"

class credit_card_purchase : public purchase
{
protected:
	virtual void pay();
};

#endif
