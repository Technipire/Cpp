// dp_stack.java

public class dp_stack<T>
{
	public dp_stack()
	{
		my_link = null;
	}

	public boolean is_empty()
	{
		return (my_link == null);
	}

	public void push(T a_value)
	{
		my_link = new dp_link<T>(a_value, my_link);
	}

	public void pop()
	{
		if (is_empty())
		{
			throw new dp_exception("dp_stack<T>.pop() - The stack is empty.");
		}
		my_link = my_link.get_next();
	}

	public T top()
	{
		if (is_empty())
		{
			throw new dp_exception("dp_stack<T>.top() - The stack is empty.");
		}
		return my_link.get_value();
	}

	private dp_link<T> my_link;
}
