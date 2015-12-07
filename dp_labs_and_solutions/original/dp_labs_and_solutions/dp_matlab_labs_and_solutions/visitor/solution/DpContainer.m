% DpContainer.m

classdef (Abstract) DpContainer < handle
	methods (Abstract)
		result = makeIterator(theDpContainer)
	end

	methods
		function result = getSize(theDpContainer)
			aIterator = theDpContainer.makeIterator;
			result = 0;
			while ~aIterator.isDone
				result = result + 1;
				aIterator.advance;
			end
		end
	end
end
