// customer_service_representative.cpp

#include <iostream>
#include "customer_requests_discount_event.h"
#include "customer_service_representative.h"

customer_service_representative::customer_service_representative(handler * a_successor)
: handler(a_successor)
{
}

bool customer_service_representative::can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const
{
	return (a_customer_requests_discount_event->get_percent() < 10);
}

void customer_service_representative::do_handle(customer_requests_discount_event * a_customer_requests_discount_event)
{
	std::cout << "I am a customer_service_representative." << std::endl;
	std::cout << "I can give you a " << a_customer_requests_discount_event->get_percent() << "% discount." << std::endl;
}
