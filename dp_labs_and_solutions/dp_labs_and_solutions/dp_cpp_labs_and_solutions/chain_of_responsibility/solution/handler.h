// handler.h

#ifndef handler_header
#define handler_header

class customer_requests_discount_event;

class handler
{
public:
	handler(handler * a_successor);

	void handle(customer_requests_discount_event * a_customer_requests_discount_event);

protected:
	virtual bool can_handle(customer_requests_discount_event * a_customer_requests_discount_event) const = 0;

	virtual void do_handle(customer_requests_discount_event * a_customer_requests_discount_event) = 0;

private:
	handler * get_successor() const;

	void set_successor(handler * a_successor);

	handler * my_successor;
};

#endif
