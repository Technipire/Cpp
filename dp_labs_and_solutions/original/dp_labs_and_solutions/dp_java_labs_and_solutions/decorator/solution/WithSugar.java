// WithSugar.java

public class WithSugar extends With
{
	public WithSugar(Beverage aSuccessor)
	{
		super(aSuccessor);
	}

	public void prepare()
	{
		super.prepare();
		System.out.println("Adding sugar.");
	}
}
