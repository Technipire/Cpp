// Manager.java

public class Manager
{
	public Manager()
	{
		myMeetings = new DpVector<Meeting>();
	}

	public void add(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Manager.add(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Manager.add("
			+ aMeeting.toString()
			+ ")"
			);
		myMeetings.add(aMeeting);
	}

	public void remove(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Manager.remove(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Manager.remove("
			+ aMeeting.toString()
			+ ")"
			);
		// I was too lazy to implement this. :-(
	}

	public void update(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Manager.update(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Manager.update("
			+ aMeeting.toString()
			+ ")"
			);
	}

	private DpVector<Meeting> myMeetings;
}
