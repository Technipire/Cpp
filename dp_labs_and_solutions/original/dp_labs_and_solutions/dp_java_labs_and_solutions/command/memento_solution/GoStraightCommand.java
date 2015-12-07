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
		super.execute();
		getDriver().goStraight(getHowFar());
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
