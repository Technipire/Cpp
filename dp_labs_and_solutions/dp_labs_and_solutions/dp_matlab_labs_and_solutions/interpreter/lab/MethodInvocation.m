% MethodInvocation.m

classdef MethodInvocation < Nonterminal
	properties (GetAccess = public, SetAccess = private)
		Name % string
		Operands % DpVector of Expression
	end

	methods
		% constructor:
		function theMethodInvocation = MethodInvocation(aName)
			theMethodInvocation.Name = aName;
			theMethodInvocation.Operands = DpVector;
		end

		function result = getNumberOfUsesOfVariable(theMethodInvocation, aName)
			result = 0;
			aIterator = theMethodInvocation.getOperands;
			while ~aIterator.isDone
				aOperand = aIterator.getCurrent;
				if isempty(aOperand)
					error('aOperand is empty.');
				end
				result = result + aOperand.getNumberOfUsesOfVariable(aName);
				aIterator.advance;
			end
		end

		function output(theMethodInvocation)
			fprintf('%s', theMethodInvocation.Name);
			fprintf('(');
			isFirst = true;
			aIterator = theMethodInvocation.getOperands;
			while ~aIterator.isDone
				if isFirst
					isFirst = false;
				else
					fprintf(',');
				end
				aOperand = aIterator.getCurrent;
				if isempty(aOperand)
					error('aOperand is empty.');
				end
				aOperand.output;
				aIterator.advance;
			end
			fprintf(')');
		end

		function addOperand(theMethodInvocation, aOperand)
			theMethodInvocation.Operands.add(aOperand);
		end

		function result = getOperands(theMethodInvocation)
			result = theMethodInvocation.Operands.makeIterator;
		end
	end
end