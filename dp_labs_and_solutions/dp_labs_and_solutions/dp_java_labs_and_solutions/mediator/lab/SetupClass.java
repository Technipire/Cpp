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

		Consumer aConsumer = new Consumer("Zulu");
		aConsumer.addProducer(aProducer1);
		aConsumer.addProducer(aProducer2);
		aConsumer.addProducer(aProducer3);
		aConsumer.addProducer(aProducer4);
		aConsumer.addProducer(aProducer5);
		aConsumer.addProducer(aProducer6);

		return aConsumer;
	}
}
