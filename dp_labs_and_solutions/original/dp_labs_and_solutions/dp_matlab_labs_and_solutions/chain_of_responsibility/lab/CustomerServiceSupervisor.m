% CustomerServiceSupervisor.m

classdef CustomerServiceSupervisor < handle
	methods
		% constructor:
		function theCustomerServiceSupervisor = CustomerServiceSupervisor
		end

		function result = canHandle(theCustomerServiceSupervisor, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 20);
		end

		function doHandle(theCustomerServiceSupervisor, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceSupervisor.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
