// dp_link.java

public class dp_link<T>
{
	public dp_link(T a_value, dp_link<T> a_next)
	{
		set_value(a_value);
		set_next(a_next);
	}

	public dp_link(T a_value)
	{
		my_value = a_value;
		my_next  = null;
	}

	public void set_value(T a_value)
	{
		my_value = a_value;
	}

	public T get_value()
	{
		return my_value;
	}

	public void set_next(dp_link<T> a_next)
	{
		my_next = a_next;
	}

	public dp_link<T> get_next()
	{
		return my_next;
	}

	private T          my_value;
	private dp_link<T> my_next;
}
