% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			result = Garden(ConventionalLettuce(1, 2));
		end
	end
end
