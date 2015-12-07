% ExpressionVisitor.m

classdef ExpressionVisitor < handle
	methods
		function visitBinaryMinus(theExpressionVisitor, aBinaryMinus)
			if isempty(aBinaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aBinaryMinus.Operand1.accept(theExpressionVisitor);
			if isempty(aBinaryMinus.Operand2)
				error('Operand2 is empty.');
			end
			aBinaryMinus.Operand2.accept(theExpressionVisitor);
		end

		function visitBinaryPlus(theExpressionVisitor, aBinaryPlus)
			if isempty(aBinaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aBinaryPlus.Operand1.accept(theExpressionVisitor);
			if isempty(aBinaryPlus.Operand2)
				error('Operand2 is empty.');
			end
			aBinaryPlus.Operand2.accept(theExpressionVisitor);
		end

		function visitConditional(theExpressionVisitor, aConditional)
			if isempty(aConditional.Operand1)
				error('Operand1 is empty.');
			end
			aConditional.Operand1.accept(theExpressionVisitor);
			if isempty(aConditional.Operand2)
				error('Operand2 is empty.');
			end
			aConditional.Operand2.accept(theExpressionVisitor);
			if isempty(aConditional.Operand3)
				error('Operand3 is empty.');
			end
			aConditional.Operand3.accept(theExpressionVisitor);
		end

		function visitDivide(theExpressionVisitor, aDivide)
			if isempty(aDivide.Operand1)
				error('Operand1 is empty.');
			end
			aDivide.Operand1.accept(theExpressionVisitor);
			if isempty(aDivide.Operand2)
				error('Operand2 is empty.');
			end
			aDivide.Operand2.accept(theExpressionVisitor);
		end

		function visitLiteral(theExpressionVisitor, aLiteral)
		end

		function visitMethodInvocation(theExpressionVisitor, aMethodInvocation)
			aIterator = aMethodInvocation.getOperands;
			while ~aIterator.isDone
				aOperand = aIterator.getCurrent;
				if isempty(aOperand)
					error('aOperand is empty.');
				end
				aOperand.accept(theExpressionVisitor);
				aIterator.advance;
			end
		end

		function visitMultiply(theExpressionVisitor, aMultiply)
			if isempty(aMultiply.Operand1)
				error('Operand1 is empty.');
			end
			aMultiply.Operand1.accept(theExpressionVisitor);
			if isempty(aMultiply.Operand2)
				error('Operand2 is empty.');
			end
			aMultiply.Operand2.accept(theExpressionVisitor);
		end

		function visitUnaryMinus(theExpressionVisitor, aUnaryMinus)
			if isempty(aUnaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aUnaryMinus.Operand1.accept(theExpressionVisitor);
		end

		function visitUnaryPlus(theExpressionVisitor, aUnaryPlus)
			if isempty(aUnaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aUnaryPlus.Operand1.accept(theExpressionVisitor);
		end

		function visitVariable(theExpressionVisitor, aVariable)
		end
	end
end
