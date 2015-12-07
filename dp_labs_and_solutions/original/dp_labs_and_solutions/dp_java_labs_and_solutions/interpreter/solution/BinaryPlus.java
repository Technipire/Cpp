// BinaryPlus.java

import java.io.PrintWriter;

public class BinaryPlus extends Binary
{
	public BinaryPlus(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public double getValue(DpMap<String, Double> aMap)
	{
		if (getOperand1() == null)
		{
			throw new DpException("double BinaryPlus.getValue(DpMap<String, Double> aMap) -- getOperand1() == null.");
		}
		double aValue1 = getOperand1().getValue(aMap);

		if (getOperand2() == null)
		{
			throw new DpException("double BinaryPlus.getValue(DpMap<String, Double> aMap) -- getOperand2() == null.");
		}
		double aValue2 = getOperand2().getValue(aMap);

		double result = aValue1 + aValue2;

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "+");
	}
}
