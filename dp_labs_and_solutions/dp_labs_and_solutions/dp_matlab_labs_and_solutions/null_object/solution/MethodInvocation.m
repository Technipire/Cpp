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

		function accept(theMethodInvocation, aVisitor)
			aVisitor.visitMethodInvocation(theMethodInvocation);
		end

		function addOperand(theMethodInvocation, aOperand)
			theMethodInvocation.Operands.add(aOperand);
		end

		function result = getOperands(theMethodInvocation)
			result = theMethodInvocation.Operands.makeIterator;
		end
	end
end
