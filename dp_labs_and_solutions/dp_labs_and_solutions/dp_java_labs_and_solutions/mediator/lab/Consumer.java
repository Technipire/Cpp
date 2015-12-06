// Consumer.java

public class Consumer
{
	public Consumer(String aName)
	{
		myName = aName;
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

	public void consume()
	{
		Producer aProducer = chooseProducer();
		if (aProducer == null)
		{
			throw new DpException("void consume() -- aProducer == null.");
		}

		aProducer.produce();
		System.out.println(myName + " consumes.");
	}

	private String myName;
	private DpVector<Producer> myProducers;
}
