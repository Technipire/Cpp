// customer_service_manager.h

#ifndef customer_service_manager_header
#define customer_service_manager_header

class customer_requests_discount_event;

class customer_service_manager
{
public:
	customer_service_manager();

	bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const;

	void do_handle(customer_requests_discount_event * a_customer_requests_discount_event);
};

#endif
