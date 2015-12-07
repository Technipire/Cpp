// cash_purchase.cpp

#include <iostream>
#include "cash_purchase.h"

void cash_purchase::perform()
{
	select_item();
	bring_item_to_register();
	pay_via_cash();
}

void cash_purchase::select_item()
{
}

void cash_purchase::bring_item_to_register()
{
}

void cash_purchase::pay_via_cash()
{
	std::cout << "Paying via cash." << std::endl;
}
