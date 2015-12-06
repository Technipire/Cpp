% DpListReverseIterator.m

classdef DpListReverseIterator < DpIterator
	properties (GetAccess = private, SetAccess = private)
		OriginalLink % DpLink
		CurrentLink % DpLink
	end

	methods
		% constructor:
		function theDpListReverseIterator = DpListReverseIterator(aList)
			theDpListReverseIterator.OriginalLink = aList.First;
			theDpListReverseIterator.CurrentLink  = aList.Last;
		end

		function result = isDone(theDpListReverseIterator)
			result = isempty(theDpListReverseIterator.CurrentLink);
		end

		function result = getCurrent(theDpListReverseIterator)
			result = theDpListReverseIterator.CurrentLink.Value;
		end

		function advance(theDpListReverseIterator)
			if theDpListReverseIterator.CurrentLink == theDpListReverseIterator.OriginalLink
				theDpListReverseIterator.CurrentLink = [];
			else
				aLink = theDpListReverseIterator.OriginalLink;
				while aLink.Next ~= theDpListReverseIterator.CurrentLink
					aLink = aLink.Next;
				end
				theDpListReverseIterator.CurrentLink = aLink;
			end
		end
	end
end
