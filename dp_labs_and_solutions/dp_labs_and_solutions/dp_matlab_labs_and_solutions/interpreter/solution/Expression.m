% Expression.m

classdef (Abstract) Expression < handle
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theExpression, aName)

		result = getValue(theExpression, aMap)

		output(theExpression)
	end
end
