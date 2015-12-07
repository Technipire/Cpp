// customer_service_supervisor.h

#ifndef customer_service_supervisor_header
#define customer_service_supervisor_header

class customer_requests_discount_event;

class customer_service_supervisor
{
public:
	customer_service_supervisor();

	bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const;

	void do_handle(customer_requests_discount_event * a_customer_requests_discount_event);
};

#endif
