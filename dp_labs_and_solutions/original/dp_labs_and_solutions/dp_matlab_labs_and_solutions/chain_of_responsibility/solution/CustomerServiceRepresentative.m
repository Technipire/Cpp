% CustomerServiceRepresentative.m

classdef CustomerServiceRepresentative < Handler
	methods
		% constructor:
		function theCustomerServiceRepresentative = CustomerServiceRepresentative(aHandler)
			theCustomerServiceRepresentative@Handler(aHandler);
		end
	end

	methods (Access = protected)
		function result = canHandle(theCustomerServiceRepresentative, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 10);
		end

		function doHandle(theCustomerServiceRepresentative, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceRepresentative.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
