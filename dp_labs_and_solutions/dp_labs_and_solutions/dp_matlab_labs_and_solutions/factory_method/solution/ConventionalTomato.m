% ConventionalTomato.m

classdef ConventionalTomato < Tomato
	properties
		NumberOfPesticides % int
	end

	methods
		% constructor:
		function theConventionalTomato = ConventionalTomato(aPrice, aNumberOfPesticides)
			if nargin == 2
				% ConventionalTomato(aPrice, aNumberOfPesticides):
				localAPrice                = aPrice;
				localANumberOfPesticides = aNumberOfPesticides;
			elseif nargin == 1
				% ConventionalTomato(aPrice):
				localAPrice                = aPrice;
				localANumberOfPesticides = 0; % the default value.
			end

			theConventionalTomato@Tomato(localAPrice);

			theConventionalTomato.NumberOfPesticides = localANumberOfPesticides;
		end
	end
end
