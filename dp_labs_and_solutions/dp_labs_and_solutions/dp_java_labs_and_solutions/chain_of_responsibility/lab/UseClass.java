// UseClass.java

public class UseClass
{
	public static void use(
		CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent,
		CustomerServiceRepresentative aCustomerServiceRepresentative,
		CustomerServiceSupervisor aCustomerServiceSupervisor,
		CustomerServiceManager aCustomerServiceManager)
	{
		if (aCustomerRequestsDiscountEvent == null)
		{
			// throw an exception.
		}
		if (aCustomerServiceRepresentative == null)
		{
			// throw an exception.
		}
		if (aCustomerServiceSupervisor == null)
		{
			// throw an exception.
		}
		if (aCustomerServiceManager == null)
		{
			// throw an exception.
		}
		
		if (aCustomerServiceRepresentative.canHandle(aCustomerRequestsDiscountEvent))
		{
			aCustomerServiceRepresentative.doHandle(aCustomerRequestsDiscountEvent);
		}
		else if (aCustomerServiceSupervisor.canHandle(aCustomerRequestsDiscountEvent))
		{
			aCustomerServiceSupervisor.doHandle(aCustomerRequestsDiscountEvent);
		}
		else if (aCustomerServiceManager.canHandle(aCustomerRequestsDiscountEvent))
		{
			aCustomerServiceManager.doHandle(aCustomerRequestsDiscountEvent);
		}
		else
		{
			// aCustomerRequestsDiscountEvent is not handled.
		}
	}
}
