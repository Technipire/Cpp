// TurnLeftCommand.java

public class TurnLeftCommand extends SimpleDriverCommand
{
	public TurnLeftCommand(Driver aDriver)
	{
		super(aDriver);
	}

	public void execute()
	{
		super.execute();
		getDriver().turnLeft();
	}
}
