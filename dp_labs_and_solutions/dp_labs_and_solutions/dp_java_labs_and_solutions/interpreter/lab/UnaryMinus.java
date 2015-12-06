// UnaryMinus.java

import java.io.PrintWriter;

public class UnaryMinus extends Unary
{
	public UnaryMinus(Expression aOperand1)
	{
		super(aOperand1);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputPrefix(aPrintWriter, "-");
	}
}
