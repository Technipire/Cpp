// ConventionalTomato.java

public class ConventionalTomato extends Tomato
{
	public ConventionalTomato(double aPrice, int aNumberOfPesticides)
	{
		super(aPrice);
		myNumberOfPesticides = aNumberOfPesticides;
	}

	public ConventionalTomato(double aPrice)
	{
		super(aPrice);
		myNumberOfPesticides = 0;
	}

	private int myNumberOfPesticides;
}
