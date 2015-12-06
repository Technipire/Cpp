% ConventionalLettuce.m

classdef ConventionalLettuce < Lettuce
	properties
		NumberOfPesticides % int
	end

	methods
		% constructor:
		function theConventionalLettuce = ConventionalLettuce(aConventionalLettuceOrAPrice, aNumberOfPesticides)
			if nargin == 2
				% ConventionalLettuce(aPrice, aNumberOfPesticides):
				localAConventionalLettuceOrAPrice = aConventionalLettuceOrAPrice;
				localANumberOfPesticides          = aNumberOfPesticides;
			elseif nargin == 1
				if isa(aConventionalLettuceOrAPrice, 'ConventionalLettuce')
					% ConventionalLettuce(aConventionalLettuce):
					localAConventionalLettuceOrAPrice = aConventionalLettuceOrAPrice;
					localANumberOfPesticides          = aConventionalLettuceOrAPrice.NumberOfPesticides;
				else
					% ConventionalLettuce(aPrice):
					localAConventionalLettuceOrAPrice = aConventionalLettuceOrAPrice;
					localANumberOfPesticides          = 0; % the default value.
				end
			else
				error('Invalid number of input parameters.');
			end

			theConventionalLettuce@Lettuce(localAConventionalLettuceOrAPrice);

			theConventionalLettuce.NumberOfPesticides = localANumberOfPesticides;
		end

		function result = clone(theConventionalLettuce)
			result = ConventionalLettuce(theConventionalLettuce);
		end
	end
end
