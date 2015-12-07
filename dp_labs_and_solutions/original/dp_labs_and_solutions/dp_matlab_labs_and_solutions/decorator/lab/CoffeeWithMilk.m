% CoffeeWithMilk.m

classdef (Abstract) CoffeeWithMilk < Coffee
	methods
		function prepare(theCoffeeWithMilk)
			prepare@Coffee(theCoffeeWithMilk);
			fprintf('Adding milk.\n');
		end
	end
end
