// CoffeeWithMilk.java

public abstract class CoffeeWithMilk extends Coffee
{
	public void prepare()
	{
		super.prepare();
		System.out.println("Adding milk.");
	}
}
