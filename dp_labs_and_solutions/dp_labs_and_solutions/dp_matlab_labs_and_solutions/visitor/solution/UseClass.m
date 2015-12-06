% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aJourney)
			if isempty(aJourney)
				error('isempty(aJourney).');
			end

			aOutputJourneyVisitor = OutputJourneyVisitor;
			aJourney.accept(aOutputJourneyVisitor);

			aGetNumberOfStopsJourneyVisitor = GetNumberOfStopsJourneyVisitor;
			aJourney.accept(aGetNumberOfStopsJourneyVisitor);
			fprintf('%d.\n', aGetNumberOfStopsJourneyVisitor.NumberOfStops);
		end
	end
end
