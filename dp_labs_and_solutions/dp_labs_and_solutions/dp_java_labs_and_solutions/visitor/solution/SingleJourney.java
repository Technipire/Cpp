// SingleJourney.java

public class SingleJourney extends Journey
{
	public SingleJourney(String aAddress)
	{
		if (aAddress == null || aAddress.equals(""))
		{
			throw new DpException("SingleJourney.SingleJourney(String aAddress) -- aAddress == null || aAddress.equals(\"\").");
		}
		myAddress = aAddress;
	}

	public void accept(JourneyVisitor aJourneyVisitor)
	{
		if (aJourneyVisitor == null)
		{
			throw new DpException("void SingleJourney.accept(JourneyVisitor aJourneyVisitor) -- aJourneyVisitor == null.");
		}

		aJourneyVisitor.visit(this);
	}

	public String getAddress()
	{
		return myAddress;
	}

	private String myAddress;
}
