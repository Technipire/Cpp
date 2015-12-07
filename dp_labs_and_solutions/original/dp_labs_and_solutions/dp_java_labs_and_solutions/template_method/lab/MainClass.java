// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Purchase aPurchase = SetupClass.setup();

		UseClass.use(aPurchase);
	}
}
