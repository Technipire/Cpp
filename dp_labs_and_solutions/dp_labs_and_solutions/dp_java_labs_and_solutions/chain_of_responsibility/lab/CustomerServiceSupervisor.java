// CustomerServiceSupervisor.java

public class CustomerServiceSupervisor
{
	public boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 20);
	}

	public void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceSupervisor.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
