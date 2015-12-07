% Handler.m

classdef (Abstract) Handler < handle
	properties (GetAccess = private, SetAccess = private)
		Successor % Handler
	end

	methods
		% constructor:
		function theHandler = Handler(aSuccessor)
			theHandler.Successor = aSuccessor;
		end
	end

	methods (Abstract, Access = protected)
		result = canHandle(theHandler, aCustomerRequestsDiscountEvent)

		doHandle(theHandler, aCustomerRequestsDiscountEvent)
	end

	methods (Sealed)
		function handle(theHandler, aCustomerRequestsDiscountEvent)
			if theHandler.canHandle(aCustomerRequestsDiscountEvent)
				theHandler.doHandle(aCustomerRequestsDiscountEvent);
			elseif ~isempty(theHandler.Successor)
				theHandler.Successor.handle(aCustomerRequestsDiscountEvent);
			else
				% the event is not handled.
			end
		end
	end
end
