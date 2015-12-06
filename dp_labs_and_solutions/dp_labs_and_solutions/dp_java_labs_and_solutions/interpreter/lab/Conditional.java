// Conditional.java

import java.io.PrintWriter;

public class Conditional extends Ternary
{
	public Conditional(Expression aOperand1, Expression aOperand2, Expression aOperand3)
	{
		super(aOperand1, aOperand2, aOperand3);
	}

	public void output(PrintWriter aPrintWriter)
	{
		outputInfix(aPrintWriter, "?", ":");
	}
}
