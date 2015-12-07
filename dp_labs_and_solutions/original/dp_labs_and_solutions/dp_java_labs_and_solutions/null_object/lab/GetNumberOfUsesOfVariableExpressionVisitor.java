// GetNumberOfUsesOfVariableExpressionVisitor.java

public class GetNumberOfUsesOfVariableExpressionVisitor extends ExpressionVisitor
{
	public GetNumberOfUsesOfVariableExpressionVisitor(String aName)
	{
		myName = aName;
		myNumberOfUsesOfVariable = 0;
	}

	public void visit(Variable aVariable)
	{
		if (aVariable.getName().equals(myName))
		{
			++myNumberOfUsesOfVariable;
		}
	}

	public int getNumberOfUsesOfVariable()
	{
		return myNumberOfUsesOfVariable;
	}

	private String myName;
	private int myNumberOfUsesOfVariable;
}
