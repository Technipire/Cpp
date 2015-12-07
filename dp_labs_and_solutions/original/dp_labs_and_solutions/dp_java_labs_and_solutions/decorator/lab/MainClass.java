// MainClass.java

import java.util.Vector;

public class MainClass
{
	private static void mainHelper(String aDescription, Coffee aCoffee)
	{
		System.out.println(aDescription + ":");

		aCoffee.prepare();

		System.out.println();
	}

	public static void main(String[] args)
	{
		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");
			aVector.add("milk");
			aVector.add("sugar");

			Barista aBarista = new Barista();

			Coffee aCoffee = aBarista.makeCoffee(aVector);

			mainHelper("coffee with milk with sugar", aCoffee);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");
			aVector.add("milk");

			Barista aBarista = new Barista();

			Coffee aCoffee = aBarista.makeCoffee(aVector);

			mainHelper("coffee with milk", aCoffee);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");
			aVector.add("sugar");

			Barista aBarista = new Barista();

			Coffee aCoffee = aBarista.makeCoffee(aVector);

			mainHelper("coffee with sugar", aCoffee);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");

			Barista aBarista = new Barista();

			Coffee aCoffee = aBarista.makeCoffee(aVector);

			mainHelper("coffee", aCoffee);
		}
	}
}
