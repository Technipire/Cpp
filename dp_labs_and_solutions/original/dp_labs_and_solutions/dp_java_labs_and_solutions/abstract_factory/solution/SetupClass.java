// SetupClass.java

public class SetupClass
{
	public static Garden setup()
	{
		return new ConventionalGarden(new ConventionalLettuce(1, 2));
	}
}
