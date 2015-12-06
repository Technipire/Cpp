% DpListIterator.m

classdef DpListIterator < DpIterator
	properties (GetAccess = private, SetAccess = private)
		CurrentLink % DpLink
	end

	methods
		% constructor:
		function theDpListIterator = DpListIterator(aList)
			theDpListIterator.CurrentLink = aList.First;
		end

		function result = isDone(theDpListIterator)
			result = isempty(theDpListIterator.CurrentLink);
		end

		function result = getCurrent(theDpListIterator)
			result = theDpListIterator.CurrentLink.Value;
		end

		function advance(theDpListIterator)
			theDpListIterator.CurrentLink = theDpListIterator.CurrentLink.Next;
		end
	end
end
