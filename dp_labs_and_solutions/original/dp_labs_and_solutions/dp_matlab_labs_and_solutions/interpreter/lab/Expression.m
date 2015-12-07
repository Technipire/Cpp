% Expression.m

classdef (Abstract) Expression < handle
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theExpression, aName)

		output(theExpression)
	end
end
