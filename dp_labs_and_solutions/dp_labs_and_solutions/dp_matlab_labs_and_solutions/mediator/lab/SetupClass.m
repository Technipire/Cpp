% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aProducer1 = Producer('Alpha');
			aProducer2 = Producer('Bravo');
			aProducer3 = Producer('Charlie');
			aProducer4 = Producer('Delta');
			aProducer5 = Producer('Echo');
			aProducer6 = Producer('Foxtrot');

			aConsumer = Consumer('Zulu');
			aConsumer.addProducer(aProducer1);
			aConsumer.addProducer(aProducer2);
			aConsumer.addProducer(aProducer3);
			aConsumer.addProducer(aProducer4);
			aConsumer.addProducer(aProducer5);
			aConsumer.addProducer(aProducer6);

			result = aConsumer;
		end
	end
end
