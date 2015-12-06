// Barista.java

import java.util.Vector;

public class Barista
{
	public Coffee makeCoffee(Vector<String> aDescription)
	{
		switch (aDescription.size())
		{
			case 1:
				if (aDescription.elementAt(0).equals("coffee"))
				{
					return new CoffeeWithoutMilkWithoutSugar();
				}
				else
				{
					// throw an exception.
				}
				break;
			case 2:
				if (aDescription.elementAt(0).equals("coffee"))
				{
					if (aDescription.elementAt(1).equals("milk"))
					{
						return new CoffeeWithMilkWithoutSugar();
					}
					else if (aDescription.elementAt(1).equals("sugar"))
					{
						return new CoffeeWithoutMilkWithSugar();
					}
					else
					{
						// throw an exception.
					}
				}
				else
				{
					// throw an exception.
				}
				break;
			case 3:
				if (aDescription.elementAt(0).equals("coffee"))
				{
					if (aDescription.elementAt(1).equals("milk"))
					{
						if (aDescription.elementAt(2).equals("sugar"))
						{
							return new CoffeeWithMilkWithSugar();
						}
						else
						{
							// throw an exception.
						}
					}
					else if (aDescription.elementAt(1).equals("sugar"))
					{
						if (aDescription.elementAt(2).equals("milk"))
						{
							return new CoffeeWithMilkWithSugar();
						}
						else
						{
							// throw an exception.
						}
					}
					else
					{
						// throw an exception.
					}
				}
				else
				{
					// throw an exception.
				}
				break;
			default:
				// throw an exception.
				break;
		}
		return null; // when we add exceptions, we can remove this.
	}
}
