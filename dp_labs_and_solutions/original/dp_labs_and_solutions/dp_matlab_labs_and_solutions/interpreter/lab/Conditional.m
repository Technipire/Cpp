% Conditional.m

classdef Conditional < Ternary
	methods
		% constructor:
		function theConditional = Conditional(aOperand1, aOperand2, aOperand3)
			theConditional@Ternary(aOperand1, aOperand2, aOperand3);
		end

		function output(theConditional)
			theConditional.outputInfix('?', ':');
		end
	end
end
