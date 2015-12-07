// Operator.java

import java.io.PrintWriter;

public abstract class Operator extends Nonterminal
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract double getValue(DpMap<String, Double> aMap);

	public abstract void output(PrintWriter aPrintWriter);
}
