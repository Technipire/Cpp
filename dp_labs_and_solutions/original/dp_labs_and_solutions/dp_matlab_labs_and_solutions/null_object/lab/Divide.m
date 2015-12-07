% Divide.m

classdef Divide < Binary
	methods
		% constructor:
		function theDivide = Divide(aOperand1, aOperand2)
			theDivide@Binary(aOperand1, aOperand2);
		end

		function accept(theDivide, aVisitor)
			aVisitor.visitDivide(theDivide);
		end
	end
end
