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
		else if (aLettuce.getClass().getName().equals("ConventionalLettuce"))
		{
			aCopy = new ConventionalLettuce(1, 2);
		}
		else if (aLettuce.getClass().getName().equals("OrganicLettuce"))
		{
			aCopy = new OrganicLettuce(1, 2);
		}
		else
		{
			throw new DpException("Unrecognized subclass of Lettuce.");
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
