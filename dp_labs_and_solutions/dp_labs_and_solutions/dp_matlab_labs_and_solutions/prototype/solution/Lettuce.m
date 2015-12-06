% Lettuce.m

classdef (Abstract) Lettuce < handle
	properties
		Price % int
	end

	methods
		% constructor:
		function theLettuce = Lettuce(aLettuceOrAPrice)
			if nargin == 1
				if isa(aLettuceOrAPrice, 'Lettuce')
					% Lettuce(aLettuce):
					theLettuce.Price = aLettuceOrAPrice.Price;
				else
					% Lettuce(aPrice):
					theLettuce.Price = aLettuceOrAPrice;
				end
			else
				error('Invalid number of input parameters.');
			end
		end
	end

	methods (Abstract)
		result = clone(theLettuce)
	end
end
