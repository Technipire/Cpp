// customer_service_representative.h

#ifndef customer_service_representative_header
#define customer_service_representative_header

class customer_requests_discount_event;

class customer_service_representative
{
public:
	customer_service_representative();

	bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const;

	void do_handle(customer_requests_discount_event * a_customer_requests_discount_event);
};

#endif
