% Divide.m

classdef Divide < Binary
	methods
		% constructor:
		function theDivide = Divide(aOperand1, aOperand2)
			theDivide@Binary(aOperand1, aOperand2);
		end

		function output(theDivide)
			theDivide.outputInfix('/');
		end
	end
end
