% Tomato.m

classdef (Abstract) Tomato < handle
	properties
		Price % int
	end

	methods
		% constructor:
		function theTomato = Tomato(aPrice)
			theTomato.Price = aPrice;
		end
	end
end
