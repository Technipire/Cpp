// Binary.java

import java.io.PrintWriter;

public abstract class Binary extends Operator
{
	public Binary(Expression aOperand1, Expression aOperand2)
	{
		setOperand1(aOperand1);
		setOperand2(aOperand2);
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		if (getOperand1() == null)
		{
			throw new DpException("void Binary.getNumberOfUsesOfVariable(String aName) -- getOperand1() == null.");
		}
		result += getOperand1().getNumberOfUsesOfVariable(aName);
		if (getOperand2() == null)
		{
			throw new DpException("void Binary.getNumberOfUsesOfVariable(String aName) -- getOperand2() == null.");
		}
		result += getOperand2().getNumberOfUsesOfVariable(aName);

		return result;
	}

	public abstract void output(PrintWriter aPrintWriter);

	protected void outputInfix(PrintWriter aPrintWriter, String aOperator)
	{
		aPrintWriter.print("(");
		if (getOperand1() == null)
		{
			throw new DpException("void Binary.outputInfix(PrintWriter aPrintWriter, String aOperator) -- getOperand1() == null.");
		}
		getOperand1().output(aPrintWriter);
		aPrintWriter.print(aOperator);
		if (getOperand2() == null)
		{
			throw new DpException("void Binary.outputInfix(PrintWriter aPrintWriter, String aOperator) -- getOperand2() == null.");
		}
		getOperand2().output(aPrintWriter);
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

	private void setOperand2(Expression aOperand2)
	{
		myOperand2 = aOperand2;
	}

	public Expression getOperand2()
	{
		return myOperand2;
	}

	private Expression myOperand1;
	private Expression myOperand2;
}
