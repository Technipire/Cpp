// OutputJourneyVisitor.java

import java.io.PrintWriter;

public class OutputJourneyVisitor extends JourneyVisitor
{
	public OutputJourneyVisitor(PrintWriter aPrintWriter)
	{
		if (aPrintWriter == null)
		{
			throw new DpException("OutputJourneyVisitor.OutputJourneyVisitor(PrintWriter aPrintWriter) -- aPrintWriter == null.");
		}

		myPrintWriter = aPrintWriter;
	}

	public void visit(MultipleJourney aMultipleJourney)
	{
		myPrintWriter.println("multiple journey to " + aMultipleJourney.getName() + ":");
		DpIterator<Journey> aIterator = aMultipleJourney.getJourneys();
		while (!aIterator.isDone())
		{
			Journey aJourney = aIterator.getCurrent();
			if (aJourney == null)
			{
				throw new DpException("void MultipleJourney.output(PrintWriter aPrintWriter) -- aJourney == null.");
			}
			aJourney.accept(this);
			aIterator.advance();
		}
	}

	public void visit(SingleJourney aSingleJourney)
	{
		myPrintWriter.println("single journey to " + aSingleJourney.getAddress() + ".");
	}

	private PrintWriter myPrintWriter;
}
