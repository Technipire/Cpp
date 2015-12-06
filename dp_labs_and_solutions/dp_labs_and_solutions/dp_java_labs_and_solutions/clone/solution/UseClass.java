// UseClass.java

public class UseClass
{
	public static void use(Lettuce aLettuce)
	{
		Lettuce aCopy = null;

		if (aLettuce == null)
		{
			aCopy = null;
		}
		else
		{
			aCopy = aLettuce.clone();
		}

		if (aCopy == null)
		{
			System.out.println("null");
		}
		else
		{
			System.out.println(aCopy.getClass().getName());
		}
	}
}
