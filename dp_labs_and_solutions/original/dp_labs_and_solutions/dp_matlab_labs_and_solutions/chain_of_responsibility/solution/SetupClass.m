% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			result = ...
				CustomerServiceRepresentative( ...
					CustomerServiceSupervisor( ...
						CustomerServiceManager));
		end
	end
end
