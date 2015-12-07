% Journey.m

classdef (Abstract) Journey < handle
	methods (Abstract)
		accept(theJourney, aJourneyVisitor)
	end
end
