// Literal.java

import java.io.PrintWriter;

public class Literal extends Terminal
{
	public Literal(int aValue)
	{
		setValue(aValue);
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		aPrintWriter.print(getValue());
	}

	private void setValue(int aValue)
	{
		myValue = aValue;
	}

	public int getValue()
	{
		return myValue;
	}

	private int myValue;
}
