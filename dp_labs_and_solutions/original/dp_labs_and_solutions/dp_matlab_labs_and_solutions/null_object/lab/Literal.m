% Literal.m

classdef Literal < Terminal
	properties (GetAccess = public, SetAccess = private)
		value % int
	end

	methods
		% constructor:
		function theLiteral = Literal(aValue)
			theLiteral.value = aValue;
		end

		function accept(theLiteral, aVisitor)
			aVisitor.visitLiteral(theLiteral);
		end
	end
end
