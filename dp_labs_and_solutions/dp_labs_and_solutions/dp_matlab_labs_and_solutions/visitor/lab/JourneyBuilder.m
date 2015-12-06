% JourneyBuilder.m

classdef (Abstract) JourneyBuilder < handle
	methods
		function buildMultipleJourney(theJourneyBuilder, aName, aNumberOfJourneys)
		end

		function buildSingleJourney(theJourneyBuilder, aAddress)
		end
	end
end
