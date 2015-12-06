// use_class.cpp

#include "customer_requests_discount_event.h"
#include "handler.h"
#include "use_class.h"

void use_class::use(customer_requests_discount_event * a_customer_requests_discount_event, handler * a_handler)
{
	if (a_customer_requests_discount_event == nullptr)
	{
		// throw an exception.
	}
	
	if (a_handler != nullptr)
	{
		a_handler->handle(a_customer_requests_discount_event);
	}
	else
	{
		// a_customer_requests_discount_event is not handled.
	}
}
