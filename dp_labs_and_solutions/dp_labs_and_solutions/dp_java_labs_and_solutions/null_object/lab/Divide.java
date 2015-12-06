// Divide.java

public class Divide extends Binary
{
	public Divide(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}
}
