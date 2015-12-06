// JourneyTreeBuilder.java

public class JourneyTreeBuilder extends JourneyBuilder
{
	public JourneyTreeBuilder()
	{
		myStack = new DpStack<Journey>();
	}

	public void buildMultipleJourney(String aName, int aNumberOfJourneys)
	{
		MultipleJourney aMultipleJourney = new MultipleJourney(aName);

		DpStack<Journey> aStack = new DpStack<Journey>();

		for (int i = 1; i <= aNumberOfJourneys; ++i)
		{
			Journey aJourney = myStack.top(); myStack.pop();

			aStack.push(aJourney);
		}

		for (int i = 1; i <= aNumberOfJourneys; ++i)
		{
			Journey aJourney = aStack.top(); aStack.pop();

			aMultipleJourney.addJourney(aJourney);
		}

		myStack.push(aMultipleJourney);
	}

	public void buildSingleJourney(String aAddress)
	{
		myStack.push(SingleJourneyFlyweightFactory.getInstance().getFlyweightFor(aAddress));
	}

	public Journey getTree()
	{
		if (myStack.isEmpty())
		{
			throw new DpException("Journey JourneyTreeBuilder.getTree() -- myStack.isEmpty().");
		}

		Journey result = myStack.top();

		return result;
	}

	private DpStack<Journey> myStack;
}
