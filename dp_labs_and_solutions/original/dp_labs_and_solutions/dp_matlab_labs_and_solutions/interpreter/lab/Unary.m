% Unary.m

classdef (Abstract) Unary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
	end

	methods
		% constructor:
		function theUnary = Unary(aOperand1)
			theUnary.Operand1 = aOperand1;
		end

		function result = getNumberOfUsesOfVariable(theUnary, aName)
			result = 0;
			if isempty(theUnary.Operand1)
				error('Operand1 is empty.');
			end
			result = result + theUnary.Operand1.getNumberOfUsesOfVariable(aName);
		end
	end

	methods (Abstract)
		output(theUnary)
	end

	methods (Access = protected)
		function outputPrefix(theUnary, aOperator)
			fprintf('(');
			fprintf('%s', aOperator);
			if isempty(theUnary.Operand1)
				error('Operand1 is empty.');
			end
			theUnary.Operand1.output;
			fprintf(')');
		end

		function outputPostfix(theUnary, aOperator)
			fprintf('(');
			if isempty(theUnary.Operand1)
				error('Operand1 is empty.');
			end
			theUnary.Operand1.output;
			fprintf('%s', aOperator);
			fprintf(')');
		end
	end
end
