% DpDriverMementoImplementation.m

classdef DpDriverMementoImplementation < DpDriverMementoInterface
	properties (GetAccess = { ?DpDriver }, SetAccess = private)
		Originator % DpDriver
		Clone % DpDriver
	end

	methods
		% constructor:
		function theDpDriverMementoImplementation = DpDriverMementoImplementation(aOriginator)
			theDpDriverMementoImplementation.Originator = aOriginator;
			theDpDriverMementoImplementation.Clone = aOriginator.clone;
		end
	end
end
