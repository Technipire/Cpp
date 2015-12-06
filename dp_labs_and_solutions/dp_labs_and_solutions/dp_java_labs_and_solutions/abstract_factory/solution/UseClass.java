// UseClass.java

public class UseClass
{
	public static void use(Garden aGarden)
	{
		Lettuce aLettuce = aGarden.makeLettuce();

		System.out.println(aLettuce.getClass().getName());

		Tomato aTomato = aGarden.makeTomato();

		System.out.println(aTomato.getClass().getName());
	}
}
