% Unary.m

classdef (Abstract) Unary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
	end

	methods
		% constructor:
		function theUnary = Unary(aOperand1)
			theUnary.Operand1 = aOperand1;
		end
	end

	methods (Abstract)
		accept(theUnary, aVisitor)
	end
end
