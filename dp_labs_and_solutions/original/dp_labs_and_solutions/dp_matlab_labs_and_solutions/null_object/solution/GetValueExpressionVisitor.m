% GetValueExpressionVisitor.m

classdef GetValueExpressionVisitor < ExpressionVisitor
	properties (GetAccess = public, SetAccess = private)
		Map % DpMap
		value % double
	end

	methods
		% constructor:
		function theGetValueExpressionVisitor = GetValueExpressionVisitor(aMap)
			theGetValueExpressionVisitor.Map = aMap;
			theGetValueExpressionVisitor.value = 0;
		end

		function visitBinaryMinus(theGetValueExpressionVisitor, aBinaryMinus)
			aBinaryMinus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			aBinaryMinus.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 - a_value2;
		end

		function visitBinaryPlus(theGetValueExpressionVisitor, aBinaryPlus)
			aBinaryPlus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			aBinaryPlus.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 + a_value2;
		end

		function visitConditional(theGetValueExpressionVisitor, aConditional)
			aConditional.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if aValue1
				aConditional.Operand2.accept(theGetValueExpressionVisitor);
			%	a_value2 = theGetValueExpressionVisitor.value;
			%	theGetValueExpressionVisitor.value = a_value2;
			else
				aConditional.Operand3.accept(theGetValueExpressionVisitor);
			%	aValue3 = theGetValueExpressionVisitor.value;
			%	theGetValueExpressionVisitor.value = aValue3;
			end
		end

		function visitDivide(theGetValueExpressionVisitor, aDivide)
			aDivide.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			aDivide.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 / a_value2;
		end

		function visitLiteral(theGetValueExpressionVisitor, aLiteral)
			theGetValueExpressionVisitor.value = aLiteral.value;
		end

		function visitMethodInvocation(theGetValueExpressionVisitor, aMethodInvocation)
			if strcmp(aMethodInvocation.Name, 'sqrt')
				aIterator = aMethodInvocation.getOperands;
				aOperand1 = aIterator.getCurrent;
				aOperand1.accept(theGetValueExpressionVisitor);
				aValue1 = theGetValueExpressionVisitor.value;

				theGetValueExpressionVisitor.value = sqrt(aValue1);
			else
				error('Unsupported method Name.');
			end
		end

		function visitMultiply(theGetValueExpressionVisitor, aMultiply)
			aMultiply.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			aMultiply.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 * a_value2;
		end

		function visitNullExpression(theGetValueExpressionVisitor, aNullExpression)
			theGetValueExpressionVisitor.value = 0;
		end

		function visitUnaryMinus(theGetValueExpressionVisitor, aUnaryMinus)
			aUnaryMinus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = - aValue1;
		end

		function visitUnaryPlus(theGetValueExpressionVisitor, aUnaryPlus)
			aUnaryPlus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = + aValue1;
		end

		function visitVariable(theGetValueExpressionVisitor, aVariable)
			theGetValueExpressionVisitor.value = theGetValueExpressionVisitor.Map.get(aVariable.Name);
		end
	end
end
