// Unary.java

import java.io.PrintWriter;

public abstract class Unary extends Operator
{
	public Unary(Expression aOperand1)
	{
		setOperand1(aOperand1);
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		if (getOperand1() == null)
		{
			throw new DpException("int Unary.getNumberOfUsesOfVariable(String aName) -- getOperand1() == null.");
		}
		result += getOperand1().getNumberOfUsesOfVariable(aName);

		return result;
	}

	public abstract void output(PrintWriter aPrintWriter);

	protected void outputPrefix(PrintWriter aPrintWriter, String aOperator)
	{
		aPrintWriter.print("(");
		aPrintWriter.print(aOperator);
		if (getOperand1() == null)
		{
			throw new DpException("void Unary.outputPrefix(PrintWriter aPrintWriter, String aOperator) -- getOperand1() == null.");
		}
		getOperand1().output(aPrintWriter);
		aPrintWriter.print(")");
	}

	protected void outputPostfix(PrintWriter aPrintWriter, String aOperator)
	{
		aPrintWriter.print("(");
		if (getOperand1() == null)
		{
			throw new DpException("void Unary.outputPostfix(PrintWriter aPrintWriter, String aOperator) -- getOperand1() == null.");
		}
		getOperand1().output(aPrintWriter);
		aPrintWriter.print(aOperator);
		aPrintWriter.print(")");
	}

	private void setOperand1(Expression aOperand1)
	{
		myOperand1 = aOperand1;
	}

	public Expression getOperand1()
	{
		return myOperand1;
	}

	private Expression myOperand1;
}
