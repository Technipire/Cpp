// CustomerServiceManager.java

public class CustomerServiceManager extends Handler
{
	public CustomerServiceManager()
	{
		super(null);
	}

	protected boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 30);
	}

	protected void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceManager.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
