% Terminal.m

classdef (Abstract) Terminal < Expression
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theTerminal, aName)

		output(theTerminal)
	end
end
