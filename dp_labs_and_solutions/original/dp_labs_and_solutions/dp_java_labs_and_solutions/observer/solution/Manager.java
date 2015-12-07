// Manager.java

public class Manager extends Participant
{
	public void add(Meeting aMeeting)
	{
		super.add(aMeeting);

		System.out.println(
			  "Manager.add("
			+ aMeeting.toString()
			+ ")"
			);
	}

	public void remove(Meeting aMeeting)
	{
		super.remove(aMeeting);

		System.out.println(
			  "Manager.remove("
			+ aMeeting.toString()
			+ ")"
			);
	}

	public void update(Meeting aMeeting)
	{
		super.update(aMeeting);

		System.out.println(
			  "Manager.update("
			+ aMeeting.toString()
			+ ")"
			);
	}
}
