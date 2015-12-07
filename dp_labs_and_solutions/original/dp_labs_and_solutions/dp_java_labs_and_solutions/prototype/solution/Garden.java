// Garden.java

public class Garden
{
	public Garden(Lettuce aLettucePrototype)
	{
		setLettucePrototype(aLettucePrototype);
	}

	public void setLettucePrototype(Lettuce aLettucePrototype)
	{
		if (aLettucePrototype == null)
		{
			throw new DpException("void setLettucePrototype(Lettuce aLettucePrototype) -- aLettucePrototype == null.");
		}

		myLettucePrototype = aLettucePrototype.clone();
	}

	public Lettuce makeLettuce()
	{
		return myLettucePrototype.clone();
	}

	private Lettuce myLettucePrototype;
}
