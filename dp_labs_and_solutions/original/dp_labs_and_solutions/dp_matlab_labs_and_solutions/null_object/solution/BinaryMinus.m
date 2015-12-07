% BinaryMinus.m

classdef BinaryMinus < Binary
	methods
		% constructor:
		function theBinaryMinus = BinaryMinus(aOperand1, aOperand2)
			theBinaryMinus@Binary(aOperand1, aOperand2);
		end

		function accept(theBinaryMinus, aVisitor)
			aVisitor.visitBinaryMinus(theBinaryMinus);
		end
	end
end
