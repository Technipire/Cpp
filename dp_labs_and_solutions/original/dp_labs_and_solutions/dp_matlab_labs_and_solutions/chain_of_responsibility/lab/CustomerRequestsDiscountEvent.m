% CustomerRequestsDiscountEvent.m

classdef CustomerRequestsDiscountEvent < handle
	properties (GetAccess = public, SetAccess = private)
		Percent % int
	end

	methods
		function theCustomerRequestsDiscountEvent = CustomerRequestsDiscountEvent(aPercent)
			theCustomerRequestsDiscountEvent.Percent = aPercent;
		end
	end
end
