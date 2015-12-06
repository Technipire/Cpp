// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		DpList<Integer> aList = new DpList<Integer>();
	
		System.out.println("List of length 0:");
		UseClass.use(aList.makeReverseIterator());
		System.out.println();
	
		aList.add(1);
	
		System.out.println("List of length 1:");
		UseClass.use(aList.makeReverseIterator());
		System.out.println();
	
		aList.add(2);
	
		System.out.println("List of length 2:");
		UseClass.use(aList.makeReverseIterator());
		System.out.println();
	
		aList.add(3);
	
		System.out.println("List of length 3:");
		UseClass.use(aList.makeReverseIterator());
		System.out.println();
	}
}
