// dp_container.java

public abstract class dp_container<T>
{
	public abstract dp_iterator<T> make_iterator();

	public int get_size()
	{
		int result = 0;
		dp_iterator<T> a_iterator = make_iterator();
		while (!a_iterator.is_done())
		{
			result++;
			a_iterator.advance();
		}
		return result;
	}
}
