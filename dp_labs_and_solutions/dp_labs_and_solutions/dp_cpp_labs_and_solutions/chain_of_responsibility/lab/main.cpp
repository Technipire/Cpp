// main.cpp

#include "customer_requests_discount_event.h"
#include "customer_service_manager.h"
#include "customer_service_representative.h"
#include "customer_service_supervisor.h"
#include "use_class.h"

int main()
{
	use_class::use(
		new customer_requests_discount_event(25),
		new customer_service_representative(),
		new customer_service_supervisor(),
		new customer_service_manager());

	return 0;
}
