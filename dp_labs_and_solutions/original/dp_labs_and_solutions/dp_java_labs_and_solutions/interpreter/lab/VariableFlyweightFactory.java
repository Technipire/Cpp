// VariableFlyweightFactory.java

public class VariableFlyweightFactory
{
	public Variable getFlyweightFor(String aName)
	{
		if (!myMap.contains(aName))
		{
			myMap.put(aName, new Variable(aName));
		}

		Variable result = myMap.get(aName);

		return result;
	}

	private DpMap<String, Variable> myMap;

	private VariableFlyweightFactory()
	{
		myMap = new DpMap<String, Variable>();
	}

	public static VariableFlyweightFactory getInstance()
	{
		if (theInstance == null)
		{
			theInstance = new VariableFlyweightFactory();
		}

		return theInstance;
	}

	private static VariableFlyweightFactory theInstance = null;
}
