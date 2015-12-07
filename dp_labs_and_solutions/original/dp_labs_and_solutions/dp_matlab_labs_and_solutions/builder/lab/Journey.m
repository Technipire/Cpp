% Journey.m

classdef (Abstract) Journey < handle
	methods (Abstract)
		output(theJourney)

		result = getNumberOfStops(theJourney)
	end
end
