// Variable.java

import java.io.PrintWriter;

public class Variable extends Terminal
{
	public Variable(String aName)
	{
		setName(aName);
	}

	public int getNumberOfUsesOfVariable(String aName)
	{
		int result = 0;

		if (getName().equals(aName))
		{
			result = 1;
		}
		else
		{
			result = 0;
		}

		return result;
	}

	public void output(PrintWriter aPrintWriter)
	{
		aPrintWriter.print(getName());
	}

	private void setName(String aName)
	{
		myName = aName;
	}

	public String getName()
	{
		return myName;
	}

	private String myName;
}
