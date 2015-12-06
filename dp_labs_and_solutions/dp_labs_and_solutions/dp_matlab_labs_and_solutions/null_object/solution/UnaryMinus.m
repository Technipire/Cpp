% UnaryMinus.m

classdef UnaryMinus < Unary
	methods
		% constructor:
		function theUnaryMinus = UnaryMinus(aOperand1)
			theUnaryMinus@Unary(aOperand1);
		end

		function accept(theUnaryMinus, aVisitor)
			aVisitor.visitUnaryMinus(theUnaryMinus);
		end
	end
end
