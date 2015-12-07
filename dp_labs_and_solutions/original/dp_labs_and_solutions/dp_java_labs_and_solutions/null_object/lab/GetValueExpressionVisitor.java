// GetValueExpressionVisitor.java

public class GetValueExpressionVisitor extends ExpressionVisitor
{
	public GetValueExpressionVisitor(DpMap<String, Double> aMap)
	{
		myMap = aMap;
		myValue = 0;
	}

	public void visit(BinaryMinus aBinaryMinus)
	{
		if (aBinaryMinus.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(BinaryMinus aBinaryMinus) -- aBinaryMinus.getOperand1() == null.");
		}
		aBinaryMinus.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aBinaryMinus.getOperand2() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(BinaryMinus aBinaryMinus) -- aBinaryMinus.getOperand2() == null.");
		}
		aBinaryMinus.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 - aValue2);
	}

	public void visit(BinaryPlus aBinaryPlus)
	{
		if (aBinaryPlus.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(BinaryPlus aBinaryPlus) -- aBinaryPlus.getOperand1() == null.");
		}
		aBinaryPlus.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aBinaryPlus.getOperand2() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(BinaryPlus aBinaryPlus) -- aBinaryPlus.getOperand2() == null.");
		}
		aBinaryPlus.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 + aValue2);
	}

	public void visit(Conditional aConditional)
	{
		if (aConditional.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand1() == null.");
		}
		aConditional.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aValue1 != 0)
		{
			if (aConditional.getOperand2() == null)
			{
				throw new DpException("void GetValueExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand2() == null.");
			}
			aConditional.getOperand2().accept(this);
			//	double aValue2 = getValue();
			//	setValue(aValue2);
		}
		else
		{
			if (aConditional.getOperand3() == null)
			{
				throw new DpException("void GetValueExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand3() == null.");
			}
			aConditional.getOperand3().accept(this);
			//	double aValue3 = getValue();
			//	setValue(aValue3);
		}
	}

	public void visit(Divide aDivide)
	{
		if (aDivide.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(Divide aDivide) -- aDivide.getOperand1() == null.");
		}
		aDivide.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aDivide.getOperand2() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(Divide aDivide) -- aDivide.getOperand2() == null.");
		}
		aDivide.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 / aValue2);
	}

	public void visit(Literal aLiteral)
	{
		double aValue1 = aLiteral.getValue();

		setValue(aValue1);
	}

	public void visit(MethodInvocation aMethodInvocation)
	{
		if (aMethodInvocation.getName().equals("sqrt"))
		{
			DpIterator<Expression> aIterator = aMethodInvocation.getOperands();
			Expression aOperand1 = aIterator.getCurrent();
			if (aOperand1 == null)
			{
				throw new DpException("void GetValueExpressionVisitor.visit(MethodInvocation aMethodInvocation) -- aOperand1 == null.");
			}
			aOperand1.accept(this);
			double aValue1 = getValue();

			setValue(Math.sqrt(aValue1));
		}
		else
		{
			throw new DpException("void visit(MethodInvocation aMethodInvocation) -- unsupported method name.");
		}
	}

	public void visit(Multiply aMultiply)
	{
		if (aMultiply.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(Multiply aMultiply) -- aMultiply.getOperand1() == null.");
		}
		aMultiply.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aMultiply.getOperand2() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(Multiply aMultiply) -- aMultiply.getOperand2() == null.");
		}
		aMultiply.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 * aValue2);
	}

	public void visit(UnaryMinus aUnaryMinus)
	{
		if (aUnaryMinus.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(UnaryMinus aUnaryMinus) -- aUnaryMinus.getOperand1() == null.");
		}
		aUnaryMinus.getOperand1().accept(this);
		double aValue1 = getValue();

		setValue(- aValue1);
	}

	public void visit(UnaryPlus aUnaryPlus)
	{
		if (aUnaryPlus.getOperand1() == null)
		{
			throw new DpException("void GetValueExpressionVisitor.visit(UnaryPlus aUnaryPlus) -- aUnaryPlus.getOperand1() == null.");
		}
		aUnaryPlus.getOperand1().accept(this);
		double aValue1 = getValue();

		setValue(+ aValue1);
	}

	public void visit(Variable aVariable)
	{
		setValue(myMap.get(aVariable.getName()));
	}

	private void setValue(double aValue)
	{
		myValue = aValue;
	}

	public double getValue()
	{
		return myValue;
	}

	private DpMap<String, Double> myMap;
	private double myValue;
}
