// CompoundCommand.java

public class CompoundCommand extends Command
{
	public CompoundCommand()
	{
		myCommands = new DpVector<Command>();
	}

	public void add(Command aCommand)
	{
		if (aCommand == null)
		{
			throw new DpException("void CompoundCommand.add(Command aCommand) -- aCommand == null.");
		}
		myCommands.add(aCommand);
	}

	public void execute()
	{
		DpIterator<Command> aIterator = myCommands.makeIterator();
		while (!aIterator.isDone())
		{
			Command aCommand = aIterator.getCurrent();
			aCommand.execute();
			aIterator.advance();
		}
	}

	public void undo()
	{
		DpIterator<Command> aIterator = myCommands.makeReverseIterator();
		while (!aIterator.isDone())
		{
			Command aCommand = aIterator.getCurrent();
			aCommand.undo();
			aIterator.advance();
		}
	}

	private DpVector<Command> myCommands;
}
