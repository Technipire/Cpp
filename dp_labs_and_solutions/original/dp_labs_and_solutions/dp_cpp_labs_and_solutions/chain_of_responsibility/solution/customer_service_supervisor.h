// customer_service_supervisor.h

#ifndef customer_service_supervisor_header
#define customer_service_supervisor_header

class customer_requests_discount_event;
#include "handler.h"

class customer_service_supervisor : public handler
{
public:
	customer_service_supervisor(handler * a_successor);

protected:
	virtual bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const;

	virtual void do_handle(customer_requests_discount_event * a_customer_requests_discount_event);
};

#endif
