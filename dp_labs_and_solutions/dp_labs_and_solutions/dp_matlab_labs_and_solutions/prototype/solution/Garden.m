% Garden.m

classdef Garden < handle
	properties (GetAccess = private, SetAccess = public)
		LettucePrototype % Lettuce
	end

	methods
		% constructor:
		function theGarden = Garden(aLettucePrototype)
			theGarden.LettucePrototype = aLettucePrototype;
		end

		function set.LettucePrototype(theGarden, aLettucePrototype)
			if isempty(aLettucePrototype)
				error('A Garden must have a valid Lettuce prototype.');
			end

			theGarden.LettucePrototype = aLettucePrototype.clone;
		end

		function result = makeLettuce(theGarden)
			result = theGarden.LettucePrototype.clone;
		end
	end
end
