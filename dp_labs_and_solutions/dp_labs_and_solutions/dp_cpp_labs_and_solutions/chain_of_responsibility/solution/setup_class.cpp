// setup_class.cpp

#include "customer_service_manager.h"
#include "customer_service_representative.h"
#include "customer_service_supervisor.h"
#include "setup_class.h"

handler * setup_class::setup()
{
	return
		new customer_service_representative(
			new customer_service_supervisor(
				new customer_service_manager()));
}
