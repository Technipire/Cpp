// test_map.java

public class test_map
{
	/* this won't compile. I don't understand why not. :-(
	public static <Key extends Object, Value extends Object> void display_map(dp_map<Key, Value> a_map)
	{
		System.out.print("display_map(a_map): ");
		if (a_map.contains(1))
		{
			System.out.print("[1, " + a_map.get(1) + "] ");
		}
		if (a_map.contains(2))
		{
			System.out.print("[2, " + a_map.get(2) + "] ");
		}
		System.out.println();
	}
	*/

	public static void main(String[] args)
	{
		dp_map<Integer, Integer> a_map = new dp_map<Integer, Integer>();
		// display_map(a_map);
		System.out.print("display_map(a_map): ");
		if (a_map.contains(1))
		{
			System.out.print("[1, " + a_map.get(1) + "] ");
		}
		if (a_map.contains(2))
		{
			System.out.print("[2, " + a_map.get(2) + "] ");
		}
		System.out.println();

		a_map.put(1, -1);
		// display_map(a_map);
		System.out.print("display_map(a_map): ");
		if (a_map.contains(1))
		{
			System.out.print("[1, " + a_map.get(1) + "] ");
		}
		if (a_map.contains(2))
		{
			System.out.print("[2, " + a_map.get(2) + "] ");
		}
		System.out.println();

		a_map.put(2, -2);
		// display_map(a_map);
		System.out.print("display_map(a_map): ");
		if (a_map.contains(1))
		{
			System.out.print("[1, " + a_map.get(1) + "] ");
		}
		if (a_map.contains(2))
		{
			System.out.print("[2, " + a_map.get(2) + "] ");
		}
		System.out.println();
	}
}
