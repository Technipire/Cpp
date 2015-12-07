% Conditional.m

classdef Conditional < Ternary
	methods
		% constructor:
		function theConditional = Conditional(aOperand1, aOperand2, aOperand3)
			theConditional@Ternary(aOperand1, aOperand2, aOperand3);
		end

		function result = getValue(theConditional, aMap)
			if isempty(theConditional.Operand1)
				error('Operand1 is empty.');
			end
			aValue1 = theConditional.Operand1.getValue(aMap);

			if aValue1
				if isempty(theConditional.Operand2)
					error('Operand2 is empty.');
				end
				result = theConditional.Operand2.getValue(aMap);
			else
				if isempty(theConditional.Operand3)
					error('Operand3 is empty.');
				end
				result = theConditional.Operand3.getValue(aMap);
			end
		end

		function output(theConditional)
			theConditional.outputInfix('?', ':');
		end
	end
end
