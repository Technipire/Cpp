// SetupClass.java

public class SetupClass
{
	public static Journey setup()
	{
		MultipleJourney todaysItinerary = new MultipleJourney("Today's itinerary");
	
			MultipleJourney work = new MultipleJourney("Work");
			work.addJourney(new SingleJourney("Apple Computer"));
	
		todaysItinerary.addJourney(work);
	
			MultipleJourney foodShopping = new MultipleJourney("Food shopping");
			foodShopping.addJourney(new SingleJourney("Whole Foods"));
			foodShopping.addJourney(new SingleJourney("Stop & Shop"));
	
		todaysItinerary.addJourney(foodShopping);
	
			MultipleJourney petShopping = new MultipleJourney("Pet shopping");
			petShopping.addJourney(new SingleJourney("Petco"));
			petShopping.addJourney(new SingleJourney("Stop & Shop"));
	
		todaysItinerary.addJourney(petShopping);
		
		return todaysItinerary;
	}
}
