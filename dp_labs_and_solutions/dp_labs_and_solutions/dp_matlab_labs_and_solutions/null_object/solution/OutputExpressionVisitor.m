% OutputExpressionVisitor.m

classdef OutputExpressionVisitor < ExpressionVisitor
	methods
		function visitBinaryMinus(theOutputExpressionVisitor, aBinaryMinus)
			theOutputExpressionVisitor.outputInfix2(aBinaryMinus, '-');
		end

		function visitBinaryPlus(theOutputExpressionVisitor, aBinaryPlus)
			theOutputExpressionVisitor.outputInfix2(aBinaryPlus, '+');
		end

		function visitConditional(theOutputExpressionVisitor, aConditional)
			theOutputExpressionVisitor.outputInfix3(aConditional, '?', ':');
		end

		function visitDivide(theOutputExpressionVisitor, aDivide)
			theOutputExpressionVisitor.outputInfix2(aDivide, '/');
		end

		function visitLiteral(theOutputExpressionVisitor, aLiteral)
			fprintf('%d', aLiteral.value);
		end

		function visitMethodInvocation(theOutputExpressionVisitor, aMethodInvocation)
			fprintf('%s', aMethodInvocation.Name);
			fprintf('(');
			isFirst = true;
			aIterator = aMethodInvocation.getOperands;
			while ~aIterator.isDone
				if isFirst
					isFirst = false;
				else
					fprintf(',');
				end
				aOperand = aIterator.getCurrent;
				aOperand.accept(theOutputExpressionVisitor);
				aIterator.advance;
			end
			fprintf(')');
		end

		function visitMultiply(theOutputExpressionVisitor, aMultiply)
			theOutputExpressionVisitor.outputInfix2(aMultiply, '*');
		end

		function visitNullExpression(theOutputExpressionVisitor, aNullExpression)
			fprintf('NULL');
		end

		function visitUnaryMinus(theOutputExpressionVisitor, aUnaryMinus)
			theOutputExpressionVisitor.outputPrefix(aUnaryMinus, '-');
		end

		function visitUnaryPlus(theOutputExpressionVisitor, aUnaryPlus)
			theOutputExpressionVisitor.outputPrefix(aUnaryPlus, '+');
		end

		function visitVariable(theOutputExpressionVisitor, aVariable)
			fprintf('%s', aVariable.Name);
		end
	end

	methods (Access = private)
		function outputPrefix(theOutputExpressionVisitor, aUnary, aOperator)
			fprintf('(');
			fprintf('%s', aOperator);
			aUnary.Operand1.accept(theOutputExpressionVisitor);
			fprintf(')');
		end

		function outputPostfix(theOutputExpressionVisitor, aUnary, aOperator)
			fprintf('(');
			aUnary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator);
			fprintf(')');
		end

		function outputInfix2(theOutputExpressionVisitor, aBinary, aOperator)
			fprintf('(');
			aBinary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator);
			aBinary.Operand2.accept(theOutputExpressionVisitor);
			fprintf(')');
		end

		function outputInfix3(theOutputExpressionVisitor, aTernary, aOperator1, aOperator2)
			fprintf('(');
			aTernary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator1);
			aTernary.Operand2.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator2);
			aTernary.Operand3.accept(theOutputExpressionVisitor);
			fprintf(')');
		end
	end
end
