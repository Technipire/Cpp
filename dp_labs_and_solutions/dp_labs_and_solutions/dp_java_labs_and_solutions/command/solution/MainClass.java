// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Command aCommand = SetupClass.setup();

		UseClass.use(aCommand);
	}
}
