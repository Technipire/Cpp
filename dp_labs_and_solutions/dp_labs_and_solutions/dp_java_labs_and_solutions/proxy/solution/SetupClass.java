// SetupClass.java

public class SetupClass
{
	public static Foo setup()
	{
		if (true)
		{
			return new ProxyFoo(new RealFoo());
		}
		else
		{
			return new RealFoo();
		}
	}
}
