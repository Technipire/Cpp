// dp_vector.java

import java.util.Vector;

public class dp_vector<T> extends dp_container<T>
{
	public dp_vector()
	{
		my_elements = new Vector<T>();
	}

	public void add(T a_value)
	{
		my_elements.add(a_value);
	}

	public int get_size()
	{
		return my_elements.size();
	}

	public void set(int a_subscript, T a_value)
	{
		validate_subscript(a_subscript);

		my_elements.set(a_subscript, a_value);
	}

	public T get(int a_subscript)
	{
		validate_subscript(a_subscript);

		return my_elements.get(a_subscript);
	}

	public dp_iterator<T> make_iterator()
	{
		return new dp_vector_iterator<T>(this);
	}

	public dp_iterator<T> make_reverse_iterator()
	{
		return new dp_vector_reverse_iterator<T>(this);
	}

	private void validate_subscript(int a_subscript)
	{
		if ((a_subscript < 0) || (a_subscript >= get_size()))
		{
			throw new dp_exception("Invalid a_subscript.");
		}
	}

	private Vector<T> my_elements;

	private static class dp_vector_iterator<T> extends dp_iterator<T>
	{
		public dp_vector_iterator(dp_vector<T> a_vector)
		{
			my_vector = a_vector;
			my_index  = 0;
		}

		public boolean is_done()
		{
			return (my_index >= my_vector.get_size());
		}

		public T get_current()
		{
			return my_vector.get(my_index);
		}

		public void advance()
		{
			my_index++;
		}

		private dp_vector<T> my_vector;
		int my_index;
	}

	private static class dp_vector_reverse_iterator<T> extends dp_iterator<T>
	{
		public dp_vector_reverse_iterator(dp_vector<T> a_vector)
		{
			my_vector = a_vector;
			my_index = a_vector.get_size() - 1;
		}

		public boolean is_done()
		{
			return (my_index < 0);
		}

		public T get_current()
		{
			return my_vector.get(my_index);
		}

		public void advance()
		{
			my_index--;
		}

		private dp_vector<T> my_vector;
		private int my_index;
	}
}
