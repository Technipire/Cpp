% ConventionalGarden.m

classdef ConventionalGarden < Garden
	methods
		% constructor:
		function theConventionalGarden = ConventionalGarden(aLettucePrototype)
			theConventionalGarden@Garden(aLettucePrototype);
		end

		function result = makeTomato(theGarden)
			result = ConventionalTomato(1, 2);
		end
	end
end
