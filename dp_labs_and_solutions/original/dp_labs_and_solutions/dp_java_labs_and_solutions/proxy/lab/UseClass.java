// UseClass.java

public class UseClass
{
	public static void use(Foo aFoo)
	{
		System.out.println("before:");
		aFoo.bar();
		System.out.println("after:");

		System.out.println("before:");
		aFoo.bar();
		System.out.println("after:");

		System.out.println("before:");
		aFoo.bar();
		System.out.println("after:");
	}
}
