// CustomerRequestsDiscountEvent.java

public class CustomerRequestsDiscountEvent
{
	public CustomerRequestsDiscountEvent(int aPercent)
	{
		setPercent(aPercent);
	}

	private void setPercent(int aPercent)
	{
		myPercent = aPercent;
	}

	public int getPercent()
	{
		return myPercent;
	}

	private int myPercent;
}
