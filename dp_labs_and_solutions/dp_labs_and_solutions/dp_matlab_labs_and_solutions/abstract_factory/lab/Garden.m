% Garden.m

classdef Garden < handle
	properties
		LettuceType % int
		TomatoType % int
	end

	methods
		% constructor:
		function theGarden = Garden(aLettuceType, aTomatoType)
			theGarden.LettuceType = aLettuceType;
			theGarden.TomatoType = aTomatoType;
		end

		function set.LettuceType(theGarden, aLettuceType)
			if aLettuceType ~= 1 && aLettuceType ~= 2
				error('A Garden must have a valid Lettuce type.');
			end

			theGarden.LettuceType = aLettuceType;
		end

		function set.TomatoType(theGarden, aTomatoType)
			if aTomatoType ~= 1 && aTomatoType ~= 2
				error('A Garden must have a valid Tomato type.');
			end

			theGarden.TomatoType = aTomatoType;
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

		function result = makeTomato(theGarden)
			if theGarden.TomatoType == 1
				result = ConventionalTomato(1, 2);
			elseif theGarden.TomatoType == 2
				result = OrganicTomato(1, 2);
			else
				error('Oops, should never reach this point.');
			end
		end
	end
end
