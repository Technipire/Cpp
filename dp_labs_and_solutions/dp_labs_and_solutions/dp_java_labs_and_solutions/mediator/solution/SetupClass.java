// SetupClass.java

public class SetupClass
{
	public static Consumer setup()
	{
		Producer aProducer1 = new Producer("Alpha");
		Producer aProducer2 = new Producer("Bravo");
		Producer aProducer3 = new Producer("Charlie");
		Producer aProducer4 = new Producer("Delta");
		Producer aProducer5 = new Producer("Echo");
		Producer aProducer6 = new Producer("Foxtrot");

		Middleman aMiddleman = new Middleman();
		aMiddleman.addProducer(aProducer1);
		aMiddleman.addProducer(aProducer2);
		aMiddleman.addProducer(aProducer3);
		aMiddleman.addProducer(aProducer4);
		aMiddleman.addProducer(aProducer5);
		aMiddleman.addProducer(aProducer6);

		Consumer aConsumer = new Consumer("Zulu", aMiddleman);

		return aConsumer;
	}
}
