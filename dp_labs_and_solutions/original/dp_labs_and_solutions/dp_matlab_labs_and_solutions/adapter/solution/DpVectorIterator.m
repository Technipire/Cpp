% DpVectorIterator.m

classdef DpVectorIterator < DpIterator
	properties (GetAccess = private, SetAccess = private)
		Vector % DpVector
		CurrentIndex % int
	end

	methods
		% constructor:
		function theDpVectorIterator = DpVectorIterator(aVector, aIndex)
			theDpVectorIterator.Vector = aVector;
			if nargin == 1
				theDpVectorIterator.CurrentIndex = 1;
			else
				theDpVectorIterator.CurrentIndex = aIndex;
			end
		end

		function result = isDone(theDpVectorIterator)
			result = theDpVectorIterator.CurrentIndex > theDpVectorIterator.Vector.getSize;
		end

		function result = getCurrent(theDpVectorIterator)
			result = theDpVectorIterator.Vector.get(theDpVectorIterator.CurrentIndex);
		end

		function advance(theDpVectorIterator)
			theDpVectorIterator.CurrentIndex = theDpVectorIterator.CurrentIndex + 1;
		end
	end
end
