% DpPair.m

classdef DpPair < handle
	properties
		First  % any type
		Second % any type
	end

	methods
		% constructor:
		function theDpPair = DpPair(aFirst, aSecond)
			theDpPair.First  = aFirst;
			theDpPair.Second = aSecond;
		end
	end
end
