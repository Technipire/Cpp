// dp_list.java

public class dp_list<T> extends dp_container<T>
{
	public dp_list()
	{
		my_first = null;
		my_last  = null;
	}

	public void add(T a_value)
	{
		dp_link<T> a_link = new dp_link<T>(a_value);
		if (my_first == null)
		{
			my_first = a_link;
		}
		else
		{
			my_last.set_next(a_link);
		}
		my_last = a_link;
	}

	public dp_iterator<T> make_iterator()
	{
		return new dp_list_iterator<T>(this);
	}

	private dp_link<T> my_first;
	private dp_link<T> my_last;

	private static class dp_list_iterator<T> extends dp_iterator<T>
	{
		public dp_list_iterator(dp_list<T> a_list)
		{
			my_current_link = a_list.my_first;
		}

		public boolean is_done()
		{
			return (my_current_link == null);
		}

		public T get_current()
		{
			return my_current_link.get_value();
		}

		public void advance()
		{
			my_current_link = my_current_link.get_next();
		}

		private dp_link<T> my_current_link;
	}
}
