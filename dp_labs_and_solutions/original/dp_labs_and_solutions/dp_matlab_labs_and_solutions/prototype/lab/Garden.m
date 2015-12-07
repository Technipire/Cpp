% Garden.m

classdef Garden < handle
	properties (GetAccess = private, SetAccess = public)
		LettuceType % int
	end

	methods
		% constructor:
		function theGarden = Garden(aLettuceType)
			theGarden.LettuceType = aLettuceType;
		end

		function set.LettuceType(theGarden, aLettuceType)
			if aLettuceType ~= 1 && aLettuceType ~= 2
				error('A Garden must have a valid Lettuce type.');
			end

			theGarden.LettuceType = aLettuceType;
		end

		function result = makeLettuce(theGarden)
			if theGarden.LettuceType == 1
				result = ConventionalLettuce(1, 2);
			elseif theGarden.LettuceType == 2
				result = OrganicLettuce(1, 2);
			else
				error('Oops, should never reach this point.');
			end
		end
	end
end
