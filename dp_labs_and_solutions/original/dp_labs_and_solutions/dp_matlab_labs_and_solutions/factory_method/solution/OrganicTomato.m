% OrganicTomato.m

classdef OrganicTomato < Tomato
	properties
		NumberOfInsects % int
	end

	methods
		% constructor:
		function theOrganicTomato = OrganicTomato(aPrice, aNumberOfInsects)
			if nargin == 2
				% OrganicTomato(aPrice, aNumberOfInsects):
				localAPrice             = aPrice;
				localANumberOfInsects = aNumberOfInsects;
			elseif nargin == 1
				% OrganicTomato(aPrice):
				localAPrice             = aPrice;
				localANumberOfInsects = 0; % the default value.
			end

			theOrganicTomato@Tomato(localAPrice);

			theOrganicTomato.NumberOfInsects = localANumberOfInsects;
		end
	end
end
