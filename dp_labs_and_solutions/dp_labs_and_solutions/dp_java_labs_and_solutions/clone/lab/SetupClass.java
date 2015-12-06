// SetupClass.java

public class SetupClass
{
	public static Lettuce setup()
	{
		return new ConventionalLettuce(1, 2);
	}
}
