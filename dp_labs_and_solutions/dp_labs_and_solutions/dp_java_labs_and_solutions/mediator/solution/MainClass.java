// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Consumer aConsumer = SetupClass.setup();

		UseClass.use(aConsumer);
	}
}
