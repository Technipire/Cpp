% Literal.m

classdef Literal < Terminal
	properties (GetAccess = public, SetAccess = private)
		value % int
	end

	methods
		% constructor:
		function theLiteral = Literal(aValue)
			theLiteral.value = aValue;
		end

		function result = getNumberOfUsesOfVariable(theLiteral, aName)
			result = 0;
		end

		function result = getValue(theLiteral, aMap)
			result = theLiteral.value;
		end

		function output(theLiteral)
			fprintf('%d', theLiteral.value);
		end
	end
end
