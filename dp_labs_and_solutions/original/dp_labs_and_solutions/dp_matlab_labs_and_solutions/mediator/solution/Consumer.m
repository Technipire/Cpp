% Consumer.m

classdef Consumer < handle
	properties (GetAccess = public, SetAccess = private)
		Name % string
		Middleman % Middleman
	end

	methods
		% constructor:
		function theConsumer = Consumer(aName, aMiddleman)
			theConsumer.Name = aName;
			theConsumer.Middleman = aMiddleman;
		end

		function consume(theConsumer)
			aProducer = theConsumer.Middleman.chooseProducer;
			if isempty(aProducer)
				error('Invalid aProducer.');
			end

			aProducer.produce;
			fprintf('%s consumes.\n', theConsumer.Name);
		end
	end
end
