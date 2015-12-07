// Terminal.java

public abstract class Terminal extends Expression
{
	public abstract void accept(ExpressionVisitor aExpressionVisitor);
}
