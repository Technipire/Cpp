% VariableFlyweightFactory.m

classdef VariableFlyweightFactory < handle
	properties (GetAccess = private, SetAccess = private)
		Map % DpMap
	end

	methods
		function result = getFlyweightFor(theVariableFlyweightFactory, aName)
			if ~theVariableFlyweightFactory.Map.contains(aName)
				theVariableFlyweightFactory.Map.put(aName, Variable(aName));
			end

			result = theVariableFlyweightFactory.Map.get(aName);
		end
	end

	methods (Access = private)
		% constructor:
		function theVariableFlyweightFactory = VariableFlyweightFactory
			theVariableFlyweightFactory.Map = DpMap;
		end
	end

	methods (Static)
		function result = getInstance
			persistent theInstance;
			if isempty(theInstance)
				theInstance = VariableFlyweightFactory;
			end
			result = theInstance;
		end
	end
end
