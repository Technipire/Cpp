// Meeting.java

public class Meeting
{
	public Meeting(int aMonth, int aDay, int aYear, int aHour, int aMinute, String aLocation)
	{
		// do not call set_XXX() here, as they will call update().
		myMonth    = aMonth;
		myDay      = aDay;
		myYear     = aYear;
		myHour     = aHour;
		myMinute   = aMinute;
		myLocation = aLocation;

		myParticipants = new DpVector<Participant>();
	}

	public void add(Participant aParticipant)
	{
		System.out.println("Meeting.add(aParticipant)");

		if (aParticipant == null)
		{
			throw new DpException("void add(Participant aParticipant) -- aParticipant == null.");
		}

		myParticipants.add(aParticipant);

		aParticipant.add(this);
	}

	public DpIterator<Participant> getParticipants()
	{
		return myParticipants.makeIterator();
	}

	private void update()
	{
		System.out.println("Meeting.update()");

		DpIterator<Participant> aIterator = getParticipants();
		while (!aIterator.isDone())
		{
			Participant aParticipant = aIterator.getCurrent();
			aParticipant.update(this);
			aIterator.advance();
		}
	}

	public void cancel()
	{
		System.out.println("Meeting.cancel()");

		DpIterator<Participant> aIterator = getParticipants();
		while (!aIterator.isDone())
		{
			Participant aParticipant = aIterator.getCurrent();
			aParticipant.remove(this);
			aIterator.advance();
		}
	}

	public String toString()
	{
		return
		""
		+ myMonth
		+ "/"
		+ myDay
		+ "/"
		+ myYear
		+ "."
		+ myHour
		+ ":"
		+ myMinute
		+ " at "
		+ myLocation;
	}

	public void setMonth(int aMonth)
	{
		myMonth = aMonth;
		update();
	}

	public void setDay(int aDay)
	{
		myDay = aDay;
		update();
	}

	public void setYear(int aYear)
	{
		myYear = aYear;
		update();
	}

	public void setHour(int aHour)
	{
		myHour = aHour;
		update();
	}

	public void setMinute(int aMinute)
	{
		myMinute = aMinute;
		update();
	}

	public void setLocation(String aLocation)
	{
		myLocation = aLocation;
		update();
	}

	private int myMonth;
	private int myDay;
	private int myYear;
	private int myHour;
	private int myMinute;
	private String myLocation;

	private DpVector<Participant> myParticipants;
}
