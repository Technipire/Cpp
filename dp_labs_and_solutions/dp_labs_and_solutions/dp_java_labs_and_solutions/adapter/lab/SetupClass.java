// SetupClass.java

public class SetupClass
{
	public static AddressBook setup()
	{
		AddressBook aAddressBook = new AddressBook();

		aAddressBook.add(
			new Person("Barbara", "Kinney", "24 Harrison Ave", "Panama City", "FL", "(850) 747-1914"));

		aAddressBook.add(
			new Person("Mary", "Rich", "1893 S Ocean Dr", "Hallandale Beach", "FL", "(954) 454-6283"));

		aAddressBook.add(
			new Person("Su", "Lesperance", "2020 Hillside Dr", "Reedsville", "WI", "(920) 732-3680"));

		aAddressBook.add(
			new Person("Elizabeth", "Newman", "297 Pleasant St", "Worcester", "MA", "(508) 753-6141"));

		aAddressBook.add(
			new Person("Martha", "Gershun", "5710 Lockton Ln", "Mission", "KS", "(913) 362-7654"));

		return aAddressBook;
	}
}
