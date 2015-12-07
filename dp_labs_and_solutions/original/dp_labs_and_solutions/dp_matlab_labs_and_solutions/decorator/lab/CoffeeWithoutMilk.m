% CoffeeWithoutMilk.m

classdef (Abstract) CoffeeWithoutMilk < Coffee
	methods
		function prepare(theCoffeeWithoutMilk)
			prepare@Coffee(theCoffeeWithoutMilk);
		end
	end
end
