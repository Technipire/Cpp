// customer_service_supervisor.cpp

#include <iostream>
#include "customer_requests_discount_event.h"
#include "customer_service_supervisor.h"

customer_service_supervisor::customer_service_supervisor()
{
}

bool customer_service_supervisor::can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const
{
	return (a_customer_requests_discount_event->get_percent() < 20);
}

void customer_service_supervisor::do_handle(customer_requests_discount_event * a_customer_requests_discount_event)
{
	std::cout << "I am a customer_service_supervisor." << std::endl;
	std::cout << "I can give you a " << a_customer_requests_discount_event->get_percent() << "% discount." << std::endl;
}
