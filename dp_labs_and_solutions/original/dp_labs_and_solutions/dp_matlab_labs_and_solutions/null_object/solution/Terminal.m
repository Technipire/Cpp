% Terminal.m

classdef (Abstract) Terminal < Expression
	methods (Abstract)
		accept(theTerminal, aVisitor)
	end
end
