// Variable.java

public class Variable extends Terminal
{
	public Variable(String aName)
	{
		setName(aName);
	}

	public void accept(ExpressionVisitor aExpressionVisitor)
	{
		aExpressionVisitor.visit(this);
	}

	private void setName(String aName)
	{
		myName = aName;
	}

	public String getName()
	{
		return myName;
	}

	private String myName;
}
