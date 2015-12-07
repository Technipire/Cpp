// Packer.java

public class Packer
{
	public Packer(PackingStrategy aStrategy)
	{
		setStrategy(aStrategy);
	}

	public void pack()
	{
		getStrategy().pack(this);
	}

	public void setStrategy(PackingStrategy aStrategy)
	{
		if (aStrategy == null)
		{
			throw new DpException("Missing strategy.");
		}
		myStrategy = aStrategy;
	}

	public PackingStrategy getStrategy()
	{
		return myStrategy;
	}

	private PackingStrategy myStrategy;
}
