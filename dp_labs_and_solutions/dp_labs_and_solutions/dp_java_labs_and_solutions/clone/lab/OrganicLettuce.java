// OrganicLettuce.java

public class OrganicLettuce extends Lettuce
{
	public OrganicLettuce(double aPrice, int aNumberOfInsects)
	{
		super(aPrice);
		myNumberOfInsects = aNumberOfInsects;
	}

	public OrganicLettuce(double aPrice)
	{
		super(aPrice);
		myNumberOfInsects = 0;
	}

	public OrganicLettuce(OrganicLettuce aOrganicLettuce)
	{
		super(aOrganicLettuce);
		myNumberOfInsects = aOrganicLettuce.myNumberOfInsects;
	}

	private int myNumberOfInsects;
}
