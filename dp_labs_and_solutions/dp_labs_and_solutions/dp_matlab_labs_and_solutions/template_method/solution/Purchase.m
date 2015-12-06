% Purchase.m

classdef (Abstract) Purchase < handle
	methods (Sealed)
		function perform(thePurchase)
			thePurchase.selectItem;
			thePurchase.bringItemToRegister;
			thePurchase.pay;
		end
	end

	methods (Abstract, Access = protected)
		pay(thePurchase)
	end

	methods (Access = private, Sealed)
		function selectItem(thePurchase)
		end

		function bringItemToRegister(thePurchase)
		end
	end
end
