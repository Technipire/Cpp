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

		myManagers   = new DpVector<Manager>();
		myDevelopers = new DpVector<Developer>();
	}

	public void add(Manager aManager)
	{
		System.out.println("Meeting.add(aManager)");

		if (aManager == null)
		{
			throw new DpException("void add(Manager aManager) -- aManager == null.");
		}

		myManagers.add(aManager);

		aManager.add(this);
	}

	public void add(Developer aDeveloper)
	{
		System.out.println("Meeting.add(aDeveloper)");

		if (aDeveloper == null)
		{
			throw new DpException("void add(Developer aDeveloper) -- aDeveloper == null.");
		}

		myDevelopers.add(aDeveloper);

		aDeveloper.add(this);
	}

	public DpIterator<Manager> getManagers()
	{
		return myManagers.makeIterator();
	}

	public DpIterator<Developer> getDevelopers()
	{
		return myDevelopers.makeIterator();
	}

	private void update()
	{
		System.out.println("Meeting.update()");

		{
			DpIterator<Manager> aIterator = getManagers();
			while (!aIterator.isDone())
			{
				Manager aManager = aIterator.getCurrent();
				aManager.update(this);
				aIterator.advance();
			}
		}

		{
			DpIterator<Developer> aIterator = getDevelopers();
			while (!aIterator.isDone())
			{
				Developer aDeveloper = aIterator.getCurrent();
				aDeveloper.update(this);
				aIterator.advance();
			}
		}
	}

	public void cancel()
	{
		System.out.println("Meeting.cancel()");

		{
			DpIterator<Manager> aIterator = getManagers();
			while (!aIterator.isDone())
			{
				Manager aManager = aIterator.getCurrent();
				aManager.remove(this);
				aIterator.advance();
			}
		}

		{
			DpIterator<Developer> aIterator = getDevelopers();
			while (!aIterator.isDone())
			{
				Developer aDeveloper = aIterator.getCurrent();
				aDeveloper.remove(this);
				aIterator.advance();
			}
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

	private DpVector<Manager>   myManagers;
	private DpVector<Developer> myDevelopers;
}
