% main.m

function main
	aAddressBook = SetupClass.setup;

	aTable = AddressBookAdaptedToTable(aAddressBook);

	UseClass.use(aTable);
end
