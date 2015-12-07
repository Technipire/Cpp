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
		
		OutputJourneyVisitor aOutputJourneyVisitor = new OutputJourneyVisitor(aPrintWriter);
		aJourney.accept(aOutputJourneyVisitor);
		aPrintWriter.flush();

		GetNumberOfStopsJourneyVisitor aGetNumberOfStopsJourneyVisitor = new GetNumberOfStopsJourneyVisitor();
		aJourney.accept(aGetNumberOfStopsJourneyVisitor);
		aPrintWriter.println(aGetNumberOfStopsJourneyVisitor.getNumberOfStops());
		aPrintWriter.flush();
	}
}
