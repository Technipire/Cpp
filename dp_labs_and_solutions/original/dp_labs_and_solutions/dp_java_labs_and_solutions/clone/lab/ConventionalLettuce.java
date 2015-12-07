// ConventionalLettuce.java

public class ConventionalLettuce extends Lettuce
{
	public ConventionalLettuce(double aPrice, int aNumberOfPesticides)
	{
		super(aPrice);
		myNumberOfPesticides = aNumberOfPesticides;
	}

	public ConventionalLettuce(double aPrice)
	{
		super(aPrice);
		myNumberOfPesticides = 0;
	}

	public ConventionalLettuce(ConventionalLettuce aConventionalLettuce)
	{
		super(aConventionalLettuce);
		myNumberOfPesticides = aConventionalLettuce.myNumberOfPesticides;
	}

	private int myNumberOfPesticides;
}
