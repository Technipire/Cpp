% Middleman.m

classdef Middleman < handle
	properties (GetAccess = private, SetAccess = private)
		Producers % DpVector of Producer
	end

	methods
		% constructor:
		function theMiddleman = Middleman
			theMiddleman.Producers = DpVector;
		end

		function addProducer(theMiddleman, aProducer)
			if isempty(aProducer)
				error('Invalid aProducer.');
			end

			theMiddleman.Producers.add(aProducer);
		end

		function result = chooseProducer(theMiddleman)
			aLowestBidProducer = Producer.empty;
			aLowestBid = 0;
			aIterator = theMiddleman.Producers.makeIterator;
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
	end
end
