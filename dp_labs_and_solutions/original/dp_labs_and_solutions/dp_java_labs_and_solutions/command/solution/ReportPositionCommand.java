// ReportPositionCommand.java

public class ReportPositionCommand extends SimpleDriverCommand
{
	public ReportPositionCommand(Driver aDriver)
	{
		super(aDriver);
	}

	public void execute()
	{
		getDriver().reportPosition();
	}

	public void undo()
	{
		getDriver().reportPosition();
	}
}
