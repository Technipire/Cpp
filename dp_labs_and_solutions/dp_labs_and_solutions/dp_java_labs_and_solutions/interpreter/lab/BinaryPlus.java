// BinaryPlus.java

import java.io.PrintWriter;

public class BinaryPlus extends Binary
{
	public BinaryPlus(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "+");
	}
}
