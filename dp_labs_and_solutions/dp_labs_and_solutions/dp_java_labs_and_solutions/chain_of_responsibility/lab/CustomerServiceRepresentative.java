// CustomerServiceRepresentative.java

public class CustomerServiceRepresentative
{
	public boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		return (aCustomerRequestsDiscountEvent.getPercent() < 10);
	}

	public void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		System.out.println("I am a CustomerServiceRepresentative.");
		System.out.println("I can give you a " + aCustomerRequestsDiscountEvent.getPercent() + "% discount.");
	}
}
