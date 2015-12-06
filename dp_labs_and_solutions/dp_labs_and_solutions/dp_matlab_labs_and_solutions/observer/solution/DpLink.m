% DpLink.m

classdef DpLink < handle
	properties
		Value % any type
		Next % DpLink
	end

	methods
		% constructor:
		function theDpLink = DpLink(aValue, aNext)
			theDpLink.Value = aValue;
			if nargin == 2
				theDpLink.Next = aNext;
			end
		end
	end
end
