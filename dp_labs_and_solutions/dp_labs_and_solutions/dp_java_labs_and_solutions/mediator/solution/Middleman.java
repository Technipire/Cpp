// Middleman.java

public class Middleman
{
	public Middleman()
	{
		myProducers = new DpVector<Producer>();
	}

	public void addProducer(Producer aProducer)
	{
		if (aProducer == null)
		{
			throw new DpException("void addProducer(Producer aProducer) -- aProducer == null.");
		}

		myProducers.add(aProducer);
	}

	public Producer chooseProducer()
	{
		Producer aLowestBidProducer = null;
		int aLowestBid = 0;

		DpIterator<Producer> aIterator = myProducers.makeIterator();
		while (!aIterator.isDone())
		{
			Producer aProducer = aIterator.getCurrent();
			int aBid = aProducer.getBid();
			if (aLowestBid == 0 || aBid < aLowestBid)
			{
				aLowestBid = aBid;
				aLowestBidProducer = aProducer;
			}
			aIterator.advance();
		}

		return aLowestBidProducer;
	}

	private DpVector<Producer> myProducers;
}
