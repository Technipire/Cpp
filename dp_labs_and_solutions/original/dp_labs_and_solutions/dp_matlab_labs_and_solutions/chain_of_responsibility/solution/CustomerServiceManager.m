% CustomerServiceManager.m

classdef CustomerServiceManager < Handler
	methods
		% constructor:
		function theCustomerServiceManager = CustomerServiceManager
			theCustomerServiceManager@Handler({});
		end
	end

	methods (Access = protected)
		function result = canHandle(theCustomerServiceManager, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 30);
		end

		function doHandle(theCustomerServiceManager, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceManager.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
