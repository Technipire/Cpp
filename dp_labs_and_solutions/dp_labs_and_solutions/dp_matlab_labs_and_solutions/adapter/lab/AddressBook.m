% AddressBook.m

classdef AddressBook < handle & DpContainer
	properties (GetAccess = private, SetAccess = private)
		List % DpList of Person
	end

	methods
		% constructor:
		function theAddressBook = AddressBook
			theAddressBook.List = DpList;
		end

		function add(theAddressBook, aPerson)
			if isempty(aPerson)
				% throw an exception.
			end

			theAddressBook.List.add(aPerson);
		end

		function result = getNumberOfPersons(theAddressBook)
			result = theAddressBook.List.getSize;
		end

		function remove(theAddressBook, aPerson)
			% I was too lazy to implement this. :-(
		end

		function result = makeIterator(theAddressBook)
			result = theAddressBook.List.makeIterator;
		end

		function result = getPerson(theAddressBook, which)
			aIterator = theAddressBook.makeIterator;
			aCounter = 1;
			while ~aIterator.isDone
				if aCounter == which
					result = aIterator.getCurrent;
					return;
				end
				aIterator.advance;
				aCounter = aCounter + 1;
			end
			result = Person.empty;
		end
	end
end
