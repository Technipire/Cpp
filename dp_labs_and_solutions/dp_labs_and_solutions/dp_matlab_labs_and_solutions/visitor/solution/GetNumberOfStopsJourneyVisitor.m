% GetNumberOfStopsJourneyVisitor.m

classdef GetNumberOfStopsJourneyVisitor < JourneyVisitor
	properties (GetAccess = public, SetAccess = private)
		NumberOfStops % int
	end

	methods
		% constructor:
		function theGetNumberOfStopsJourneyVisitor = GetNumberOfStopsJourneyVisitor()
			theGetNumberOfStopsJourneyVisitor.NumberOfStops = 0;
		end

		function visitSingleJourney(theGetNumberOfStopsJourneyVisitor, aSingleJourney)
			theGetNumberOfStopsJourneyVisitor.NumberOfStops = theGetNumberOfStopsJourneyVisitor.NumberOfStops + 1;
		end
	end
end
