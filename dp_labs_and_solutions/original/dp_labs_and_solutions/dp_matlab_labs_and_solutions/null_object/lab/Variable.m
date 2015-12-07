% Variable.m

classdef Variable < Terminal
	properties (GetAccess = public, SetAccess = private)
		Name % string
	end

	methods
		% constructor:
		function theVariable = Variable(aName)
			theVariable.Name = aName;
		end

		function accept(theVariable, aVisitor)
			aVisitor.visitVariable(theVariable);
		end
	end
end
