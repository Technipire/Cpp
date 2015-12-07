% Multiply.m

classdef Multiply < Binary
	methods
		% constructor:
		function theMultiply = Multiply(aOperand1, aOperand2)
			theMultiply@Binary(aOperand1, aOperand2);
		end

		function accept(theMultiply, aVisitor)
			aVisitor.visitMultiply(theMultiply);
		end
	end
end
