% Multiply.m

classdef Multiply < Binary
	methods
		% constructor:
		function theMultiply = Multiply(aOperand1, aOperand2)
			theMultiply@Binary(aOperand1, aOperand2);
		end

		function result = getValue(theMultiply, aMap)
			if isempty(theMultiply.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theMultiply.Operand1.getValue(aMap);
			if isempty(theMultiply.Operand2)
				error('Operand2 is empty.');
			end
			a_value2 = theMultiply.Operand2.getValue(aMap);

			result = aValue1 * a_value2;
		end

		function output(theMultiply)
			theMultiply.outputInfix('*');
		end
	end
end
