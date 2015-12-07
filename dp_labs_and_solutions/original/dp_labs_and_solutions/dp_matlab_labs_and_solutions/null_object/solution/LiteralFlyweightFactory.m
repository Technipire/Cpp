% LiteralFlyweightFactory.m

classdef LiteralFlyweightFactory < handle
	properties (GetAccess = private, SetAccess = private)
		Map % DpMap
	end

	methods
		function result = getFlyweightFor(theLiteralFlyweightFactory, aValue)
			if ~theLiteralFlyweightFactory.Map.contains(aValue)
				theLiteralFlyweightFactory.Map.put(aValue, Literal(aValue));
			end

			result = theLiteralFlyweightFactory.Map.get(aValue);
		end
	end

	methods (Access = private)
		% constructor:
		function theLiteralFlyweightFactory = LiteralFlyweightFactory
			theLiteralFlyweightFactory.Map = DpMap;
		end
	end

	methods (Static)
		function result = getInstance
			persistent theInstance;
			if isempty(theInstance)
				theInstance = LiteralFlyweightFactory;
			end
			result = theInstance;
		end
	end
end
