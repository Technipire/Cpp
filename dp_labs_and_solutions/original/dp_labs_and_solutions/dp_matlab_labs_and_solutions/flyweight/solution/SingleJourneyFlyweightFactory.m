% SingleJourneyFlyweightFactory.m

classdef SingleJourneyFlyweightFactory < handle
	properties (GetAccess = private, SetAccess = private)
		Map % DpMap
	end

	methods
		% constructor:
		function theSingleJourneyFlyweightFactory = SingleJourneyFlyweightFactory
			theSingleJourneyFlyweightFactory.Map = DpMap;
		end

		function result = getFlyweightFor(theSingleJourneyFlyweightFactory, aAddress)
			if ~theSingleJourneyFlyweightFactory.Map.contains(aAddress)
				theSingleJourneyFlyweightFactory.Map.put(aAddress, SingleJourney(aAddress));
			end

			result = theSingleJourneyFlyweightFactory.Map.get(aAddress);
		end
	end
end
