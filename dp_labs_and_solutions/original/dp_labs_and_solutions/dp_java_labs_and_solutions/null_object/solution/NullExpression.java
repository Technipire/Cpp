// NullExpression.java

public class NullExpression extends Terminal
{
	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}
}
