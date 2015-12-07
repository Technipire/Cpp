% Ternary.m

classdef (Abstract) Ternary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
		Operand2 % Expression
		Operand3 % Expression
	end

	methods
		% constructor:
		function theTernary = Ternary(aOperand1, aOperand2, aOperand3)
			theTernary.Operand1 = aOperand1;
			theTernary.Operand2 = aOperand2;
			theTernary.Operand3 = aOperand3;
		end

		function result = getNumberOfUsesOfVariable(theTernary, aName)
			result = 0;
			if isempty(theTernary.Operand1)
				error('Operand1 is empty.');
			end
			result = result + theTernary.Operand1.getNumberOfUsesOfVariable(aName);
			if isempty(theTernary.Operand2)
				error('Operand2 is empty.');
			end
			result = result + theTernary.Operand2.getNumberOfUsesOfVariable(aName);
			if isempty(theTernary.Operand3)
				error('Operand3 is empty.');
			end
			result = result + theTernary.Operand3.getNumberOfUsesOfVariable(aName);
		end
	end

	methods (Abstract)
		output(theUnary)
	end

	methods (Access = protected)
		function outputInfix(theTernary, aOperator1, aOperator2)
			fprintf('(');
			if isempty(theTernary.Operand1)
				error('Operand1 is empty.');
			end
			theTernary.Operand1.output;
			fprintf('%s', aOperator1);
			if isempty(theTernary.Operand2)
				error('Operand2 is empty.');
			end
			theTernary.Operand2.output;
			fprintf('%s', aOperator2);
			if isempty(theTernary.Operand3)
				error('Operand3 is empty.');
			end
			theTernary.Operand3.output;
			fprintf(')');
		end
	end
end
