% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aJourneyParser = JourneyParser;

			aJourneyTreeBuilder = JourneyTreeBuilder;

			aJourneyParser.parse(aJourneyTreeBuilder);

			aJourney = aJourneyTreeBuilder.getTree;

			result = aJourney;
		end
	end
end
