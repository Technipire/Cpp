// Participant.cpp

public abstract class Participant
{
	public Participant()
	{
		myMeetings = new DpVector<Meeting>();
	}

	public void add(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void Participant.add(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Participant.add("
			+ aMeeting.toString()
			+ ")"
			);
		myMeetings.add(aMeeting);
	}

	public void remove(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void remove(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Participant.remove("
			+ aMeeting.toString()
			+ ")"
			);
		// I was too lazy to implement this. :-(
	}

	public void update(Meeting aMeeting)
	{
		if (aMeeting == null)
		{
			throw new DpException("void update(Meeting aMeeting) -- Invalid aMeeting.");
		}

		System.out.println(
			  "Participant.update("
			+ aMeeting.toString()
			+ ")"
			);
	}

	private DpVector<Meeting> myMeetings;
}
