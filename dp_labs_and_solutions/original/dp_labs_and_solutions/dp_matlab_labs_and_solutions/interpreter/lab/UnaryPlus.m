% UnaryPlus.m

classdef UnaryPlus < Unary
	methods
		% constructor:
		function theUnaryPlus = UnaryPlus(aOperand1)
			theUnaryPlus@Unary(aOperand1);
		end

		function output(theUnaryPlus)
			theUnaryPlus.outputPrefix('+');
		end
	end
end
