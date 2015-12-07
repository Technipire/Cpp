// SetupClass.java

public class SetupClass
{
	public static Journey setup()
	{
		JourneyParser aJourneyParser = new JourneyParser();

		JourneyTreeBuilder aJourneyTreeBuilder = new JourneyTreeBuilder();

		aJourneyParser.parse(aJourneyTreeBuilder);

		Journey aJourney = aJourneyTreeBuilder.getTree();

		return aJourney;
	}
}
