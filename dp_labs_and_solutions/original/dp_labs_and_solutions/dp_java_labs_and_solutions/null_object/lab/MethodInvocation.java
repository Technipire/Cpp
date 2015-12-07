// MethodInvocation.java

public class MethodInvocation extends Nonterminal
{
	public MethodInvocation(String aName)
	{
		setName(aName);
		myOperands = new DpVector<Expression>();
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

	public void addOperand(Expression aOperand)
	{
		myOperands.add(aOperand);
	}

	public DpIterator<Expression> getOperands()
	{
		return myOperands.makeIterator();
	}

	private String myName;
	private DpVector<Expression> myOperands;
}
