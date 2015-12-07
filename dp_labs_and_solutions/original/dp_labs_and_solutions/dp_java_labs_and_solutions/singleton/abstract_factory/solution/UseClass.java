// UseClass.java

public class UseClass
{
	public static void use()
	{
		Lettuce aLettuce = Garden.getInstance().makeLettuce();

		System.out.println(aLettuce.getClass().getName());

		Tomato aTomato = Garden.getInstance().makeTomato();

		System.out.println(aTomato.getClass().getName());
	}
}
