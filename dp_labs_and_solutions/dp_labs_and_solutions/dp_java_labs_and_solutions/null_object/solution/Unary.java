// Unary.java

public abstract class Unary extends Operator
{
	public Unary(Expression aOperand1)
	{
		setOperand1(aOperand1);
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

	private Expression myOperand1;
}
