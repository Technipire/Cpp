% Nonterminal.m

classdef (Abstract) Nonterminal < Expression
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theNonterminal, aName)

		output(theNonterminal)
	end
end
