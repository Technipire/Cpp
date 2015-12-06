% ExpressionParser.m

classdef ExpressionParser < handle
	methods
		function parse(theExpressionParser, aExpressionBuilder)
			aExpressionBuilder.buildNullExpression; % aExpressionBuilder.buildVariable('b');
			aExpressionBuilder.buildUnaryMinus;
			aExpressionBuilder.buildVariable('b');
			aExpressionBuilder.buildVariable('b');
			aExpressionBuilder.buildMultiply;
			aExpressionBuilder.buildLiteral(4);
			aExpressionBuilder.buildVariable('a');
			aExpressionBuilder.buildMultiply;
			aExpressionBuilder.buildVariable('c');
			aExpressionBuilder.buildMultiply;
			aExpressionBuilder.buildBinaryMinus;
			aExpressionBuilder.buildMethodInvocation('sqrt', 1);
			aExpressionBuilder.buildBinaryPlus;
			aExpressionBuilder.buildLiteral(2);
			aExpressionBuilder.buildVariable('a');
			aExpressionBuilder.buildMultiply;
			aExpressionBuilder.buildDivide;
		end
	end
end
