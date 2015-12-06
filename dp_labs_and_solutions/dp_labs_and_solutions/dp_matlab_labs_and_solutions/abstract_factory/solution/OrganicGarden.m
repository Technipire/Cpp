% OrganicGarden.m

classdef OrganicGarden < Garden
	methods
		% constructor:
		function theOrganicGarden = OrganicGarden(aLettucePrototype)
			if ~isa(aLettucePrototype, 'OrganicLettuce')
				error('An OrganicGarden must have an OrganicLettuce prototype.');
			end
			theOrganicGarden@Garden(aLettucePrototype);
		end

		function result = makeTomato(theGarden)
			result = OrganicTomato(1, 2);
		end
	end
end
