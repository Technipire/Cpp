% Multiply.m

classdef Multiply < Binary
	methods
		% constructor:
		function theMultiply = Multiply(aOperand1, aOperand2)
			theMultiply@Binary(aOperand1, aOperand2);
		end

		function output(theMultiply)
			theMultiply.outputInfix('*');
		end
	end
end
