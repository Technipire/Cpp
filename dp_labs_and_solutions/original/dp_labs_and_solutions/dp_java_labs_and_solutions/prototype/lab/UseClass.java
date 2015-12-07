// UseClass.java

public class UseClass
{
	public static void use(Garden aGarden)
	{
		Lettuce aLettuce = aGarden.makeLettuce();

		System.out.println(aLettuce.getClass().getName());
	}
}
