% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aCustomerRequestsDiscountEvent, aCustomerServiceRepresentative, aCustomerServiceSupervisor, aCustomerServiceManager)
			if aCustomerServiceRepresentative.canHandle(aCustomerRequestsDiscountEvent)
				aCustomerServiceRepresentative.doHandle(aCustomerRequestsDiscountEvent);
			elseif aCustomerServiceSupervisor.canHandle(aCustomerRequestsDiscountEvent)
				aCustomerServiceSupervisor.doHandle(aCustomerRequestsDiscountEvent);
			elseif aCustomerServiceManager.canHandle(aCustomerRequestsDiscountEvent)
				aCustomerServiceManager.doHandle(aCustomerRequestsDiscountEvent);
			else
				% aCustomerRequestsDiscountEvent is not handled.
			end
		end
	end
end
