// SingleJourneyFlyweightFactory.java

public class SingleJourneyFlyweightFactory
{
	// Singleton:
	
	private SingleJourneyFlyweightFactory()
	{
		myMap = new DpMap<String, SingleJourney>();
	}
	
	public static SingleJourneyFlyweightFactory getInstance()
	{
		if (theInstance == null)
		{
			theInstance = new SingleJourneyFlyweightFactory();
		}
		
		return theInstance;
	}
	
	private static SingleJourneyFlyweightFactory theInstance = null;
	
	// non-Singleton:
	
	public SingleJourney getFlyweightFor(String aAddress)
	{
		if (!myMap.contains(aAddress))
		{
			myMap.put(aAddress, new SingleJourney(aAddress));
		}

		SingleJourney result = myMap.get(aAddress);

		return result;
	}

	private DpMap<String, SingleJourney> myMap;
}
