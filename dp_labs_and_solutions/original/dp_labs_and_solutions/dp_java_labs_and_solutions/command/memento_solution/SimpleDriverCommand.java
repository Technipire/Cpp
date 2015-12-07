// SimpleDriverCommand.java

public abstract class SimpleDriverCommand extends Command
{
	public SimpleDriverCommand(Driver aDriver)
	{
		setDriver(aDriver);
		myDriverMementoInterface = null;
	}

	public void execute()
	{
		myDriverMementoInterface = getDriver().backup();
	}

	public void undo()
	{
		getDriver().restore(myDriverMementoInterface);
	}

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
	private Driver.MementoInterface myDriverMementoInterface;
}
