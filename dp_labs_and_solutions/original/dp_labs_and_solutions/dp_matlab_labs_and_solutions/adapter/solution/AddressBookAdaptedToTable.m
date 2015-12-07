% AddressBookAdaptedToTable.m

classdef AddressBookAdaptedToTable < Table
	properties (GetAccess = private, SetAccess = private)
		AddressBook % AddressBook
	end

	methods
		% constructor:
		function theAddressBookAdaptedToTable = AddressBookAdaptedToTable(aAddressBook)
			theAddressBookAdaptedToTable.AddressBook = aAddressBook;
		end

		function set.AddressBook(theAddressBookAdaptedToTable, aAddressBook)
			if isempty(aAddressBook)
				error('isempty(aAddressBook)');
			end
			theAddressBookAdaptedToTable.AddressBook = aAddressBook;
		end

		function result = getNumberOfRows(theAddressBookAdaptedToTable)
			result = theAddressBookAdaptedToTable.AddressBook.getNumberOfPersons;
		end

		function result = getNumberOfColumns(theAddressBookAdaptedToTable)
			result = Person.getNumberOfFieldsPerPerson;
		end

		function result = getColumnName(theAddressBookAdaptedToTable, aColumn)
			result = Person.getFieldName(aColumn);
		end

		function result = getValue(theAddressBookAdaptedToTable, aRow, aColumn)
			aPerson = theAddressBookAdaptedToTable.AddressBook.getPerson(aRow);
			result = aPerson.getFieldValue(aColumn);
		end
	end
end
