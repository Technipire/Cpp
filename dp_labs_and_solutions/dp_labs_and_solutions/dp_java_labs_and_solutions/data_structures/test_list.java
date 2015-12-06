// test_list.java

public class test_list
{
	public static <T extends Object> void display_list(dp_list<T> a_list)
	{
		System.out.print("display_list(a_list): <front> ");
		dp_iterator<T> a_iterator = a_list.make_iterator();
		while (!a_iterator.is_done())
		{
			T a_value = a_iterator.get_current();
			System.out.print(a_value + " ");
			a_iterator.advance();
		}
		System.out.println("<back> (size = " + a_list.get_size() + ")");
	}

	public static void main(String[] args)
	{
		dp_list<Integer> a_list = new dp_list<Integer>();
		display_list(a_list);

		a_list.add(1);
		display_list(a_list);

		a_list.add(2);
		display_list(a_list);
	}
}
