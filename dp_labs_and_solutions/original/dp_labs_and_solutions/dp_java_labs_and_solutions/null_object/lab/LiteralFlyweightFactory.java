// LiteralFlyweightFactory.java

public class LiteralFlyweightFactory
{
	public Literal getFlyweightFor(int aValue)
	{
		if (!myMap.contains(aValue))
		{
			myMap.put(aValue, new Literal(aValue));
		}

		Literal result = myMap.get(aValue);

		return result;
	}

	private DpMap<Integer, Literal> myMap;

	private LiteralFlyweightFactory()
	{
		myMap = new DpMap<Integer, Literal>();
	}

	public static LiteralFlyweightFactory getInstance()
	{
		if (theInstance == null)
		{
			theInstance = new LiteralFlyweightFactory();
		}

		return theInstance;
	}

	private static LiteralFlyweightFactory theInstance = null;
}
