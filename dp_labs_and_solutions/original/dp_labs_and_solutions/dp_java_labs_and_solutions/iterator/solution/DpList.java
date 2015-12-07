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

	public DpIterator<T> makeReverseIterator()
	{
		return new DpListReverseIterator<T>(this);
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

	private static class DpListReverseIterator<T> extends DpIterator<T>
	{
		public DpListReverseIterator(DpList<T> aList)
		{
			myOriginalLink = aList.myFirst;
			myCurrentLink  = aList.myLast;
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
			if (myCurrentLink == myOriginalLink)
			{
				myCurrentLink = null;
			}
			else
			{
				DpLink<T> aLink = myOriginalLink;
				while (aLink.getNext() != myCurrentLink)
				{
					aLink = aLink.getNext();
				}
				myCurrentLink = aLink;
			}
		}

		private DpLink<T> myOriginalLink;
		private DpLink<T> myCurrentLink;
	}
}
