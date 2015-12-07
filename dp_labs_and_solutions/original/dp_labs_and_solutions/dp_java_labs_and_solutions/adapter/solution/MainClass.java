// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		AddressBook aAddressBook = SetupClass.setup();

		Table aTable = new AddressBookAdaptedToTable(aAddressBook);

		UseClass.use(aTable);
	}
}
