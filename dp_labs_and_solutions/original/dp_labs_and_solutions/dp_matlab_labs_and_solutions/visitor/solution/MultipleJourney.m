% MultipleJourney.m

classdef MultipleJourney < Journey
	properties (GetAccess = public, SetAccess = private)
		Name     % String
	end

	properties (GetAccess = private, SetAccess = private)
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

		function accept(theMultipleJourney, aJourneyVisitor)
			if isempty(aJourneyVisitor)
				error('MultipleJourney.accept(theMultipleJourney, aJourneyVisitor) -- isempty(aJourneyVisitor).');
			end

			aJourneyVisitor.visitMultipleJourney(theMultipleJourney);
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
