// GetNumberOfStopsJourneyVisitor.java

public class GetNumberOfStopsJourneyVisitor extends JourneyVisitor
{
	public GetNumberOfStopsJourneyVisitor()
	{
		myNumberOfStops = 0;
	}

	public void visit(SingleJourney aSingleJourney)
	{
		++myNumberOfStops;
	}

	public int getNumberOfStops()
	{
		return myNumberOfStops;
	}

	private int myNumberOfStops;
}
