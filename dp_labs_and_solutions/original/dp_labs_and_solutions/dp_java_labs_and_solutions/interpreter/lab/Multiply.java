// Multiply.java

import java.io.PrintWriter;

public class Multiply extends Binary
{
	public Multiply(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "*");
	}
}
