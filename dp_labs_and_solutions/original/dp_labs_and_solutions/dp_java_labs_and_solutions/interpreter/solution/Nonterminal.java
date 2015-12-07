// Nonterminal.java

import java.io.PrintWriter;

public abstract class Nonterminal extends Expression
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract double getValue(DpMap<String, Double> aMap);

	public abstract void output(PrintWriter aPrintWriter);
}
