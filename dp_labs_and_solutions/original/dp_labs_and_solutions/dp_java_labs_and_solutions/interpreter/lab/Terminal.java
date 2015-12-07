// Terminal.java

import java.io.PrintWriter;

public abstract class Terminal extends Expression
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract void output(PrintWriter aPrintWriter);
}
