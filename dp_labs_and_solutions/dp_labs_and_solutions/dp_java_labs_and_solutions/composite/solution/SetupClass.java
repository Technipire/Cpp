// SetupClass.java

public class SetupClass
{
	public static Journey setup()
	{
		MultipleJourney todaysItinerary = new MultipleJourney("Today's itinerary");
	
			MultipleJourney work = new MultipleJourney("Work");
			work.addJourney(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor("Apple Computer"));
	
		todaysItinerary.addJourney(work);
	
			MultipleJourney foodShopping = new MultipleJourney("Food shopping");
			foodShopping.addJourney(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor("Whole Foods"));
			foodShopping.addJourney(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor("Stop & Shop"));
	
		todaysItinerary.addJourney(foodShopping);
	
			MultipleJourney petShopping = new MultipleJourney("Pet shopping");
			petShopping.addJourney(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor("Petco"));
			petShopping.addJourney(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor("Stop & Shop"));
	
		todaysItinerary.addJourney(petShopping);
		
		return todaysItinerary;
	}
}
