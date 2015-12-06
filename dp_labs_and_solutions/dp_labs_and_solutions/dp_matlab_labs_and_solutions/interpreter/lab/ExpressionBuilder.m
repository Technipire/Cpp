% ExpressionBuilder.m

classdef (Abstract) ExpressionBuilder < handle
	methods
		function buildBinaryMinus(theExpressionBuilder)
		end

		function buildBinaryPlus(theExpressionBuilder)
		end

		function buildConditional(theExpressionBuilder)
		end

		function buildDivide(theExpressionBuilder)
		end

		function buildLiteral(theExpressionBuilder, aValue)
		end

		function buildMethodInvocation(theExpressionBuilder, aName, aNumberOfParameters)
		end

		function buildMultiply(theExpressionBuilder)
		end

		function buildUnaryMinus(theExpressionBuilder)
		end

		function buildUnaryPlus(theExpressionBuilder)
		end

		function buildVariable(theExpressionBuilder, aName)
		end
	end
end
