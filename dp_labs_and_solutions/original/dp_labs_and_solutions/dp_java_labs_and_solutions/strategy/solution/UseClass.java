// UseClass.java

public class UseClass
{
	public static void use(Packer aPacker)
	{
		aPacker.pack();

		aPacker.setStrategy(new FastSloppyPackingStrategy());

		aPacker.pack();
	}
}
