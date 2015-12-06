% OrganicGarden.m

classdef OrganicGarden < Garden
	methods (Access = { ?Garden })
		% constructor:
		function theOrganicGarden = OrganicGarden(aLettucePrototype)
			theOrganicGarden@Garden(aLettucePrototype);
		end
	end

	methods
		function result = makeTomato(theGarden)
			result = OrganicTomato(1, 2);
		end
	end
end
