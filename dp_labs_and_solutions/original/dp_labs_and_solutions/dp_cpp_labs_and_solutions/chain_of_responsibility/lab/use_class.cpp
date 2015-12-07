// use_class.cpp

#include "customer_requests_discount_event.h"
#include "customer_service_manager.h"
#include "customer_service_representative.h"
#include "customer_service_supervisor.h"
#include "use_class.h"

void use_class::use(
	customer_requests_discount_event * a_customer_requests_discount_event,
	customer_service_representative * a_customer_service_representative,
	customer_service_supervisor * a_customer_service_supervisor,
	customer_service_manager * a_customer_service_manager)
{
	if (a_customer_requests_discount_event == nullptr)
	{
		// throw an exception.
	}
	if (a_customer_service_representative == nullptr)
	{
		// throw an exception.
	}
	if (a_customer_service_supervisor == nullptr)
	{
		// throw an exception.
	}
	if (a_customer_service_manager == nullptr)
	{
		// throw an exception.
	}
	
	if (a_customer_service_representative->can_handle(a_customer_requests_discount_event))
	{
		a_customer_service_representative->do_handle(a_customer_requests_discount_event);
	}
	else if (a_customer_service_supervisor->can_handle(a_customer_requests_discount_event))
	{
		a_customer_service_supervisor->do_handle(a_customer_requests_discount_event);
	}
	else if (a_customer_service_manager->can_handle(a_customer_requests_discount_event))
	{
		a_customer_service_manager->do_handle(a_customer_requests_discount_event);
	}
	else
	{
		// a_customer_requests_discount_event is not handled.
	}
}
