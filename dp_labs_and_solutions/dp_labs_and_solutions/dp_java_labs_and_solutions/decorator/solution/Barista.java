// Barista.java

import java.util.Vector;

public class Barista
{
	public Beverage makeBeverage(Vector<String> aDescription)
	{
		if (aDescription.size() == 0)
		{
			// throw an exception.
		}

		if (!aDescription.elementAt(0).equals("coffee"))
		{
			// throw an exception.
		}

		Beverage aBeverage = new Coffee();

		for (int i = 1; i < aDescription.size(); ++i)
		{
			if (aDescription.elementAt(i).equals("milk"))
			{
				aBeverage = new WithMilk(aBeverage);
			}
			else if (aDescription.elementAt(i).equals("sugar"))
			{
				aBeverage = new WithSugar(aBeverage);
			}
			else
			{
				// throw an exception.
			}
		}

		return aBeverage;
	}
}
