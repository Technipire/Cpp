// Divide.java

import java.io.PrintWriter;

public class Divide extends Binary
{
	public Divide(Expression aOperand1, Expression aOperand2)
	{
		super(aOperand1, aOperand2);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "/");
	}
}
