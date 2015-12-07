% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aExpression)
			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aOutputExpressionVisitor = OutputExpressionVisitor;
			aExpression.accept(aOutputExpressionVisitor);
			fprintf('\n');

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('a');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('b');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aGetNumberOfUsesOfVariableExpressionVisitor = GetNumberOfUsesOfVariableExpressionVisitor('c');
			aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitor);
			fprintf('%d.\n', aGetNumberOfUsesOfVariableExpressionVisitor.NumberOfUsesOfVariable);

			aMap = DpMap;
			aMap.put('a',  3.0);
			aMap.put('b', 10.0);
			aMap.put('c',  7.0);

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aGetValueExpressionVisitor = GetValueExpressionVisitor(aMap);
			aExpression.accept(aGetValueExpressionVisitor);
			fprintf('%f.\n', aGetValueExpressionVisitor.value);
		end
	end
end
