// Binary.java

public abstract class Binary extends Operator
{
	public Binary(Expression aOperand1, Expression aOperand2)
	{
		setOperand1(aOperand1);
		setOperand2(aOperand2);
	}

	public abstract void accept(ExpressionVisitor aExpressionVisitor);

	private void setOperand1(Expression aOperand1)
	{
		myOperand1 = aOperand1;
	}

	public Expression getOperand1()
	{
		return myOperand1;
	}

	private void setOperand2(Expression aOperand2)
	{
		myOperand2 = aOperand2;
	}

	public Expression getOperand2()
	{
		return myOperand2;
	}

	private Expression myOperand1;
	private Expression myOperand2;
}
