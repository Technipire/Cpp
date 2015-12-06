% CreditCardPurchase.m

classdef CreditCardPurchase < Purchase
	methods
		function perform(theCreditCardPurchase)
			theCreditCardPurchase.selectItem;
			theCreditCardPurchase.bringItemToRegister;
			theCreditCardPurchase.payViaCreditCard;
		end
	end

	methods (Access = private)
		function selectItem(theCreditCardPurchase)
		end

		function bringItemToRegister(theCreditCardPurchase)
		end

		function payViaCreditCard(theCreditCardPurchase)
			fprintf('Paying via credit card.\n');
		end
	end
end
