// Driver.java

public class Driver
{
	public Driver(String aName)
	{
		setName(aName);
		setX(0);
		setY(0);
		setHeading(NORTH);
	}

	public Driver(Driver aDriver)
	{
		copy(aDriver);
	}

	private void copy(Driver aDriver)
	{
		setName(aDriver.getName());
		setX(aDriver.getX());
		setY(aDriver.getY());
		setHeading(aDriver.getHeading());
	}

	public void turnLeft()
	{
		switch(getHeading())
		{
			case NORTH: setHeading(WEST);  break;
			case EAST:  setHeading(NORTH); break;
			case SOUTH: setHeading(EAST);  break;
			case WEST:  setHeading(SOUTH); break;
		}
	}

	public void goStraight(int howFar)
	{
		switch(getHeading())
		{
			case NORTH: setY(getY() + howFar);  break;
			case EAST:  setX(getX() + howFar); break;
			case SOUTH: setY(getY() - howFar);  break;
			case WEST:  setX(getX() - howFar); break;
		}
	}

	public void turnRight()
	{
		switch(getHeading())
		{
			case NORTH: setHeading(EAST);  break;
			case EAST:  setHeading(SOUTH); break;
			case SOUTH: setHeading(WEST);  break;
			case WEST:  setHeading(NORTH); break;
		}
	}

	public void undoTurnLeft()
	{
		switch(getHeading())
		{
			case WEST:  setHeading(NORTH); break;
			case NORTH: setHeading(EAST);  break;
			case EAST:  setHeading(SOUTH); break;
			case SOUTH: setHeading(WEST);  break;
		}
	}

	public void undoGoStraight(int howFar)
	{
		switch(getHeading())
		{
			case NORTH: setY(getY() - howFar);  break;
			case EAST:  setX(getX() - howFar); break;
			case SOUTH: setY(getY() + howFar);  break;
			case WEST:  setX(getX() + howFar); break;
		}
	}

	public void undoTurnRight()
	{
		switch(getHeading())
		{
			case EAST:  setHeading(NORTH); break;
			case SOUTH: setHeading(EAST);  break;
			case WEST:  setHeading(SOUTH); break;
			case NORTH: setHeading(WEST);  break;
		}
	}

	public void reportPosition()
	{
		System.out.println(
			getName()
		+	" is located at ("
		+	getX()
		+	", "
		+	getY()
		+	") facing "
		+	getHeadingAsString()
		+	".");
	}

	public Driver clone()
	{
		return new Driver(this);
	}

	private void setName(String aName)
	{
		myName = aName;
	}

	private String getName()
	{
		return myName;
	}

	private void setX(int aX)
	{
		myX = aX;
	}

	private int getX()
	{
		return myX;
	}

	private void setY(int aY)
	{
		myY = aY;
	}

	private int getY()
	{
		return myY;
	}

	private void setHeading(int aHeading)
	{
		myHeading = aHeading;
	}

	private int getHeading()
	{
		return myHeading;
	}

	private String getHeadingAsString()
	{
		String result = null;

		switch(getHeading())
		{
			case NORTH: result = "NORTH"; break;
			case EAST:  result = "EAST" ; break;
			case SOUTH: result = "SOUTH"; break;
			case WEST:  result = "WEST" ; break;
		}

		return result;
	}

	private static final int NORTH = 1;
	private static final int EAST  = 2;
	private static final int SOUTH = 3;
	private static final int WEST  = 4;

	private String myName;
	private int myX;
	private int myY;
	private int myHeading;

	public MementoInterface backup()
	{
		return new MementoImplementation(this);
	}

	public void restore(MementoInterface aMementoInterface)
	{
		if (aMementoInterface == null)
		{
			throw new DpException("void Driver.restore(MementoInterface aMementoInterface) -- aMementoInterface == null.");
		}

		if (!(aMementoInterface instanceof MementoImplementation))
		{
			throw new DpException("void Driver.restore(MementoInterface aMementoInterface) -- that's the wrong kind of memento.");
		}

		MementoImplementation aMementoImplementation =
			(MementoImplementation) aMementoInterface;

		if (aMementoImplementation.myOriginator != this)
		{
			throw new DpException("void Driver.restore(MementoInterface aMementoInterface) -- that memento didn't come from me.");
		}

		copy(aMementoImplementation.myClone);
	}

	public static interface MementoInterface
	{
	}

	private static class MementoImplementation implements MementoInterface
	{
		public MementoImplementation(Driver aOriginator)
		{
			myOriginator = aOriginator;
			myClone = aOriginator.clone();
		}

		public Driver myOriginator;
		public Driver myClone;
	}
}
