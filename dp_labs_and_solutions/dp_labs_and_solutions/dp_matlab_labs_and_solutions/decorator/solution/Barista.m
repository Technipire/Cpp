% Barista.m

classdef Barista < handle
	methods
		function result = makeBeverage(theBarista, aDescription)
			result = []; % when we add exceptions, we can remove this.

			if (aDescription.getSize == 0)
				% throw an exception.
			end
	
			if ~strcmp(aDescription.get(1), 'coffee')
				% throw an exception.
			end
	
			result = Coffee;
	
			for i = 2:aDescription.getSize
				if strcmp(aDescription.get(i), 'milk')
					result = WithMilk(result);
				elseif strcmp(aDescription.get(i), 'sugar')
					result = WithSugar(result);
				else
					% throw an exception.
				end
			end
		end
	end
end
