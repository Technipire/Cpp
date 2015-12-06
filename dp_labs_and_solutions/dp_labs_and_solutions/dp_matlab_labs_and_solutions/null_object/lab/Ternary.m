% Ternary.m

classdef (Abstract) Ternary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
		Operand2 % Expression
		Operand3 % Expression
	end

	methods
		% constructor:
		function theTernary = Ternary(aOperand1, aOperand2, aOperand3)
			theTernary.Operand1 = aOperand1;
			theTernary.Operand2 = aOperand2;
			theTernary.Operand3 = aOperand3;
		end
	end

	methods (Abstract)
		accept(theTernary, aVisitor)
	end
end
