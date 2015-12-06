// MethodInvocation.java

import java.io.PrintWriter;

public class MethodInvocation extends Nonterminal
{
	public MethodInvocation(String aName)
	{
		setName(aName);
		myOperands = new DpVector<Expression>();
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		DpIterator<Expression> aIterator = getOperands();
		while (!aIterator.isDone())
		{
			Expression aOperand = aIterator.getCurrent();
			if (aOperand == null)
			{
				throw new DpException("int MethodInvocation.getNumberOfUsesOfVariable(String aName) -- aOperand == null.");
			}
			result += aOperand.getNumberOfUsesOfVariable(aName);
			aIterator.advance();
		}

		return result;
	}

	public double getValue(DpMap<String, Double> aMap)
	{
		double result = 0;

		if (getName().equals("sqrt"))
		{
			DpIterator<Expression> aIterator = getOperands();
			Expression aOperand1 = aIterator.getCurrent();
			if (aOperand1 == null)
			{
				throw new DpException("double MethodInvocation.getValue(DpMap<String, Double> aMap) -- aOperand1 == null.");
			}
			double aValue1 = aOperand1.getValue(aMap);

			result = Math.sqrt(aValue1);
		}
		else
		{
			throw new DpException("double MethodInvocation.getValue(DpMap<String, Double> aMap) -- unsupported method name.");
		}

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		aPrintWriter.print(getName());
		aPrintWriter.print("(");
		boolean isFirst = true;
		DpIterator<Expression> aIterator = getOperands();
		while (!aIterator.isDone())
		{
			if (isFirst)
			{
				isFirst = false;
			}
			else
			{
				aPrintWriter.print(",");
			}
			Expression aOperand1 = aIterator.getCurrent();
			if (aOperand1 == null)
			{
				throw new DpException("void MethodInvocation.output(PrintWriter aPrintWriter) -- aOperand1 == null.");
			}
			aOperand1.output(aPrintWriter);
			aIterator.advance();
		}
		aPrintWriter.print(")");
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
