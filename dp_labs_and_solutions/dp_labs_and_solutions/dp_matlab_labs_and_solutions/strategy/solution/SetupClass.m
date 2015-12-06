% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			result = Packer(SlowCarefulPackingStrategy);
		end
	end
end
