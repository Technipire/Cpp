// CustomerServiceManager.java

public class CustomerServiceManager
{
	public boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 30);
	}

	public void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceManager.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
