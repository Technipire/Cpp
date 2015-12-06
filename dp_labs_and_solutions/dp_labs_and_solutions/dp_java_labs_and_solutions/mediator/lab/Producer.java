// Producer.java

public class Producer
{
	public Producer(String aName)
	{
		myName = aName;
	}

	public int getBid()
	{
		int result = (int) (Math.random() * 100) + 1;

		System.out.println(myName + " bids " + result + ".");

		return result;
	}

	public void produce()
	{
		System.out.println(myName + " produces.");
	}

	private String myName;
}
