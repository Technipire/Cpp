% UnaryPlus.m

classdef UnaryPlus < Unary
	methods
		% constructor:
		function theUnaryPlus = UnaryPlus(aOperand1)
			theUnaryPlus@Unary(aOperand1);
		end

		function accept(theUnaryPlus, aVisitor)
			aVisitor.visitUnaryPlus(theUnaryPlus);
		end
	end
end
