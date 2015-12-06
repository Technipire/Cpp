// UnaryMinus.java

public class UnaryMinus extends Unary
{
	public UnaryMinus(Expression aOperand1)
	{
		super(aOperand1);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}
}
