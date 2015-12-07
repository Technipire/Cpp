% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aExpressionParser = ExpressionParser;

			aExpressionTreeBuilder = ExpressionTreeBuilder;

			aExpressionParser.parse(aExpressionTreeBuilder);

			aExpression = aExpressionTreeBuilder.getTree;

			result = aExpression;
		end
	end
end
