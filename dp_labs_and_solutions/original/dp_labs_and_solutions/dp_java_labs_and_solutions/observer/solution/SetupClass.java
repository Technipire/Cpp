// SetupClass.java

public class SetupClass
{
	public static Meeting setup()
	{
		Meeting aMeeting =
			new Meeting(
			4, 3, 2005, 2, 15,
			"Conference Room 3");

		aMeeting.add(new Manager());

		aMeeting.add(new Developer());

		return aMeeting;
	}
}
