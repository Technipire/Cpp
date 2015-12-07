% OrganicGarden.m

classdef OrganicGarden < Garden
	methods
		% constructor:
		function theOrganicGarden = OrganicGarden(aLettucePrototype)
			theOrganicGarden@Garden(aLettucePrototype);
		end

		function result = makeTomato(theGarden)
			result = OrganicTomato(1, 2);
		end
	end
end
