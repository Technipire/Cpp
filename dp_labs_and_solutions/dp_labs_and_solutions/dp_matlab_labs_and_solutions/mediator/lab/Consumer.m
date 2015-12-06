% Consumer.m

classdef Consumer < handle
	properties (GetAccess = public, SetAccess = private)
		Name % string
		Producers % DpVector of Producer
	end

	methods
		% constructor:
		function theConsumer = Consumer(aName)
			theConsumer.Name = aName;
			theConsumer.Producers = DpVector;
		end

		function addProducer(theConsumer, aProducer)
			if isempty(aProducer)
				error('Invalid aProducer.');
			end

			theConsumer.Producers.add(aProducer);
		end

		function result = chooseProducer(theConsumer)
			aLowestBidProducer = Producer.empty;
			aLowestBid = 0;
			aIterator = theConsumer.Producers.makeIterator;
			while ~aIterator.isDone
				aProducer = aIterator.getCurrent;
				aBid = aProducer.getBid;
				if (aLowestBid == 0) || (aBid < aLowestBid)
					aLowestBid = aBid;
					aLowestBidProducer = aProducer;
				end
				aIterator.advance;
			end
			result = aLowestBidProducer;
		end

		function consume(theConsumer)
			aProducer = theConsumer.chooseProducer;
			if isempty(aProducer)
				error('Invalid aProducer.');
			end

			aProducer.produce;
			fprintf('%s consumes.\n', theConsumer.Name);
		end
	end
end
