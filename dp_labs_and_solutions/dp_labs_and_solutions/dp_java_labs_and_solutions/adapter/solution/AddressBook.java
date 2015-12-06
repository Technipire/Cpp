// AddressBook.java

public class AddressBook extends DpContainer<Person>
{
	public AddressBook()
	{
		myPersons = new DpList<Person>();
	}

	public void add(Person aPerson)
	{
		if (aPerson == null)
		{
			// throw an exception.
		}

		myPersons.add(aPerson);
	}

	public int getNumberOfPersons()
	{
		return myPersons.getSize();
	}

	public void remove(Person aPerson)
	{
		// I was too lazy to implement this. :-(
	}

	public DpIterator<Person> makeIterator()
	{
		return myPersons.makeIterator();
	}

	public Person getPerson(int which)
	{
		DpIterator<Person> aIterator = makeIterator();
		int aCounter = 0;
		while (!aIterator.isDone())
		{
			if (aCounter == which)
			{
				return aIterator.getCurrent();
			}
			aIterator.advance();
			++aCounter;
		}
		return null;
	}

	private DpList<Person> myPersons;
}
