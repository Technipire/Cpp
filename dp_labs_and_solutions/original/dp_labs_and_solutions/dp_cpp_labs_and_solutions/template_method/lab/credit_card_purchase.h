// credit_card_purchase.h

#ifndef credit_card_purchase_header
#define credit_card_purchase_header

#include "purchase.h"

class credit_card_purchase : public purchase
{
public:
	virtual void perform();

private:
	void select_item();
	void bring_item_to_register();
	void pay_via_credit_card();
};

#endif
