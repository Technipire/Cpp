// UseClass.java

import java.io.*;

public class UseClass
{
	public static void use(Journey aJourney)
	{
		if (aJourney == null)
		{
			throw new DpException("void UseClass.use(Journey aJourney) -- aJourney == null.");
		}

		OutputStreamWriter aOutputStreamWriter = new OutputStreamWriter(System.out);
		BufferedWriter aBufferedWriter = new BufferedWriter(aOutputStreamWriter);
		PrintWriter aPrintWriter = new PrintWriter(aBufferedWriter);
        
		aJourney.output(aPrintWriter);
		aPrintWriter.flush();

		aPrintWriter.println(aJourney.getNumberOfStops());
		aPrintWriter.flush();
	}
}
