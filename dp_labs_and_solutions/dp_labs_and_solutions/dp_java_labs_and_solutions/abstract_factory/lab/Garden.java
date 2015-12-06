// Garden.java

public class Garden
{
	public Garden(int aLettuceType, int aTomatoType)
	{
		setLettuceType(aLettuceType);
		setTomatoType(aTomatoType);
	}

	public void setLettuceType(int aLettuceType)
	{
		if (aLettuceType != 1 && aLettuceType != 2)
		{
			throw new DpException("void setLettuceType(int aLettuceType) -- A Garden must have a valid Lettuce type.");
		}

		myLettuceType = aLettuceType;
	}

	public void setTomatoType(int aTomatoType)
	{
		if (aTomatoType != 1 && aTomatoType != 2)
		{
			throw new DpException("void setTomatoType(int aTomatoType) -- A Garden must have a valid Tomato type.");
		}

		myTomatoType = aTomatoType;
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

	public Tomato makeTomato()
	{
		if (myTomatoType == 1)
		{
			return new ConventionalTomato(1, 2);
		}
		else if (myTomatoType == 2)
		{
			return new OrganicTomato(1, 2);
		}
		else
		{
			throw new DpException("Tomato makeTomato() -- Oops, should never reach this point.");
		}
	}

	private int myLettuceType;
	private int myTomatoType;
}
