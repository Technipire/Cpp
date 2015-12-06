// DpContainer.java

public abstract class DpContainer<T>
{
	public abstract DpIterator<T> makeIterator();

	public int getSize()
	{
		int result = 0;
		DpIterator<T> aIterator = makeIterator();
		while (!aIterator.isDone())
		{
			result++;
			aIterator.advance();
		}
		return result;
	}
}
