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
			if isempty(aBinaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aBinaryMinus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if isempty(aBinaryMinus.Operand2)
				error('Operand2 is empty.');
			end
			aBinaryMinus.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 - a_value2;
		end

		function visitBinaryPlus(theGetValueExpressionVisitor, aBinaryPlus)
			if isempty(aBinaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aBinaryPlus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if isempty(aBinaryPlus.Operand2)
				error('Operand2 is empty.');
			end
			aBinaryPlus.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 + a_value2;
		end

		function visitConditional(theGetValueExpressionVisitor, aConditional)
			if isempty(aConditional.Operand1)
				error('Operand1 is empty.');
			end
			aConditional.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if aValue1
				if isempty(aConditional.Operand2)
					error('Operand2 is empty.');
				end
				aConditional.Operand2.accept(theGetValueExpressionVisitor);
			%	a_value2 = theGetValueExpressionVisitor.value;
			%	theGetValueExpressionVisitor.value = a_value2;
			else
				if isempty(aConditional.Operand3)
					error('Operand3 is empty.');
				end
				aConditional.Operand3.accept(theGetValueExpressionVisitor);
			%	aValue3 = theGetValueExpressionVisitor.value;
			%	theGetValueExpressionVisitor.value = aValue3;
			end
		end

		function visitDivide(theGetValueExpressionVisitor, aDivide)
			if isempty(aDivide.Operand1)
				error('Operand1 is empty.');
			end
			aDivide.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if isempty(aDivide.Operand2)
				error('Operand2 is empty.');
			end
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
				if isempty(aOperand1)
					error('aOperand1 is empty.');
				end
				aOperand1.accept(theGetValueExpressionVisitor);
				aValue1 = theGetValueExpressionVisitor.value;

				theGetValueExpressionVisitor.value = sqrt(aValue1);
			else
				error('Unsupported method Name.');
			end
		end

		function visitMultiply(theGetValueExpressionVisitor, aMultiply)
			if isempty(aMultiply.Operand1)
				error('Operand1 is empty.');
			end
			aMultiply.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			if isempty(aMultiply.Operand2)
				error('Operand2 is empty.');
			end
			aMultiply.Operand2.accept(theGetValueExpressionVisitor);
			a_value2 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = aValue1 * a_value2;
		end

		function visitUnaryMinus(theGetValueExpressionVisitor, aUnaryMinus)
			if isempty(aUnaryMinus.Operand1)
				error('Operand1 is empty.');
			end
			aUnaryMinus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = - aValue1;
		end

		function visitUnaryPlus(theGetValueExpressionVisitor, aUnaryPlus)
			if isempty(aUnaryPlus.Operand1)
				error('Operand1 is empty.');
			end
			aUnaryPlus.Operand1.accept(theGetValueExpressionVisitor);
			aValue1 = theGetValueExpressionVisitor.value;

			theGetValueExpressionVisitor.value = + aValue1;
		end

		function visitVariable(theGetValueExpressionVisitor, aVariable)
			theGetValueExpressionVisitor.value = theGetValueExpressionVisitor.Map.get(aVariable.Name);
		end
	end
end
