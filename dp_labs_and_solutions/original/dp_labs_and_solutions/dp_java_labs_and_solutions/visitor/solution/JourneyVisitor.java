// JourneyVisitor.java

public abstract class JourneyVisitor
{
	public void visit(MultipleJourney aMultipleJourney)
	{
		DpIterator<Journey> aIterator = aMultipleJourney.getJourneys();
		while (!aIterator.isDone())
		{
			Journey aJourney = aIterator.getCurrent();
			if (aJourney == null)
			{
				throw new DpException("void JourneyVisitor.visit(MultipleJourney aMultipleJourney) -- aJourney == null.");
			}
			aJourney.accept(this);
			aIterator.advance();
		}
	}

	public void visit(SingleJourney aSingleJourney)
	{
	}
}
