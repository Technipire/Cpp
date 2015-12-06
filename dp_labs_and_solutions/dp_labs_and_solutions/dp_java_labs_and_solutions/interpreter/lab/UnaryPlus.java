// UnaryPlus.java

import java.io.PrintWriter;

public class UnaryPlus extends Unary
{
	public UnaryPlus(Expression aOperand1)
	{
		super(aOperand1);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputPrefix(aPrintWriter, "+");
	}
}
