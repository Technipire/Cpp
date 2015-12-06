% DpVectorReverseIterator.m

classdef DpVectorReverseIterator < DpIterator
	properties (GetAccess = private, SetAccess = private)
		Vector % DpVector
		CurrentIndex % int
	end

	methods
		% constructor:
		function theDpVectorReverseIterator = DpVectorReverseIterator(aVector, aIndex)
			theDpVectorReverseIterator.Vector = aVector;
			if nargin == 1
				theDpVectorReverseIterator.CurrentIndex = aVector.getSize;
			else
				theDpVectorReverseIterator.CurrentIndex = aIndex;
			end
		end

		function result = isDone(theDpVectorReverseIterator)
			result = theDpVectorReverseIterator.CurrentIndex < 1;
		end

		function result = getCurrent(theDpVectorReverseIterator)
			result = theDpVectorReverseIterator.Vector.get(theDpVectorReverseIterator.CurrentIndex);
		end

		function advance(theDpVectorReverseIterator)
			theDpVectorReverseIterator.CurrentIndex = theDpVectorReverseIterator.CurrentIndex - 1;
		end
	end
end
