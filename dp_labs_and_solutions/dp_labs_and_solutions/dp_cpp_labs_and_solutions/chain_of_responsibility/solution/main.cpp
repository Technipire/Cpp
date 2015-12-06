// main.cpp

#include "customer_requests_discount_event.h"
class handler;
#include "setup_class.h"
#include "use_class.h"

int main()
{
	handler * a_handler = setup_class::setup();

	use_class::use(new customer_requests_discount_event(25), a_handler);

	return 0;
}
