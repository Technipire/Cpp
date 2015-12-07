% Nonterminal.m

classdef (Abstract) Nonterminal < Expression
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theNonterminal, aName)

		result = getValue(theNonterminal, aMap)

		output(theNonterminal)
	end
end
