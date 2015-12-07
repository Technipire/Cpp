% With.m

classdef (Abstract) With < Beverage
	properties (GetAccess = private, SetAccess = private)
		Successor % Beverage
	end

	methods
		% constructor:
		function theWith = With(aSuccessor)
			theWith.Successor = aSuccessor;
		end
	
		function prepare(theWith)
			theWith.Successor.prepare;
		end

		function set.Successor(theWith, aSuccessor)
			if isempty(aSuccessor)
				% throw an exception.
			end
			theWith.Successor = aSuccessor;
		end
	end
end
