% Garden.m

classdef (Abstract) Garden < handle
% Singleton:

	methods (Static)
		function result = getInstance
			persistent theInstance;
			if isempty(theInstance)
				if true
					theInstance = ConventionalGarden(ConventionalLettuce(1, 2));
				else
					theInstance = OrganicGarden(OrganicLettuce(1, 2));
				end
			end
			result = theInstance;
		end
	end

% non-Singleton:

	properties
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

		function result = makeLettuce(theGarden)
			result = theGarden.LettucePrototype.clone;
		end
	end

	methods (Abstract)
		makeTomato(theGarden)
	end
end
