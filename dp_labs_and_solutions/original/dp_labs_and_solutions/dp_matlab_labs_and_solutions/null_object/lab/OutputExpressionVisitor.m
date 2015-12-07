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
				if isempty(aOperand)
					error('aOperand is empty.');
				end
				aOperand.accept(theOutputExpressionVisitor);
				aIterator.advance;
			end
			fprintf(')');
		end

		function visitMultiply(theOutputExpressionVisitor, aMultiply)
			theOutputExpressionVisitor.outputInfix2(aMultiply, '*');
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
			if isempty(aUnary.Operand1)
				error('Operand1 is empty.');
			end
			aUnary.Operand1.accept(theOutputExpressionVisitor);
			fprintf(')');
		end

		function outputPostfix(theOutputExpressionVisitor, aUnary, aOperator)
			fprintf('(');
			if isempty(aUnary.Operand1)
				error('Operand1 is empty.');
			end
			aUnary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator);
			fprintf(')');
		end

		function outputInfix2(theOutputExpressionVisitor, aBinary, aOperator)
			fprintf('(');
			if isempty(aBinary.Operand1)
				error('Operand1 is empty.');
			end
			aBinary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator);
			if isempty(aBinary.Operand2)
				error('Operand2 is empty.');
			end
			aBinary.Operand2.accept(theOutputExpressionVisitor);
			fprintf(')');
		end

		function outputInfix3(theOutputExpressionVisitor, aTernary, aOperator1, aOperator2)
			fprintf('(');
			if isempty(aTernary.Operand1)
				error('Operand1 is empty.');
			end
			aTernary.Operand1.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator1);
			if isempty(aTernary.Operand2)
				error('Operand2 is empty.');
			end
			aTernary.Operand2.accept(theOutputExpressionVisitor);
			fprintf('%s', aOperator2);
			if isempty(aTernary.Operand3)
				error('Operand3 is empty.');
			end
			aTernary.Operand3.accept(theOutputExpressionVisitor);
			fprintf(')');
		end
	end
end
