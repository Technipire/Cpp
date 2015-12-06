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

		function result = getNumberOfUsesOfVariable(theVariable, aName)
			if strcmp(theVariable.Name, aName)
				result = 1;
			else
				result = 0;
			end
		end

		function result = getValue(theVariable, aMap)
			result = aMap.get(theVariable.Name);
		end

		function output(theVariable)
			fprintf('%s', theVariable.Name);
		end
	end
end
