// MainClass.java

import java.util.Vector;

public class MainClass
{
	private static void mainHelper(String aDescription, Beverage aBeverage)
	{
		System.out.println(aDescription + ":");

		aBeverage.prepare();

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

			Beverage aBeverage = aBarista.makeBeverage(aVector);

			mainHelper("coffee with milk with sugar", aBeverage);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");
			aVector.add("milk");

			Barista aBarista = new Barista();

			Beverage aBeverage = aBarista.makeBeverage(aVector);

			mainHelper("coffee with milk", aBeverage);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");
			aVector.add("sugar");

			Barista aBarista = new Barista();

			Beverage aBeverage = aBarista.makeBeverage(aVector);

			mainHelper("coffee with sugar", aBeverage);
		}

		{
			Vector<String> aVector = new Vector<String>();
			aVector.add("coffee");

			Barista aBarista = new Barista();

			Beverage aBeverage = aBarista.makeBeverage(aVector);

			mainHelper("coffee", aBeverage);
		}
	}
}
