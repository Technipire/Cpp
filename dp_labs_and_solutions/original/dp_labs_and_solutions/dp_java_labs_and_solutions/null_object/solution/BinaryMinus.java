// BinaryMinus.java

public class BinaryMinus extends Binary
{
	public BinaryMinus(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}
}
