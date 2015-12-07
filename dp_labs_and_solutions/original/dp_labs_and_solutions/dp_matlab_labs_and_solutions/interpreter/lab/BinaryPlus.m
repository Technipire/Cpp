% BinaryPlus.m

classdef BinaryPlus < Binary
	methods
		% constructor:
		function theBinaryPlus = BinaryPlus(aOperand1, aOperand2)
			theBinaryPlus@Binary(aOperand1, aOperand2);
		end

		function output(theBinaryPlus)
			theBinaryPlus.outputInfix('+');
		end
	end
end
