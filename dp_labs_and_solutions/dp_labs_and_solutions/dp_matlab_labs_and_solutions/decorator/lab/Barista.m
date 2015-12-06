% Barista.m

classdef Barista < handle
	methods
		function result = makeCoffee(theBarista, aDescription)
			result = []; % when we add exceptions, we can remove this.

			switch aDescription.getSize
				case 1
					if strcmp(aDescription.get(1), 'coffee')
						result = CoffeeWithoutMilkWithoutSugar;
					else
						% throw an exception.
					end
				case 2
					if strcmp(aDescription.get(1), 'coffee')
						if strcmp(aDescription.get(2), 'milk')
							result = CoffeeWithMilkWithoutSugar;
						elseif strcmp(aDescription.get(2), 'sugar')
							result = CoffeeWithoutMilkWithSugar;
						else
							% throw an exception.
						end
					else
						% throw an exception.
					end
				case 3
					if strcmp(aDescription.get(1), 'coffee')
						if strcmp(aDescription.get(2), 'milk')
							if strcmp(aDescription.get(3), 'sugar')
								result = CoffeeWithMilkWithSugar;
							else
								% throw an exception.
							end
						elseif strcmp(aDescription.get(2), 'sugar')
							if strcmp(aDescription.get(3), 'milk')
								result = CoffeeWithMilkWithSugar;
							else
								% throw an exception.
							end
						else
							% throw an exception.
						end
					else
						% throw an exception.
					end
				otherwise
					% throw an exception.
			end
		end
	end
end
