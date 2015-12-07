% DpStack.m

classdef DpStack < handle
	properties (GetAccess = private, SetAccess = private)
		Link % DpLink
	end

	methods
		function result = isEmpty(theDpStack)
			result = isempty(theDpStack.Link);
		end

		function push(theDpStack, aValue)
			theDpStack.Link = DpLink(aValue, theDpStack.Link);
		end

		function pop(theDpStack)
			if isEmpty(theDpStack)
				error('Cannot pop an empty DpStack.');
			end

			theDpStack.Link = theDpStack.Link.Next;
		end

		function result = top(theDpStack)
			if isEmpty(theDpStack)
				error('Cannot top an empty DpStack.');
			end

			result = theDpStack.Link.Value;
		end
	end
end
