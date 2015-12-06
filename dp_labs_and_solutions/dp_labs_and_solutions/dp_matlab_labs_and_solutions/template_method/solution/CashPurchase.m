% CashPurchase.m

classdef CashPurchase < Purchase
	methods (Access = protected)
		function pay(theCashPurchase)
			fprintf('Paying via cash.\n');
		end
	end
end
