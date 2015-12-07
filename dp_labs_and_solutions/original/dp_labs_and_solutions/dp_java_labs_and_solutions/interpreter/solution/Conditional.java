// Conditional.java

import java.io.PrintWriter;

public class Conditional extends Ternary
{
	public Conditional(Expression aOperand1, Expression aOperand2, Expression aOperand3)
	{
		super(aOperand1, aOperand2, aOperand3);
	}

	public double getValue(DpMap<String, Double> aMap)
	{
		if (getOperand1() == null)
		{
			throw new DpException("double Conditional.getValue(DpMap<String, Double> aMap) -- getOperand1() == null.");
		}
		double aValue1 = getOperand1().getValue(aMap);

		double result = 0;

		if (aValue1 != 0)
		{
			if (getOperand2() == null)
			{
				throw new DpException("double Conditional.getValue(DpMap<String, Double> aMap) -- getOperand2() == null.");
			}
			result = getOperand2().getValue(aMap);
		}
		else
		{
			if (getOperand3() == null)
			{
				throw new DpException("double Conditional.getValue(DpMap<String, Double> aMap) -- getOperand3() == null.");
			}
			result = getOperand3().getValue(aMap);
		}

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "?", ":");
	}
}
