% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aExpression)
			aOutputExpressionVisitor = OutputExpressionVisitor;
			aExpression.accept(aOutputExpressionVisitor);
			fprintf('\n');

			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('a');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('b');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('c');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			aMap = DpMap;
			aMap.put('a',  3.0);
			aMap.put('b', 10.0);
			aMap.put('c',  7.0);

			aGetValueExpressionVisitor = GetValueExpressionVisitor(aMap);
			aExpression.accept(aGetValueExpressionVisitor);
			fprintf('%f.\n', aGetValueExpressionVisitor.value);
		end
	end
end
