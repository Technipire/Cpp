// SetupClass.java

public class SetupClass
{
	public static Handler setup()
	{
		return
			new CustomerServiceRepresentative(
				new CustomerServiceSupervisor(
					new CustomerServiceManager()));
	}
}
