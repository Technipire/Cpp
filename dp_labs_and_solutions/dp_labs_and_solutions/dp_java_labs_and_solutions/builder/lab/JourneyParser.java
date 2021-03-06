// JourneyParser.java

public class JourneyParser
{
	public void parse(JourneyBuilder aJourneyBuilder)
	{
		aJourneyBuilder.buildSingleJourney("Apple Computer");
		aJourneyBuilder.buildMultipleJourney("Work", 1);
		aJourneyBuilder.buildSingleJourney("Whole Foods");
		aJourneyBuilder.buildSingleJourney("Stop & Shop");
		aJourneyBuilder.buildMultipleJourney("Food shopping", 2);
		aJourneyBuilder.buildSingleJourney("Petco");
		aJourneyBuilder.buildSingleJourney("Stop & Shop");
		aJourneyBuilder.buildMultipleJourney("Pet shopping", 2);
		aJourneyBuilder.buildMultipleJourney("Today's itinerary", 3);
	}
}
