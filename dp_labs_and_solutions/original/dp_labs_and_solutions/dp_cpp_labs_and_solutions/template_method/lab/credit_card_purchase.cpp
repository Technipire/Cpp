// credit_card_purchase.cpp

#include <iostream>
#include "credit_card_purchase.h"

void credit_card_purchase::perform()
{
	select_item();
	bring_item_to_register();
	pay_via_credit_card();
}

void credit_card_purchase::select_item()
{
}

void credit_card_purchase::bring_item_to_register()
{
}

void credit_card_purchase::pay_via_credit_card()
{
	std::cout << "paying via credit card." << std::endl;
}
