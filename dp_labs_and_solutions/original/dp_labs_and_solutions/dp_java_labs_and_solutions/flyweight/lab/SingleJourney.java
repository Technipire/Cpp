// SingleJourney.java

import java.io.*;

public class SingleJourney extends Journey
{
	public SingleJourney(String aAddress)
	{
		if (aAddress == null || aAddress.equals(""))
		{
			throw new DpException("SingleJourney.SingleJourney(String aAddress) -- aAddress == null || aAddress.equals(\"\").");
		}
		myAddress = aAddress;
	}

	public void output(PrintWriter aPrintWriter)
	{
		if (aPrintWriter == null)
		{
			throw new DpException("void SingleJourney.output(PrintWriter aPrintWriter) -- aPrintWriter == null.");
		}

		aPrintWriter.println("single journey to " + myAddress + ".");
	}

	private String myAddress;
}
