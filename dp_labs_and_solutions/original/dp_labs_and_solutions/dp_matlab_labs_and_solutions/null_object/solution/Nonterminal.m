% Nonterminal.m

classdef (Abstract) Nonterminal < Expression
	methods (Abstract)
		accept(theNonterminal, aVisitor)
	end
end
