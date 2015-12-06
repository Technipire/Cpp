// ProxyFoo.java

public class ProxyFoo extends Foo
{
	public ProxyFoo(RealFoo aRealFoo)
	{
		setRealFoo(aRealFoo);
	}

	public void bar()
	{
		System.out.println("before:");

		myRealFoo.bar();

		System.out.println("after:");
	}

	private void setRealFoo(RealFoo aRealFoo)
	{
		if (aRealFoo == null)
		{
			throw new DpException("void setRealFoo(RealFoo aRealFoo) -- aRealFoo == null.");
		}

		myRealFoo = aRealFoo;
	}

	private RealFoo myRealFoo;
}
