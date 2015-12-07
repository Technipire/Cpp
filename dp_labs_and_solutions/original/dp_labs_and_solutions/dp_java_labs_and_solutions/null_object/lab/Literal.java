// Literal.java

public class Literal extends Terminal
{
	public Literal(int aValue)
	{
		setValue(aValue);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}

	private void setValue(int aValue)
	{
		myValue = aValue;
	}

	public int getValue()
	{
		return myValue;
	}

	private int myValue;
}
