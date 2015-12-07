% CoffeeWithMilkWithSugar.m

classdef CoffeeWithMilkWithSugar < CoffeeWithMilk
	methods
		function prepare(theCoffeeWithMilkWithSugar)
			prepare@CoffeeWithMilk(theCoffeeWithMilkWithSugar);
			fprintf('Adding sugar.\n');
		end
	end
end
