% SingleJourney.m

classdef SingleJourney < Journey
	properties (GetAccess = private, SetAccess = private)
		Address % String
	end

	methods
		% constructor:
		function theSingleJourney = SingleJourney(aAddress)
			if isempty(aAddress)
				error('Invalid aAddress.');
			end

			theSingleJourney.Address = aAddress;
		end

		function output(theSingleJourney)
			fprintf('single journey to %s.\n', theSingleJourney.Address);
		end
	end
end
