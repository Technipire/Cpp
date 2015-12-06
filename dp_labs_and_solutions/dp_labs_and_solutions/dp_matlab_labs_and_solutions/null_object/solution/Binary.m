% Binary.m

classdef (Abstract) Binary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
		Operand2 % Expression
	end

	methods
		% constructor:
		function theBinary = Binary(aOperand1, aOperand2)
			theBinary.Operand1 = aOperand1;
			theBinary.Operand2 = aOperand2;
		end
	end

	methods (Abstract)
		accept(theBinary, aVisitor)
	end
end
