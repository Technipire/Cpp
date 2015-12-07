// Garden.java

public class Garden
{
	public Garden(int aLettuceType)
	{
		setLettuceType(aLettuceType);
	}

	public void setLettuceType(int aLettuceType)
	{
		if (aLettuceType != 1 && aLettuceType != 2)
		{
			throw new DpException("void setLettuceType(int aLettuceType) -- A Garden must have a valid Lettuce type.");
		}

		myLettuceType = aLettuceType;
	}

	public Lettuce makeLettuce()
	{
		if (myLettuceType == 1)
		{
			return new ConventionalLettuce(1, 2);
		}
		else if (myLettuceType == 2)
		{
			return new OrganicLettuce(1, 2);
		}
		else
		{
			throw new DpException("Lettuce makeLettuce() -- Oops, should never reach this point.");
		}
	}

	private int myLettuceType;
}
