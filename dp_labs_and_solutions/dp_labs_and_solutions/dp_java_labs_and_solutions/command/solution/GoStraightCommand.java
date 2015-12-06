// GoStraightCommand.java

public class GoStraightCommand extends SimpleDriverCommand
{
	public GoStraightCommand(Driver aDriver, int aHowFar)
	{
		super(aDriver);
		setHowFar(aHowFar);
	}

	public void execute()
	{
		getDriver().goStraight(getHowFar());
	}

	public void undo()
	{
		getDriver().undoGoStraight(getHowFar());
	}

	private void setHowFar(int aHowFar)
	{
		myHowFar = aHowFar;
	}

	private int getHowFar()
	{
		return myHowFar;
	}

	private int myHowFar;
}
