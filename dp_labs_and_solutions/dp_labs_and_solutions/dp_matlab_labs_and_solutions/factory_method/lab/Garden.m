% Garden.m

classdef Garden < handle
	properties
		TomatoType % int
	end

	methods
		% constructor:
		function theGarden = Garden(aTomatoType)
			theGarden.TomatoType = aTomatoType;
		end

		function set.TomatoType(theGarden, aTomatoType)
			if aTomatoType ~= 1 && aTomatoType ~= 2
				error('A Garden must have a valid Tomato type.');
			end

			theGarden.TomatoType = aTomatoType;
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
