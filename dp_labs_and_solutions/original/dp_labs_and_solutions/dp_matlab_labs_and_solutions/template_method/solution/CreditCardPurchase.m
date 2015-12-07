% CreditCardPurchase.m

classdef CreditCardPurchase < Purchase
	methods (Access = protected)
		function pay(theCreditCardPurchase)
			fprintf('Paying via credit card.\n');
		end
	end
end
