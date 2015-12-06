// SingleJourneyFlyweightFactory.java

public class SingleJourneyFlyweightFactory
{
	public SingleJourneyFlyweightFactory()
	{
		myMap = new DpMap<String, SingleJourney>();
	}

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
