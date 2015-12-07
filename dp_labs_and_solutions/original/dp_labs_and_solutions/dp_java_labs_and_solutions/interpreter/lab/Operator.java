// Operator.java

import java.io.PrintWriter;

public abstract class Operator extends Nonterminal
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract void output(PrintWriter aPrintWriter);
}
