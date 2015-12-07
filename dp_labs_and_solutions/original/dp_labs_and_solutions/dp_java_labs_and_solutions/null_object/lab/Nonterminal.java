// Nonterminal.java

public abstract class Nonterminal extends Expression
{
	public abstract void accept(ExpressionVisitor aExpressionVisitor);
}
