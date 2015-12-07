// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		UseClass.use(
			new CustomerRequestsDiscountEvent(25),
			new CustomerServiceRepresentative(),
			new CustomerServiceSupervisor(),
			new CustomerServiceManager());
	}
}
