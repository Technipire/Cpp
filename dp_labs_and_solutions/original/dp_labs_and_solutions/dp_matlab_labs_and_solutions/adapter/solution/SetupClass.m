% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aAddressBook = AddressBook;

			aAddressBook.add(Person('Barbara', 'Kinney', '24 Harrison Ave', 'Panama City', 'FL', '(850) 747-1914'));

			aAddressBook.add(Person('Mary', 'Rich', '1893 S Ocean Dr', 'Hallandale Beach', 'FL', '(954) 454-6283'));

			aAddressBook.add(Person('Su', 'Lesperance', '2020 Hillside Dr', 'Reedsville', 'WI', '(920) 732-3680'));

			aAddressBook.add(Person('Elizabeth', 'Newman', '297 Pleasant St', 'Worcester', 'MA', '(508) 753-6141'));

			aAddressBook.add(Person('Martha', 'Gershun', '5710 Lockton Ln', 'Mission', 'KS', '(913) 362-7654'));

			result = aAddressBook;
		end
	end
end
