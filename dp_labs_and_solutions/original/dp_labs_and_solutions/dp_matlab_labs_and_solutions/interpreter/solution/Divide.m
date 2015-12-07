% Divide.m

classdef Divide < Binary
	methods
		% constructor:
		function theDivide = Divide(aOperand1, aOperand2)
			theDivide@Binary(aOperand1, aOperand2);
		end

		function result = getValue(theDivide, aMap)
			if isempty(theDivide.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theDivide.Operand1.getValue(aMap);
			if isempty(theDivide.Operand2)
				error('Operand2 is empty.');
			end
			a_value2 = theDivide.Operand2.getValue(aMap);

			if a_value2 == 0
				% throw an exception.
			end
			
			result = aValue1 / a_value2;
		end

		function output(theDivide)
			theDivide.outputInfix('/');
		end
	end
end
