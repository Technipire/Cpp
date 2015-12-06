% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			result = ConventionalGarden(ConventionalLettuce(1, 2));
		end
	end
end
