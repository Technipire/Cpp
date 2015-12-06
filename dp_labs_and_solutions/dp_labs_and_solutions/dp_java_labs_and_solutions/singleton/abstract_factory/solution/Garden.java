// Garden.java

public abstract class Garden
{
// Singleton:

	protected Garden(Lettuce aLettucePrototype)
	{
		setLettucePrototype(aLettucePrototype);
	}

	public static Garden getInstance()
	{
		if (theInstance == null)
		{
			if (true)
			{
				theInstance = new ConventionalGarden(new ConventionalLettuce(1, 2));
			}
			else
			{
				theInstance = new OrganicGarden(new OrganicLettuce(1, 2));
			}
		}

		return theInstance;
	}

	private static Garden theInstance = null;

// non-Singleton:

	protected void setLettucePrototype(Lettuce aLettucePrototype)
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

	public abstract Tomato makeTomato();

	private Lettuce myLettucePrototype;

	private static class ConventionalGarden extends Garden
	{
		public ConventionalGarden(ConventionalLettuce aLettucePrototype)
		{
			super(aLettucePrototype);
		}

		public void setLettucePrototype(ConventionalLettuce aLettucePrototype)
		{
			super.setLettucePrototype(aLettucePrototype);
		}

		public Tomato makeTomato()
		{
			return new ConventionalTomato(1, 2);
		}
	}

	private static class OrganicGarden extends Garden
	{
		public OrganicGarden(OrganicLettuce aLettucePrototype)
		{
			super(aLettucePrototype);
		}

		public void setLettucePrototype(OrganicLettuce aLettucePrototype)
		{
			super.setLettucePrototype(aLettucePrototype);
		}

		public Tomato makeTomato()
		{
			return new OrganicTomato(1, 2);
		}
	}
}
