% CoffeeWithoutMilkWithSugar.m

classdef CoffeeWithoutMilkWithSugar < CoffeeWithoutMilk
	methods
		function prepare(theCoffeeWithoutMilkWithSugar)
			prepare@CoffeeWithoutMilk(theCoffeeWithoutMilkWithSugar);
			fprintf('Adding sugar.\n');
		end
	end
end
