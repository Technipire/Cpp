// UseClass.java

public class UseClass
{
	public static void use(DpIterator<Integer> aIterator)
	{
		while (!aIterator.isDone())
		{
			System.out.println(aIterator.getCurrent());
	
			aIterator.advance();
		}
	}
}
