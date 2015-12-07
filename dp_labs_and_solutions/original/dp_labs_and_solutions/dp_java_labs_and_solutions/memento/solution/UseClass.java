// UseClass.java

public class UseClass
{
	public static void use(Driver aDriver)
	{
		aDriver.reportPosition();

		Driver.MementoInterface aDriverMementoInterface = aDriver.backup();

		aDriver.turnLeft();
		aDriver.goStraight(3);
		aDriver.turnRight();
		aDriver.goStraight(6);
		aDriver.turnRight();

		aDriver.reportPosition();

		aDriver.restore(aDriverMementoInterface);

		aDriver.reportPosition();
	}
}
