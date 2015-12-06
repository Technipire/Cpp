% Expression.m

classdef (Abstract) Expression < handle
	methods (Abstract)
		accept(theExpression, aVisitor)
	end
end
