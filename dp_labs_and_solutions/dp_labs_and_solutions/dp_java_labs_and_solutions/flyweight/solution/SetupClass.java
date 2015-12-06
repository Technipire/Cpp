// SetupClass.java

public class SetupClass
{
	public static Journey setup()
	{
		SingleJourneyFlyweightFactory aSingleJourneyFlyweightFactory =
			new SingleJourneyFlyweightFactory();

		MultipleJourney todaysItinerary = new MultipleJourney("Today's itinerary");
	
			MultipleJourney work = new MultipleJourney("Work");
			work.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor("Apple Computer"));
	
		todaysItinerary.addJourney(work);
	
			MultipleJourney foodShopping = new MultipleJourney("Food shopping");
			foodShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor("Whole Foods"));
			foodShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor("Stop & Shop"));
	
		todaysItinerary.addJourney(foodShopping);
	
			MultipleJourney petShopping = new MultipleJourney("Pet shopping");
			petShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor("Petco"));
			petShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor("Stop & Shop"));
	
		todaysItinerary.addJourney(petShopping);
		
		return todaysItinerary;
	}
}
