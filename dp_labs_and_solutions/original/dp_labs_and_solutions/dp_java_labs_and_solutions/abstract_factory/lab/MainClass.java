// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		Garden aGarden = SetupClass.setup();

		UseClass.use(aGarden);
	}
}
