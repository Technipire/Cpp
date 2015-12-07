// UseClass.java

public class UseClass
{
	public static void use(Command aCommand)
	{
		aCommand.execute();

		aCommand.undo();
	}
}
