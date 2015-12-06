% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			result = DpDriver('Robert');
		end
	end
end
