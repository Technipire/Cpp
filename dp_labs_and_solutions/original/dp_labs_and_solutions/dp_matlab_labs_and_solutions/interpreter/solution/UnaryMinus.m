% UnaryMinus.m

classdef UnaryMinus < Unary
	methods
		% constructor:
		function theUnaryMinus = UnaryMinus(aOperand1)
			theUnaryMinus@Unary(aOperand1);
		end

		function result = getValue(theUnaryMinus, aMap)
			if isempty(theUnaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theUnaryMinus.Operand1.getValue(aMap);

			result = - aValue1;
		end

		function output(theUnaryMinus)
			theUnaryMinus.outputPrefix('-');
		end
	end
end
