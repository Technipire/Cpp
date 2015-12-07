// CustomerServiceRepresentative.java

public class CustomerServiceRepresentative extends Handler
{
	public CustomerServiceRepresentative(Handler aSuccessor)
	{
		super(aSuccessor);
	}

	protected boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 10);
	}

	protected void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceRepresentative.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
