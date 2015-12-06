% JourneyVisitor.m

classdef (Abstract) JourneyVisitor < handle
	methods
		function visitMultipleJourney(theJourneyVisitor, aMultipleJourney)
			aIterator = aMultipleJourney.getJourneys;
			while ~aIterator.isDone
				aJourney = aIterator.getCurrent;
				if isempty(aJourney)
					error('aJourney is empty.');
				end
				aJourney.accept(theJourneyVisitor);
				aIterator.advance;
			end
		end

		function visitSingleJourney(theJourneyVisitor, aSingleJourney)
		end
	end
end
