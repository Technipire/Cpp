% Terminal.m

classdef (Abstract) Terminal < Expression
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theTerminal, aName)

		result = getValue(theTerminal, aMap)

		output(theTerminal)
	end
end
