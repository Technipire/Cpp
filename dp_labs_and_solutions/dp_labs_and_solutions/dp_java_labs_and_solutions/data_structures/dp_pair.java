// dp_pair.java

public class dp_pair<First, Second>
{
	public dp_pair(First a_first, Second a_second)
	{
		set_first(a_first);
		set_second(a_second);
	}

	public void set_first(First a_first)
	{
		my_first = a_first;
	}

	public First get_first()
	{
		return my_first;
	}

	public void set_second(Second a_second)
	{
		my_second = a_second;
	}

	public Second get_second()
	{
		return my_second;
	}

	private First  my_first;
	private Second my_second;
}
