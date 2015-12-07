// Lettuce.java

public abstract class Lettuce
{
	public Lettuce(double aPrice)
	{
		myPrice = aPrice;
	}

	public Lettuce(Lettuce aLettuce)
	{
		myPrice = aLettuce.myPrice;
	}

	private double myPrice;
}
