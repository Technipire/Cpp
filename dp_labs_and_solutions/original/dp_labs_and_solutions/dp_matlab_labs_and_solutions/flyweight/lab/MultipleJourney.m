% MultipleJourney.m

classdef MultipleJourney < Journey
	properties (GetAccess = private, SetAccess = private)
		Name     % String
		Journeys % DpVector of Journey
	end

	methods
		% constructor:
		function theMultipleJourney = MultipleJourney(aName)
			if isempty(aName)
				error('isempty(aName)');
			end

			theMultipleJourney.Name     = aName;
			theMultipleJourney.Journeys = DpVector;
		end

		function output(theMultipleJourney)
			fprintf('multiple journey to %s:\n', theMultipleJourney.Name);
			aIterator = theMultipleJourney.getJourneys;
			while ~aIterator.isDone
				aJourney = aIterator.getCurrent;
				if isempty(aJourney)
					error('isempty(aJourney).');
				end

				aJourney.output;
				aIterator.advance;
			end
		end

		function addJourney(theMultipleJourney, aJourney)
			if isempty(aJourney)
				error('isempty(aJourney).');
			end

			theMultipleJourney.Journeys.add(aJourney);
		end

		function result = getJourneys(theMultipleJourney)
			result = theMultipleJourney.Journeys.makeIterator;
		end
	end
end
