// Terminal.java

import java.io.PrintWriter;

public abstract class Terminal extends Expression
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract double getValue(DpMap<String, Double> aMap);

	public abstract void output(PrintWriter aPrintWriter);
}
