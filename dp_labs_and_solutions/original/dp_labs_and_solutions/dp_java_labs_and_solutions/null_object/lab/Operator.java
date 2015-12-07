// Operator.java

public abstract class Operator extends Nonterminal
{
	public abstract void accept(ExpressionVisitor aExpressionVisitor);
}
