// DpList.java

public class DpList<T> extends DpContainer<T>
{
	public DpList()
	{
		myFirst = null;
		myLast  = null;
	}

	public void add(T aValue)
	{
		DpLink<T> aLink = new DpLink<T>(aValue);
		if (myFirst == null)
		{
			myFirst = aLink;
		}
		else
		{
			myLast.setNext(aLink);
		}
		myLast = aLink;
	}

	public DpIterator<T> makeIterator()
	{
		return new DpListIterator<T>(this);
	}

	private DpLink<T> myFirst;
	private DpLink<T> myLast;

	private static class DpListIterator<T> extends DpIterator<T>
	{
		public DpListIterator(DpList<T> aList)
		{
			myCurrentLink = aList.myFirst;
		}

		public boolean isDone()
		{
			return (myCurrentLink == null);
		}

		public T getCurrent()
		{
			return myCurrentLink.getValue();
		}

		public void advance()
		{
			myCurrentLink = myCurrentLink.getNext();
		}

		private DpLink<T> myCurrentLink;
	}
}
