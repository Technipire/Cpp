// customer_service_manager.h

#ifndef customer_service_manager_header
#define customer_service_manager_header

class customer_requests_discount_event;
#include "handler.h"

class customer_service_manager : public handler
{
public:
	customer_service_manager();

protected:
	virtual bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const;

	virtual void do_handle(customer_requests_discount_event * a_customer_requests_discount_event);
};

#endif
