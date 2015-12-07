% ExpressionVisitor.m

classdef ExpressionVisitor < handle
	methods
		function visitBinaryMinus(theExpressionVisitor, aBinaryMinus)
			aBinaryMinus.Operand1.accept(theExpressionVisitor);
			aBinaryMinus.Operand2.accept(theExpressionVisitor);
		end

		function visitBinaryPlus(theExpressionVisitor, aBinaryPlus)
			aBinaryPlus.Operand1.accept(theExpressionVisitor);
			aBinaryPlus.Operand2.accept(theExpressionVisitor);
		end

		function visitConditional(theExpressionVisitor, aConditional)
			aConditional.Operand1.accept(theExpressionVisitor);
			aConditional.Operand2.accept(theExpressionVisitor);
			aConditional.Operand3.accept(theExpressionVisitor);
		end

		function visitDivide(theExpressionVisitor, aDivide)
			aDivide.Operand1.accept(theExpressionVisitor);
			aDivide.Operand2.accept(theExpressionVisitor);
		end

		function visitLiteral(theExpressionVisitor, aLiteral)
		end

		function visitMethodInvocation(theExpressionVisitor, aMethodInvocation)
			aIterator = aMethodInvocation.getOperands;
			while ~aIterator.isDone
				aOperand = aIterator.getCurrent;
				aOperand.accept(theExpressionVisitor);
				aIterator.advance;
			end
		end

		function visitMultiply(theExpressionVisitor, aMultiply)
			aMultiply.Operand1.accept(theExpressionVisitor);
			aMultiply.Operand2.accept(theExpressionVisitor);
		end

		function visitNullExpression(theExpressionVisitor, aNullExpression)
		end

		function visitUnaryMinus(theExpressionVisitor, aUnaryMinus)
			aUnaryMinus.Operand1.accept(theExpressionVisitor);
		end

		function visitUnaryPlus(theExpressionVisitor, aUnaryPlus)
			aUnaryPlus.Operand1.accept(theExpressionVisitor);
		end

		function visitVariable(theExpressionVisitor, aVariable)
		end
	end
end
