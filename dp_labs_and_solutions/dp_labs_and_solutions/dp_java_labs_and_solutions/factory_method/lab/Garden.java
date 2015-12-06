// Garden.java

public class Garden
{
	public Garden(int aTomatoType)
	{
		setTomatoType(aTomatoType);
	}

	public void setTomatoType(int aTomatoType)
	{
		if (aTomatoType != 1 && aTomatoType != 2)
		{
			throw new DpException("void setTomatoType(int aTomatoType) -- A Garden must have a valid Tomato type.");
		}

		myTomatoType = aTomatoType;
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

	private int myTomatoType;
}
