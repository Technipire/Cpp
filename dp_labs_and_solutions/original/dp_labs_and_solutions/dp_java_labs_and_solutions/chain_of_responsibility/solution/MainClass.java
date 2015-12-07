// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Handler aHandler = SetupClass.setup();

		UseClass.use(new CustomerRequestsDiscountEvent(25), aHandler);
	}
}
