// UseClass.java

public class UseClass
{
	public static void use(Garden aGarden)
	{
		Tomato aTomato = aGarden.makeTomato();

		System.out.println(aTomato.getClass().getName());
	}
}
