// DpStack.java

public class DpStack<T>
{
	public DpStack()
	{
		myLink = null;
	}

	public boolean isEmpty()
	{
		return (myLink == null);
	}

	public void push(T aValue)
	{
		myLink = new DpLink<T>(aValue, myLink);
	}

	public void pop()
	{
		if (isEmpty())
		{
			throw new DpException("DpStack<T>.pop() - The stack is empty.");
		}
		myLink = myLink.getNext();
	}

	public T top()
	{
		if (isEmpty())
		{
			throw new DpException("DpStack<T>.top() - The stack is empty.");
		}
		return myLink.getValue();
	}

	private DpLink<T> myLink;
}
