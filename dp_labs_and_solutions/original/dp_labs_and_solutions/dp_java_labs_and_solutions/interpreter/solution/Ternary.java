// Ternary.java

import java.io.PrintWriter;

public abstract class Ternary extends Operator
{
	public Ternary(Expression aOperand1, Expression aOperand2, Expression aOperand3)
	{
		setOperand1(aOperand1);
		setOperand2(aOperand2);
		setOperand3(aOperand3);
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		if (getOperand1() == null)
		{
			throw new DpException("int Ternary.getNumberOfUsesOfVariable(String aName) -- getOperand1() == null.");
		}
		result += getOperand1().getNumberOfUsesOfVariable(aName);
		if (getOperand2() == null)
		{
			throw new DpException("int Ternary.getNumberOfUsesOfVariable(String aName) -- getOperand2() == null.");
		}
		result += getOperand2().getNumberOfUsesOfVariable(aName);
		if (getOperand3() == null)
		{
			throw new DpException("int Ternary.getNumberOfUsesOfVariable(String aName) -- getOperand3() == null.");
		}
		result += getOperand3().getNumberOfUsesOfVariable(aName);

		return result;
	}

	public abstract double getValue(DpMap<String, Double> aMap);

	public abstract void output(PrintWriter aPrintWriter);

	protected void outputInfix(PrintWriter aPrintWriter, String aOperator1, String aOperator2)
	{
		aPrintWriter.print("(");
		if (getOperand1() == null)
		{
			throw new DpException("void Ternary.outputInfix(PrintWriter aPrintWriter, String aOperator1, String aOperator2) -- getOperand1() == null.");
		}
		getOperand1().output(aPrintWriter);
		aPrintWriter.print(aOperator1);
		if (getOperand2() == null)
		{
			throw new DpException("void Ternary.outputInfix(PrintWriter aPrintWriter, String aOperator1, String aOperator2) -- getOperand2() == null.");
		}
		getOperand2().output(aPrintWriter);
		aPrintWriter.print(aOperator2);
		if (getOperand3() == null)
		{
			throw new DpException("void Ternary.outputInfix(PrintWriter aPrintWriter, String aOperator1, String aOperator2) -- getOperand3() == null.");
		}
		getOperand3().output(aPrintWriter);
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

	private void setOperand3(Expression aOperand3)
	{
		myOperand3 = aOperand3;
	}

	public Expression getOperand3()
	{
		return myOperand3;
	}

	private Expression myOperand1;
	private Expression myOperand2;
	private Expression myOperand3;
}
