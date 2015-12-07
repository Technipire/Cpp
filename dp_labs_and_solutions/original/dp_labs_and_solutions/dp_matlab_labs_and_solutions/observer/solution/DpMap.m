% DpMap.m

classdef DpMap < handle
	properties (GetAccess = private, SetAccess = private)
		List % DpList of DpPair
	end

	methods
		% constructor:
		function theDpMap = DpMap
			theDpMap.List = DpList;
		end

		function put(theDpMap, aKey, aValue)
			theDpMap.List.add(DpPair(aKey, aValue));
		end

		function result = contains(theDpMap, aKey)
			aIterator = theDpMap.List.makeIterator;
			while ~aIterator.isDone
				aPair = aIterator.getCurrent;
				if isa(aPair.First, 'char') && isa(aKey, 'char') && strcmp(aPair.First, aKey)
					result = true;
					return;
				elseif ~isa(aPair.First, 'char') && ~isa(aKey, 'char') && aPair.First == aKey
					result = true;
					return;
				end
				aIterator.advance;
			end
			result = false;
		end

		function result = get(theDpMap, aKey)
			aIterator = theDpMap.List.makeIterator;
			while ~aIterator.isDone
				aPair = aIterator.getCurrent;
				if isa(aPair.First, 'char') && isa(aKey, 'char') && strcmp(aPair.First, aKey)
					result = aPair.Second;
					return;
				elseif ~isa(aPair.First, 'char') && ~isa(aKey, 'char') && aPair.First == aKey
					result = aPair.Second;
					return;
				end
				aIterator.advance;
			end
			result = {}; % value_type.empty;
		end
	end
end
