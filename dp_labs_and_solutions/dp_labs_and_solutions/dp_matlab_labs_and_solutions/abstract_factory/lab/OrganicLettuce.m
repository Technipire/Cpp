% OrganicLettuce.m

classdef OrganicLettuce < Lettuce
	properties
		NumberOfInsects % int
	end

	methods
		% constructor:
		function theOrganicLettuce = OrganicLettuce(aOrganicLettuceOrAPrice, aNumberOfInsects)
			if nargin == 2
				% OrganicLettuce(aPrice, aNumberOfInsects):
				localAOrganicLettuceOrAPrice = aOrganicLettuceOrAPrice;
				localANumberOfInsects        = aNumberOfInsects;
			elseif nargin == 1
				if isa(aOrganicLettuceOrAPrice, 'OrganicLettuce')
					% OrganicLettuce(aOrganicLettuce):
					localAOrganicLettuceOrAPrice = aOrganicLettuceOrAPrice;
					localANumberOfInsects        = aOrganicLettuceOrAPrice.NumberOfInsects;
				else
					% OrganicLettuce(aPrice):
					localAOrganicLettuceOrAPrice = aOrganicLettuceOrAPrice;
					localANumberOfInsects        = 0; % the default value.
				end
			else
				error('Invalid number of input parameters.');
			end

			theOrganicLettuce@Lettuce(localAOrganicLettuceOrAPrice);

			theOrganicLettuce.NumberOfInsects = localANumberOfInsects;
		end

		function result = clone(theOrganicLettuce)
			result = OrganicLettuce(theOrganicLettuce);
		end
	end
end
