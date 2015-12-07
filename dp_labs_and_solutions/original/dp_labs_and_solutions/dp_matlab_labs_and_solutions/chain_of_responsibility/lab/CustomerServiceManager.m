% CustomerServiceManager.m

classdef CustomerServiceManager < handle
	methods
		% constructor:
		function theCustomerServiceManager = CustomerServiceManager
		end

		function result = canHandle(theCustomerServiceManager, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 30);
		end

		function doHandle(theCustomerServiceManager, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceManager.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
