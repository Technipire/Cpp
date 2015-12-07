// WithMilk.java

public class WithMilk extends With
{
	public WithMilk(Beverage aSuccessor)
	{
		super(aSuccessor);
	}

	public void prepare()
	{
		super.prepare();
		System.out.println("Adding milk.");
	}
}
