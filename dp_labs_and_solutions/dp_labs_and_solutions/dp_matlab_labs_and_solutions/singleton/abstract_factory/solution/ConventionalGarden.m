% ConventionalGarden.m

classdef ConventionalGarden < Garden
	methods (Access = { ?Garden })
		% constructor:
		function theConventionalGarden = ConventionalGarden(aLettucePrototype)
			theConventionalGarden@Garden(aLettucePrototype);
		end
	end

	methods
		function result = makeTomato(theGarden)
			result = ConventionalTomato(1, 2);
		end
	end
end
