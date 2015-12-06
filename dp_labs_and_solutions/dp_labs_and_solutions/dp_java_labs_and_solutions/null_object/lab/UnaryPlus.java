// UnaryPlus.java

public class UnaryPlus extends Unary
{
	public UnaryPlus(Expression aOperand1)
	{
		super(aOperand1);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}
}
