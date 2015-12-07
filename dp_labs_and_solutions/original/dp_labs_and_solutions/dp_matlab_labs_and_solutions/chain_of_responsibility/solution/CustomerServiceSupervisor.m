% CustomerServiceSupervisor.m

classdef CustomerServiceSupervisor < Handler
	methods
		% constructor:
		function theCustomerServiceSupervisor = CustomerServiceSupervisor(aHandler)
			theCustomerServiceSupervisor@Handler(aHandler);
		end
	end

	methods (Access = protected)
		function result = canHandle(theCustomerServiceSupervisor, aCustomerRequestsDiscountEvent)
			result = (aCustomerRequestsDiscountEvent.Percent < 20);
		end

		function doHandle(theCustomerServiceSupervisor, aCustomerRequestsDiscountEvent)
			fprintf('I am a CustomerServiceSupervisor.\n');
			fprintf('I can give you a %d%% discount.\n', aCustomerRequestsDiscountEvent.Percent);
		end
	end
end
