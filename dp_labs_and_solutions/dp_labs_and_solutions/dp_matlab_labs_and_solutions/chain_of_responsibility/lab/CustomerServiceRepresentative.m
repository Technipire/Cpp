% CustomerServiceRepresentative.m

classdef CustomerServiceRepresentative < handle
	methods
		% constructor:
		function theCustomerServiceRepresentative = CustomerServiceRepresentative
		end

		function result = canHandle(theCustomerServiceRepresentative, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 10);
		end

		function doHandle(theCustomerServiceRepresentative, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceRepresentative.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
