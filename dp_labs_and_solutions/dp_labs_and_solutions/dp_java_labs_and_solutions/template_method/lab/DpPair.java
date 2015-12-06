// DpPair.java

public class DpPair<First, Second>
{
	public DpPair(First aFirst, Second aSecond)
	{
		setFirst(aFirst);
		setSecond(aSecond);
	}

	public void setFirst(First aFirst)
	{
		myFirst = aFirst;
	}

	public First getFirst()
	{
		return myFirst;
	}

	public void setSecond(Second aSecond)
	{
		mySecond = aSecond;
	}

	public Second getSecond()
	{
		return mySecond;
	}

	private First  myFirst;
	private Second mySecond;
}
