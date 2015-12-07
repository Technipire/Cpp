// DpLink.java

public class DpLink<T>
{
	public DpLink(T aValue, DpLink<T> aNext)
	{
		setValue(aValue);
		setNext(aNext);
	}

	public DpLink(T aValue)
	{
		myValue = aValue;
		myNext  = null;
	}

	public void setValue(T aValue)
	{
		myValue = aValue;
	}

	public T getValue()
	{
		return myValue;
	}

	public void setNext(DpLink<T> aNext)
	{
		myNext = aNext;
	}

	public DpLink<T> getNext()
	{
		return myNext;
	}

	private T          myValue;
	private DpLink<T> myNext;
}
