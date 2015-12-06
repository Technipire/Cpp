// With.java

public abstract class With extends Beverage
{
	public With(Beverage aSuccessor)
	{
		setSuccessor(aSuccessor);
	}

	public void prepare()
	{
		getSuccessor().prepare();
	}

	private Beverage getSuccessor()
	{
		return mySuccessor;
	}

	private void setSuccessor(Beverage aSuccessor)
	{
		if (aSuccessor == null)
		{
			// throw an exception.
		}
		mySuccessor = aSuccessor;
	}

	private Beverage mySuccessor;
}
