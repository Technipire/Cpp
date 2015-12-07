% BinaryMinus.m

classdef BinaryMinus < Binary
	methods
		% constructor:
		function theBinaryMinus = BinaryMinus(aOperand1, aOperand2)
			theBinaryMinus@Binary(aOperand1, aOperand2);
		end

		function output(theBinaryMinus)
			theBinaryMinus.outputInfix('-');
		end
	end
end
