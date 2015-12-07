// SimpleDriverCommand.java

public abstract class SimpleDriverCommand extends Command
{
	public SimpleDriverCommand(Driver aDriver)
	{
		setDriver(aDriver);
	}

	public abstract void execute();

	public abstract void undo();

	private void setDriver(Driver aDriver)
	{
		if (aDriver == null)
		{
			throw new DpException("void SimpleDriverCommand.setDriver(Driver aDriver) -- aDriver == null.");
		}

		myDriver = aDriver;
	}

	protected Driver getDriver()
	{
		return myDriver;
	}

	private Driver myDriver;
}
