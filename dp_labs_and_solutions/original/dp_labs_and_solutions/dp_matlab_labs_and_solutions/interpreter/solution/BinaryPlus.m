% BinaryPlus.m

classdef BinaryPlus < Binary
	methods
		% constructor:
		function theBinaryPlus = BinaryPlus(aOperand1, aOperand2)
			theBinaryPlus@Binary(aOperand1, aOperand2);
		end

		function result = getValue(theBinaryPlus, aMap)
			if isempty(theBinaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theBinaryPlus.Operand1.getValue(aMap);
			if isempty(theBinaryPlus.Operand2)
				error('Operand2 is empty.');
			end
			a_value2 = theBinaryPlus.Operand2.getValue(aMap);

			result = aValue1 + a_value2;
		end

		function output(theBinaryPlus)
			theBinaryPlus.outputInfix('+');
		end
	end
end
