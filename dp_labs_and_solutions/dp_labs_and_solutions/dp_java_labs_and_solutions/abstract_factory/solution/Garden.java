// Garden.java

public abstract class Garden
{
	protected Garden(Lettuce aLettucePrototype)
	{
		setLettucePrototype(aLettucePrototype);
	}

	protected void setLettucePrototype(Lettuce aLettucePrototype)
	{
		if (aLettucePrototype == null)
		{
			throw new DpException("void setLettucePrototype(Lettuce aLettucePrototype) -- aLettucePrototype == null.");
		}

		myLettucePrototype = aLettucePrototype.clone();
	}

	public final Lettuce makeLettuce()
	{
		return myLettucePrototype.clone();
	}

	public abstract Tomato makeTomato();

	private Lettuce myLettucePrototype;
}
