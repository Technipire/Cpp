// TurnRightCommand.java

public class TurnRightCommand extends SimpleDriverCommand
{
	public TurnRightCommand(Driver aDriver)
	{
		super(aDriver);
	}

	public void execute()
	{
		super.execute();
		getDriver().turnRight();
	}
}
