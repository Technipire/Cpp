% Producer.m

classdef Producer < handle
	properties
		Name % string
	end

	methods
		% constructor:
		function theProducer = Producer(aName)
			theProducer.Name = aName;
		end

		function result = getBid(theProducer)
			result = randi(100);
			fprintf('%s bids %d.\n', theProducer.Name, result);
		end

		function produce(theProducer)
			fprintf('%s produces.\n', theProducer.Name);
		end
	end
end
