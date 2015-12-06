% DpVector.m

classdef DpVector < DpContainer
	properties (GetAccess = private, SetAccess = private)
		NumberOfElements % int
		Elements % cell array of NumberOfElements elements
	end

	methods
		% constructor:
		function theDpVector = DpVector
			theDpVector.NumberOfElements = 0;
			theDpVector.Elements = cell(0, 1);
		end

		function add(theDpVector, aValue)
			newElements = cell(theDpVector.NumberOfElements + 1, 1);
			for i = 1:theDpVector.NumberOfElements
				newElements{i} = theDpVector.Elements{i};
			end
			newElements{theDpVector.NumberOfElements + 1} = aValue;
			theDpVector.NumberOfElements = theDpVector.NumberOfElements + 1;
			theDpVector.Elements = newElements;
		end

		function set(theDpVector, aSubscript, aValue)
			theDpVector.validateSubscript(aSubscript);
			theDpVector.Elements{aSubscript} = aValue;
		end

		function result = get(theDpVector, aSubscript)
			theDpVector.validateSubscript(aSubscript);
			result = theDpVector.Elements{aSubscript};
		end

		function result = makeIterator(theDpVector)
			result = DpVectorIterator(theDpVector);
		end

		function result = makeReverseIterator(theDpVector)
			result = DpVectorReverseIterator(theDpVector);
		end

		function result = getSize(theDpVector)
			result = theDpVector.NumberOfElements;
		end
	end

	methods (Access = private)
		function validateSubscript(theDpVector, aSubscript)
			if (aSubscript < 1) || (aSubscript > theDpVector.getSize)
				error('Invalid aSubscript.');
			end
		end
	end
end
