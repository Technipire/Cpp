// CustomerServiceSupervisor.java

public class CustomerServiceSupervisor extends Handler
{
	public CustomerServiceSupervisor(Handler aSuccessor)
	{
		super(aSuccessor);
	}

	protected boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 20);
	}

	protected void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceSupervisor.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
