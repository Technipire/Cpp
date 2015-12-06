% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aCustomerRequestsDiscountEvent, aHandler)
			if isempty(aCustomerRequestsDiscountEvent)
				% throw an exception.
			end

			if ~isempty(aHandler)
				aHandler.handle(aCustomerRequestsDiscountEvent);
			else
				% aCustomerRequestsDiscountEvent is not handled.
			end
		end
	end
end
