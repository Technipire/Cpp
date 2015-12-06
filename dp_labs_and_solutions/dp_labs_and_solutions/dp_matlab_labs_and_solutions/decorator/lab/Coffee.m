% Coffee.m

classdef (Abstract) Coffee < handle
	methods
		function prepare(theCoffee)
			fprintf('Brewing coffee.\n');
		end
	end
end
