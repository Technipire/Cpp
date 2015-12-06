% SingleJourneyFlyweightFactory.m

classdef SingleJourneyFlyweightFactory < handle
	properties (GetAccess = private, SetAccess = private)
		Map % DpMap
	end

	% singleton:

	methods (Access = private)
		% constructor:
		function theSingleJourneyFlyweightFactory = SingleJourneyFlyweightFactory
			theSingleJourneyFlyweightFactory.Map = DpMap;
		end
	end

	methods (Static)
		function result = getInstance
			persistent theInstance;
			if isempty(theInstance)
				theInstance = SingleJourneyFlyweightFactory;
			end
			result = theInstance;
		end
	end

	% flyweight:

	methods
		function result = getFlyweightFor(theSingleJourneyFlyweightFactory, aAddress)
			if ~theSingleJourneyFlyweightFactory.Map.contains(aAddress)
				theSingleJourneyFlyweightFactory.Map.put(aAddress, SingleJourney(aAddress));
			end

			result = theSingleJourneyFlyweightFactory.Map.get(aAddress);
		end
	end
end
