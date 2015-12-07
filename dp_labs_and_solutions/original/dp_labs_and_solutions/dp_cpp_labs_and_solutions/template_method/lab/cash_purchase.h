// cash_purchase.h

#ifndef cash_purchase_header
#define cash_purchase_header

#include "purchase.h"

class cash_purchase : public purchase
{
public:
	virtual void perform();

private:
	void select_item();
	void bring_item_to_register();
	void pay_via_cash();
};

#endif
