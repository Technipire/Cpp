% CashPurchase.m

classdef CashPurchase < Purchase
	methods
		function perform(theCashPurchase)
			theCashPurchase.selectItem;
			theCashPurchase.bringItemToRegister;
			theCashPurchase.payViaCash;
		end
	end

	methods (Access = private)
		function selectItem(theCashPurchase)
		end

		function bringItemToRegister(theCashPurchase)
		end

		function payViaCash(theCashPurchase)
			fprintf('Paying via cash.\n');
		end
	end
end
