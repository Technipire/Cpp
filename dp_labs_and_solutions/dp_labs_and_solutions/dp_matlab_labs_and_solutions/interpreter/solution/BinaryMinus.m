% BinaryMinus.m

classdef BinaryMinus < Binary
	methods
		% constructor:
		function theBinaryMinus = BinaryMinus(aOperand1, aOperand2)
			theBinaryMinus@Binary(aOperand1, aOperand2);
		end

		function result = getValue(theBinaryMinus, aMap)
			if isempty(theBinaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theBinaryMinus.Operand1.getValue(aMap);
			if isempty(theBinaryMinus.Operand2)
				error('Operand2 is empty.');
			end
			a_value2 = theBinaryMinus.Operand2.getValue(aMap);

			result = aValue1 - a_value2;
		end

		function output(theBinaryMinus)
			theBinaryMinus.outputInfix('-');
		end
	end
end
