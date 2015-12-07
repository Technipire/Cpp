// MultipleJourney.java

import java.io.*;

public class MultipleJourney extends Journey
{
	public MultipleJourney(String aName)
	{
		if (aName == null || aName.equals(""))
		{
			throw new DpException("MultipleJourney.MultipleJourney(String aName) -- aName == null || aName.equals(\"\").");
		}
		myName     = aName;
		myJourneys = new DpVector<Journey>();
	}

	public void output(PrintWriter aPrintWriter)
	{
		if (aPrintWriter == null)
		{
			throw new DpException("void MultipleJourney.output(PrintWriter aPrintWriter) -- aPrintWriter == null.");
		}
        
		aPrintWriter.println("multiple journey to " + myName + ":");
		DpIterator<Journey> aIterator = getJourneys();
		while (!aIterator.isDone())
		{
			Journey aJourney = aIterator.getCurrent();
			if (aJourney == null)
			{
				throw new DpException("void MultipleJourney.output(PrintWriter aPrintWriter) -- aJourney == null.");
			}
			aJourney.output(aPrintWriter);
			aIterator.advance();
		}
	}
    
	public void addJourney(Journey aJourney)
	{
		if (aJourney == null)
		{
			throw new DpException("void MultipleJourney.add(Journey aJourney) -- aJourney == null.");
		}
		myJourneys.add(aJourney);
	}

	public DpIterator<Journey> getJourneys()
	{
		return myJourneys.makeIterator();
	}

	private String            myName;
	private DpVector<Journey> myJourneys;
}
