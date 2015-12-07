// UnaryPlus.java

import java.io.PrintWriter;

public class UnaryPlus extends Unary
{
	public UnaryPlus(Expression aOperand1)
	{
		super(aOperand1);
	}

	public double getValue(DpMap<String, Double> aMap)
	{
		if (getOperand1() == null)
		{
			throw new DpException("void UnaryPlus.getValue(DpMap<String, Double> aMap) -- getOperand1() == null.");
		}
		double aValue1 = getOperand1().getValue(aMap);

		double result = + aValue1;

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputPrefix(aPrintWriter, "+");
	}
}