// Developer.java

public class Developer extends Participant
{
	public void add(Meeting aMeeting)
	{
		super.add(aMeeting);

		System.out.println(
			  "Developer.add("
			+ aMeeting.toString()
			+ ")"
			);
	}

	public void remove(Meeting aMeeting)
	{
		super.remove(aMeeting);

		System.out.println(
			  "Developer.remove("
			+ aMeeting.toString()
			+ ")"
			);
	}

	public void update(Meeting aMeeting)
	{
		super.update(aMeeting);

		System.out.println(
			  "Developer.update("
			+ aMeeting.toString()
			+ ")"
			);
	}
}
