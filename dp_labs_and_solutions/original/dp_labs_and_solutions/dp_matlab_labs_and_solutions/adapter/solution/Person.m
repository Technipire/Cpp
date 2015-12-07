% Person.m

classdef Person < handle
	properties
		FirstName % string
		LastName % string
		Street % string
		City % string
		State % string
		PhoneNumber % string
	end

	methods
		% constructor:
		function thePerson = Person(aFirstName, aLastName, aStreet, aCity, aState, aPhoneNumber)
			thePerson.FirstName = aFirstName;
			thePerson.LastName = aLastName;
			thePerson.Street = aStreet;
			thePerson.City = aCity;
			thePerson.State = aState;
			thePerson.PhoneNumber = aPhoneNumber;
		end

		function result = getFieldValue(thePerson, aField)
			switch aField
				case 1
					result = thePerson.FirstName;
				case 2
					result = thePerson.LastName;
				case 3
					result = thePerson.Street;
				case 4
					result = thePerson.City;
				case 5
					result = thePerson.State;
				case 6
					result = thePerson.PhoneNumber;
			end
		end
	end

	methods (Static)
		function result = getNumberOfFieldsPerPerson
			result = 6;
		end

		function result = getFieldName(aField)
			switch aField
				case 1
					result = 'First Name';
				case 2
					result = 'Last Name';
				case 3
					result = 'Street';
				case 4
					result = 'City';
				case 5
					result = 'State';
				case 6
					result = 'Phone Number';
			end
		end
	end
end
