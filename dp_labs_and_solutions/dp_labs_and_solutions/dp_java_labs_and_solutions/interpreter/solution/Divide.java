// Divide.java

import java.io.PrintWriter;

public class Divide extends Binary
{
	public Divide(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public double getValue(DpMap<String, Double> aMap)
	{
		if (getOperand1() == null)
		{
			throw new DpException("double Divide.getValue(DpMap<String, Double> aMap) -- getOperand1() == NULL.");
		}
		double aValue1 = getOperand1().getValue(aMap);

		if (getOperand2() == null)
		{
			throw new DpException("double Divide.getValue(DpMap<String, Double> aMap) -- getOperand2() == NULL.");
		}
		double aValue2 = getOperand2().getValue(aMap);

		if (aValue2 == 0)
		{
			// throw an exception.
		}
		
		double result = aValue1 / aValue2;

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "/");
	}
}
