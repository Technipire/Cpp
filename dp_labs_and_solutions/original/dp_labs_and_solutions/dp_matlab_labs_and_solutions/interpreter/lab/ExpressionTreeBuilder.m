% ExpressionTreeBuilder.m

classdef ExpressionTreeBuilder < ExpressionBuilder
	properties (GetAccess = private, SetAccess = private)
		Stack % DpStack
	end

	methods
		% constructor:
		function theExpressionTreeBuilder = ExpressionTreeBuilder
			theExpressionTreeBuilder.Stack = DpStack;
		end

		function buildBinaryMinus(theExpressionTreeBuilder)
			aOperand2 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(BinaryMinus(aOperand1, aOperand2));
		end

		function buildBinaryPlus(theExpressionTreeBuilder)
			aOperand2 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(BinaryPlus(aOperand1, aOperand2));
		end

		function buildConditional(theExpressionTreeBuilder)
			aOperand3 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand2 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(Conditional(aOperand1, aOperand2, aOperand3));
		end

		function buildDivide(theExpressionTreeBuilder)
			aOperand2 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(Divide(aOperand1, aOperand2));
		end

		function buildLiteral(theExpressionTreeBuilder, aValue)
			theExpressionTreeBuilder.Stack.push(LiteralFlyweightFactory.getInstance.getFlyweightFor(aValue));
		end

		function buildMethodInvocation(theExpressionTreeBuilder, aName, aNumberOfParameters)
			aMethodInvocation = MethodInvocation(aName);

			aStack = DpStack;

			for i = 1:aNumberOfParameters
				aOperand = theExpressionTreeBuilder.Stack.top;
				theExpressionTreeBuilder.Stack.pop;

				aStack.push(aOperand);
			end

			for i = 1:aNumberOfParameters
				aOperand = aStack.top;
				aStack.pop;

				aMethodInvocation.addOperand(aOperand);
			end

			theExpressionTreeBuilder.Stack.push(aMethodInvocation);
		end

		function buildMultiply(theExpressionTreeBuilder)
			aOperand2 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(Multiply(aOperand1, aOperand2));
		end

		function buildUnaryMinus(theExpressionTreeBuilder)
			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(UnaryMinus(aOperand1));
		end

		function buildUnaryPlus(theExpressionTreeBuilder)
			aOperand1 = theExpressionTreeBuilder.Stack.top;
			theExpressionTreeBuilder.Stack.pop;

			theExpressionTreeBuilder.Stack.push(UnaryPlus(aOperand1));
		end

		function buildVariable(theExpressionTreeBuilder, aName)
			theExpressionTreeBuilder.Stack.push(VariableFlyweightFactory.getInstance.getFlyweightFor(aName));
		end

		function result = getTree(theExpressionTreeBuilder)
			if theExpressionTreeBuilder.Stack.isEmpty
				error('Cannot getTree if the Stack is empty.');
			end

			result = theExpressionTreeBuilder.Stack.top;
		end
	end
end
