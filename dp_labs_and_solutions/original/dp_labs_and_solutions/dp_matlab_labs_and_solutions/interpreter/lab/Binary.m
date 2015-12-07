% Binary.m

classdef (Abstract) Binary < Operator
	properties (GetAccess = public, SetAccess = private)
		Operand1 % Expression
		Operand2 % Expression
	end

	methods
		% constructor:
		function theBinary = Binary(aOperand1, aOperand2)
			theBinary.Operand1 = aOperand1;
			theBinary.Operand2 = aOperand2;
		end

		function result = getNumberOfUsesOfVariable(theBinary, aName)
			result = 0;
			if isempty(theBinary.Operand1)
				error('Operand1 is empty.');
			end
			result = result + theBinary.Operand1.getNumberOfUsesOfVariable(aName);
			if isempty(theBinary.Operand2)
				error('Operand2 is empty.');
			end
			result = result + theBinary.Operand2.getNumberOfUsesOfVariable(aName);
		end
	end

	methods (Abstract)
		output(theBinary)
	end

	methods (Access = protected)
		function outputInfix(theBinary, aOperator)
			fprintf('(');
			if isempty(theBinary.Operand1)
				error('Operand1 is empty.');
			end
			theBinary.Operand1.output;
			fprintf('%s', aOperator);
			if isempty(theBinary.Operand2)
				error('Operand2 is empty.');
			end
			theBinary.Operand2.output;
			fprintf(')');
		end
	end
end
