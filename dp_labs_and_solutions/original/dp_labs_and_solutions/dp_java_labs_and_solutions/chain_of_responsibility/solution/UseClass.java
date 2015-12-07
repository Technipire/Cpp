// UseClass.java

public class UseClass
{
	public static void use(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent, Handler aHandler)
	{
		if (aCustomerRequestsDiscountEvent == null)
		{
			// throw an exception.
		}

		if (aHandler != null)
		{
			aHandler.handle(aCustomerRequestsDiscountEvent);
		}
		else
		{
			// aCustomerRequestsDiscountEvent is not handled.
		}
	}
}
