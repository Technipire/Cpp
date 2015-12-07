// test_vector.java

public class test_vector
{
	public static <T extends Object> void display_vector(dp_vector<T> a_vector)
	{
		System.out.print("display_vector(a_vector): <front> ");
		dp_iterator<T> a_iterator = a_vector.make_iterator();
		while (!a_iterator.is_done())
		{
			T a_value = a_iterator.get_current();
			System.out.print(a_value + " ");
			a_iterator.advance();
		}
		System.out.println("<back> (size = " + a_vector.get_size() + ")");
	}

	public static <T extends Object> void display_reverse_vector(dp_vector<T> a_vector)
	{
		System.out.print("display_vector(a_vector): <front> ");
		dp_iterator<T> a_iterator = a_vector.make_reverse_iterator();
		while (!a_iterator.is_done())
		{
			T a_value = a_iterator.get_current();
			System.out.print(a_value + " ");
			a_iterator.advance();
		}
		System.out.println("<back> (size = " + a_vector.get_size() + ")");
	}

	public static void main(String[] args)
	{
		dp_vector<Integer> a_vector = new dp_vector<Integer>();
		display_vector(a_vector);
		display_reverse_vector(a_vector);

		a_vector.add(1);
		display_vector(a_vector);
		display_reverse_vector(a_vector);

		a_vector.add(2);
		display_vector(a_vector);
		display_reverse_vector(a_vector);
	}
}
