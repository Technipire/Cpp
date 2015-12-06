// MultipleJourney.java

public class MultipleJourney extends Journey
{
	public MultipleJourney(String aName)
	{
		if (aName == null || aName.equals(""))
		{
			throw new DpException("MultipleJourney.MultipleJourney(String aName) -- aName == null || aName.equals(\"\").");
		}
		myName     = aName;
		myJourneys = new DpVector<Journey>();
	}

	public void accept(JourneyVisitor aJourneyVisitor)
	{
		if (aJourneyVisitor == null)
		{
			throw new DpException("void MultipleJourney.accept(JourneyVisitor aJourneyVisitor) -- aJourneyVisitor == null.");
		}

		aJourneyVisitor.visit(this);
	}

	public String getName()
	{
		return myName;
	}

	public void addJourney(Journey aJourney)
	{
		if (aJourney == null)
		{
			throw new DpException("void MultipleJourney.add(Journey aJourney) -- aJourney == null.");
		}
		myJourneys.add(aJourney);
	}

	public DpIterator<Journey> getJourneys()
	{
		return myJourneys.makeIterator();
	}

	private String            myName;
	private DpVector<Journey> myJourneys;
}
