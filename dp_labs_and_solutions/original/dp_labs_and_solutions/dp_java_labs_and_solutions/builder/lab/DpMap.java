// DpMap.java

public class DpMap<Key, Value>
{
	public DpMap()
	{
		myList = new DpList<DpPair<Key, Value> >();
	}

	void put(Key aKey, Value aValue)
	{
		myList.add(new DpPair<Key, Value>(aKey, aValue));
	}

	public boolean contains(Key aKey)
	{
		DpIterator<DpPair<Key, Value> > aIterator = myList.makeIterator();
		while (!aIterator.isDone())
		{
			DpPair<Key, Value> aPair = aIterator.getCurrent();
			if (aPair.getFirst() == aKey)
			{
				return true;
			}
			aIterator.advance();
		}
		return false;
	}

	public Value get(Key aKey)
	{
		DpIterator<DpPair<Key, Value> > aIterator = myList.makeIterator();
		while (!aIterator.isDone())
		{
			DpPair<Key, Value> aPair = aIterator.getCurrent();
			if (aPair.getFirst() == aKey)
			{
				return aPair.getSecond();
			}
			aIterator.advance();
		}
		throw new DpException("DpMap<T>.get() - aKey is not in this DpMap.");
	}

	private DpList<DpPair<Key, Value> > myList;
}
