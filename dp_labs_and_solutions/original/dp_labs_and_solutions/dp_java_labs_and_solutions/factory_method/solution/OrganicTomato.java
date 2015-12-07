// OrganicTomato.java

public class OrganicTomato extends Tomato
{
	public OrganicTomato(double aPrice, int aNumberOfInsects)
	{
		super(aPrice);
		myNumberOfInsects = aNumberOfInsects;
	}

	public OrganicTomato(double aPrice)
	{
		super(aPrice);
		myNumberOfInsects = 0;
	}

	private int myNumberOfInsects;
}
