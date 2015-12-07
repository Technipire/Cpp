% ConventionalGarden.m

classdef ConventionalGarden < Garden
	methods
		% constructor:
		function theConventionalGarden = ConventionalGarden(aLettucePrototype)
			if ~isa(aLettucePrototype, 'ConventionalLettuce')
				error('An ConventionalGarden must have a ConventionalLettuce prototype.');
			end
			theConventionalGarden@Garden(aLettucePrototype);
		end

		function result = makeTomato(theGarden)
			result = ConventionalTomato(1, 2);
		end
	end
end
