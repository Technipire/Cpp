% Garden.m

classdef (Abstract) Garden < handle
	properties (GetAccess = private, SetAccess = public)
		LettucePrototype % Lettuce
	end

	methods (Access = protected)
		% constructor:
		function theGarden = Garden(aLettucePrototype)
			theGarden.LettucePrototype = aLettucePrototype;
		end
	end

	methods
		function set.LettucePrototype(theGarden, aLettucePrototype)
			if isempty(aLettucePrototype)
				error('A Garden must have a valid Lettuce prototype.');
			end

			theGarden.LettucePrototype = aLettucePrototype.clone;
		end
	end

	methods (Sealed)
		function result = makeLettuce(theGarden)
			result = theGarden.LettucePrototype.clone;
		end
	end

	methods (Abstract)
		makeTomato(theGarden)
	end
end
