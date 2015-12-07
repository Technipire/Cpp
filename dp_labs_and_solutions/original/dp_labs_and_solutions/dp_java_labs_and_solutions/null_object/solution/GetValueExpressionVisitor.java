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
		aBinaryMinus.getOperand1().accept(this);
		double aValue1 = getValue();

		aBinaryMinus.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 - aValue2);
	}

	public void visit(BinaryPlus aBinaryPlus)
	{
		aBinaryPlus.getOperand1().accept(this);
		double aValue1 = getValue();

		aBinaryPlus.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 + aValue2);
	}

	public void visit(Conditional aConditional)
	{
		aConditional.getOperand1().accept(this);
		double aValue1 = getValue();

		if (aValue1 != 0)
		{
			aConditional.getOperand2().accept(this);
			//	double aValue2 = getValue();
			//	setValue(aValue2);
		}
		else
		{
			aConditional.getOperand3().accept(this);
			//	double aValue3 = getValue();
			//	setValue(aValue3);
		}
	}

	public void visit(Divide aDivide)
	{
		aDivide.getOperand1().accept(this);
		double aValue1 = getValue();

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
		aMultiply.getOperand1().accept(this);
		double aValue1 = getValue();

		aMultiply.getOperand2().accept(this);
		double aValue2 = getValue();

		setValue(aValue1 * aValue2);
	}

	public void visit(NullExpression aNullExpression)
	{
		setValue(0);
	}

	public void visit(UnaryMinus aUnaryMinus)
	{
		aUnaryMinus.getOperand1().accept(this);
		double aValue1 = getValue();

		setValue(- aValue1);
	}

	public void visit(UnaryPlus aUnaryPlus)
	{
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
