// DpVector.java

import java.util.Vector;

public class DpVector<T> extends DpContainer<T>
{
	public DpVector()
	{
		myElements = new Vector<T>();
	}

	public void add(T aValue)
	{
		myElements.add(aValue);
	}

	public int getSize()
	{
		return myElements.size();
	}

	public void set(int aSubscript, T aValue)
	{
		validateSubscript(aSubscript);

		myElements.set(aSubscript, aValue);
	}

	public T get(int aSubscript)
	{
		validateSubscript(aSubscript);

		return myElements.get(aSubscript);
	}

	public DpIterator<T> makeIterator()
	{
		return new DpVectorIterator<T>(this);
	}

	public DpIterator<T> makeReverseIterator()
	{
		return new DpVectorReverseIterator<T>(this);
	}

	private void validateSubscript(int aSubscript)
	{
		if ((aSubscript < 0) || (aSubscript >= getSize()))
		{
			throw new DpException("Invalid aSubscript.");
		}
	}

	private Vector<T> myElements;

	private static class DpVectorIterator<T> extends DpIterator<T>
	{
		public DpVectorIterator(DpVector<T> aVector)
		{
			myVector = aVector;
			myIndex  = 0;
		}

		public boolean isDone()
		{
			return (myIndex >= myVector.getSize());
		}

		public T getCurrent()
		{
			return myVector.get(myIndex);
		}

		public void advance()
		{
			myIndex++;
		}

		private DpVector<T> myVector;
		int myIndex;
	}

	private static class DpVectorReverseIterator<T> extends DpIterator<T>
	{
		public DpVectorReverseIterator(DpVector<T> aVector)
		{
			myVector = aVector;
			myIndex = aVector.getSize() - 1;
		}

		public boolean isDone()
		{
			return (myIndex < 0);
		}

		public T getCurrent()
		{
			return myVector.get(myIndex);
		}

		public void advance()
		{
			myIndex--;
		}

		private DpVector<T> myVector;
		private int myIndex;
	}
}
