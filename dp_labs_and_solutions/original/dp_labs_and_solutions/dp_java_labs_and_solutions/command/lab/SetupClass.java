// SetupClass.java

public class SetupClass
{
	public static Command setup()
	{
		Driver aDriver = new Driver("Robert");

		CompoundCommand aCompoundCommand = new CompoundCommand();

		aCompoundCommand.add(new ReportPositionCommand(aDriver));
		aCompoundCommand.add(new TurnLeftCommand(aDriver));
		aCompoundCommand.add(new GoStraightCommand(aDriver, 3));
		aCompoundCommand.add(new TurnRightCommand(aDriver));
		aCompoundCommand.add(new GoStraightCommand(aDriver, 6));
		aCompoundCommand.add(new TurnRightCommand(aDriver));
		aCompoundCommand.add(new ReportPositionCommand(aDriver));

		return aCompoundCommand;
	}
}
