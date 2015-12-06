% OutputJourneyVisitor.m

classdef OutputJourneyVisitor < JourneyVisitor
	methods
		function visitMultipleJourney(theOutputJourneyVisitor, aMultipleJourney)
			fprintf('multiple journey to %s:\n', aMultipleJourney.Name);
			aIterator = aMultipleJourney.getJourneys;
			while ~aIterator.isDone
				aJourney = aIterator.getCurrent;
				if isempty(aJourney)
					error('isempty(aJourney).');
				end

				aJourney.accept(theOutputJourneyVisitor);
				aIterator.advance;
			end
		end

		function visitSingleJourney(theOutputJourneyVisitor, aSingleJourney)
			fprintf('single journey to %s.\n', aSingleJourney.Address);
		end
	end
end
