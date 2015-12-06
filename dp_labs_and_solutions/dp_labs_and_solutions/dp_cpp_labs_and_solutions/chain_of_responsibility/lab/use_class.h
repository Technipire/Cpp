// use_class.h

#ifndef use_class_header
#define use_class_header

class customer_requests_discount_event;
class customer_service_manager;
class customer_service_representative;
class customer_service_supervisor;

class use_class
{
public:
	static void use(
		customer_requests_discount_event * a_customer_requests_discount_event,
		customer_service_representative * a_customer_service_representative,
		customer_service_supervisor * a_customer_service_supervisor,
		customer_service_manager * a_customer_service_manager);
};

#endif
