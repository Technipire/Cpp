// customer_requests_discount_event.h

#ifndef customer_requests_discount_event_header
#define customer_requests_discount_event_header

class customer_requests_discount_event
{
public:
	customer_requests_discount_event(int a_percent);

	int get_percent() const;

private:
	void set_percent(int a_percent);

	int my_percent;
};

#endif
