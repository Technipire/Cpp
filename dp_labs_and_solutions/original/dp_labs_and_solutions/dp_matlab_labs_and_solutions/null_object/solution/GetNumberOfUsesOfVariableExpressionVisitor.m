% GetNumberOfUsesOfVariableExpressionVisitor.m

classdef GetNumberOfUsesOfVariableExpressionVisitor < ExpressionVisitor
	properties (GetAccess = public, SetAccess = private)
		Name % string
		NumberOfUsesOfVariable % int
	end

	methods
		% constructor:
		function theGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor(aName)
			theGetNumberOfUsesOfVariableExpressionVisitor.Name = aName;
			theGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable = 0;
		end

		function visitVariable(theGetNumberOfUsesOfVariableExpressionVisitor, aVariable)
			if strcmp(aVariable.Name, theGetNumberOfUsesOfVariableExpressionVisitor.Name)
				theGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable = ...
					theGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable + 1;
			end
		end
	end
end
