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

			aMiddleman = Middleman;
			aMiddleman.addProducer(aProducer1);
			aMiddleman.addProducer(aProducer2);
			aMiddleman.addProducer(aProducer3);
			aMiddleman.addProducer(aProducer4);
			aMiddleman.addProducer(aProducer5);
			aMiddleman.addProducer(aProducer6);

			aConsumer = Consumer('Zulu', aMiddleman);

			result = aConsumer;
		end
	end
end
