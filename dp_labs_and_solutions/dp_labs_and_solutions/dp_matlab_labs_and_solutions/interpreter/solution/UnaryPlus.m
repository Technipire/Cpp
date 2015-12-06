% UnaryPlus.m

classdef UnaryPlus < Unary
	methods
		% constructor:
		function theUnaryPlus = UnaryPlus(aOperand1)
			theUnaryPlus@Unary(aOperand1);
		end

		function result = getValue(theUnaryPlus, aMap)
			if isempty(theUnaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theUnaryPlus.Operand1.getValue(aMap);

			result = + aValue1;
		end

		function output(theUnaryPlus)
			theUnaryPlus.outputPrefix('+');
		end
	end
end
