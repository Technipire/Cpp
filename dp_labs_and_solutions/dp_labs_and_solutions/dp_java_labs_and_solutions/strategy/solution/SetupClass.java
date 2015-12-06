// SetupClass.java

public class SetupClass
{
	public static Packer setup()
	{
		return new Packer(new SlowCarefulPackingStrategy());
	}
}
