% UnaryMinus.m

classdef UnaryMinus < Unary
	methods
		% constructor:
		function theUnaryMinus = UnaryMinus(aOperand1)
			theUnaryMinus@Unary(aOperand1);
		end

		function output(theUnaryMinus)
			theUnaryMinus.outputPrefix('-');
		end
	end
end
