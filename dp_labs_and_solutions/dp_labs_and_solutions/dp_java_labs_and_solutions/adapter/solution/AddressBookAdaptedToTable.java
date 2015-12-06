// AddressBookAdaptedToTable.java

public class AddressBookAdaptedToTable extends Table
{
	public AddressBookAdaptedToTable(AddressBook aAddressBook)
	{
		if (aAddressBook == null)
		{
			throw new DpException("aAddressBook == null");
		}
		myAddressBook = aAddressBook;
	}

	public int getNumberOfRows()
	{
		return myAddressBook.getNumberOfPersons();
	}

	public int getNumberOfColumns()
	{
		return Person.getNumberOfFieldsPerPerson();
	}

	public String getColumnName(int aColumn)
	{
		return Person.getFieldName(aColumn);
	}

	public Object getValue(int aRow, int aColumn)
	{
		Person aPerson = myAddressBook.getPerson(aRow);
		return aPerson.getFieldValue(aColumn);
	}

	private AddressBook myAddressBook;
}
