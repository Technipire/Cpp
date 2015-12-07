// customer_requests_discount_event.cpp

#include "customer_requests_discount_event.h"

customer_requests_discount_event::customer_requests_discount_event(int a_percent)
{
	set_percent(a_percent);
}

void customer_requests_discount_event::set_percent(int a_percent)
{
	my_percent = a_percent;
}

int customer_requests_discount_event::get_percent() const
{
	return my_percent;
}
