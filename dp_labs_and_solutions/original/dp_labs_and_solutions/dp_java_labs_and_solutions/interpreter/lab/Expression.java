// Expression.java

import java.io.PrintWriter;

public abstract class Expression
{
	public abstract int getNumberOfUsesOfVariable(String aName);

	public abstract void output(PrintWriter aPrintWriter);
}
