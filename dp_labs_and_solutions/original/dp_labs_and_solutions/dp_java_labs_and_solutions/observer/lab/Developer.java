// Developer.java

public class Developer
{
	public Developer()
	{
		myMeetings = new DpVector<Meeting>();
	}

	public void add(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Developer.add(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Developer.add("
			+ aMeeting.toString()
			+ ")"
			);
		myMeetings.add(aMeeting);
	}

	public void remove(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Developer.remove(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Developer.remove("
			+ aMeeting.toString()
			+ ")"
			);
		// I was too lazy to implement this. :-(
	}

	public void update(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Developer.update(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Developer.update("
			+ aMeeting.toString()
			+ ")"
			);
	}

	private DpVector<Meeting> myMeetings;
}
