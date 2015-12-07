// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Lettuce aLettuce = SetupClass.setup();

		UseClass.use(aLettuce);
	}
}
