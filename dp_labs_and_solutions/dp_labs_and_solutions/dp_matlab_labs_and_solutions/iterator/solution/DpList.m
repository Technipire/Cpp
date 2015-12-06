% DpList.m

classdef DpList < DpContainer
	properties (GetAccess = public, SetAccess = private)
		First % DpLink
		Last  % DpLink
	end

	methods
		function add(theDpList, aValue)
			aLink = DpLink(aValue);
			if isempty(theDpList.First)
				theDpList.First = aLink;
			else
				theDpList.Last.Next = aLink;
			end
			theDpList.Last = aLink;
		end

		function result = makeIterator(theDpList)
			result = DpListIterator(theDpList);
		end

		function result = makeReverseIterator(theDpList)
			result = DpListReverseIterator(theDpList);
		end
	end
end
