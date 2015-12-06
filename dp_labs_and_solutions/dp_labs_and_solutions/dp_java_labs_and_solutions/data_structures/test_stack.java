// test_stack.java

public class test_stack
{
	public static <T extends Object> void display_stack(dp_stack<T> a_stack)
	{
		System.out.print("display_stack(a_stack): <top> ");
		while (!a_stack.is_empty())
		{
			T a_value = a_stack.top();
			System.out.print(a_value + " ");
			a_stack.pop();
		}
		System.out.println("<bottom>");
	}

	public static void main(String[] args)
	{
		dp_stack<Integer> a_stack = new dp_stack<Integer>();
		display_stack(a_stack);

		a_stack.push(1);
		display_stack(a_stack);

		a_stack.push(1);
		a_stack.push(2);
		display_stack(a_stack);
	}
}
