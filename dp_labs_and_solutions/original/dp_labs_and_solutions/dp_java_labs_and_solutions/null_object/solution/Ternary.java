// Ternary.java

public abstract class Ternary extends Operator
{
	public Ternary(Expression aOperand1, Expression aOperand2, Expression aOperand3)
	{
		setOperand1(aOperand1);
		setOperand2(aOperand2);
		setOperand3(aOperand3);
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

	private void setOperand3(Expression aOperand3)
	{
		myOperand3 = aOperand3;
	}

	public Expression getOperand3()
	{
		return myOperand3;
	}

	private Expression myOperand1;
	private Expression myOperand2;
	private Expression myOperand3;
}
