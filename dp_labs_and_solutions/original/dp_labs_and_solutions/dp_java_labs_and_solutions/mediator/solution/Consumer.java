// Consumer.java

public class Consumer
{
	public Consumer(String aName, Middleman aMiddleman)
	{
		myName = aName;
		myMiddleman = aMiddleman;
	}

	public void consume()
	{
		Producer aProducer = myMiddleman.chooseProducer();
		if (aProducer == null)
		{
			throw new DpException("void consume() -- aProducer == null.");
		}
		
		aProducer.produce();
		System.out.println(myName + " consumes.");
	}

	private String myName;
	private Middleman myMiddleman;
}
