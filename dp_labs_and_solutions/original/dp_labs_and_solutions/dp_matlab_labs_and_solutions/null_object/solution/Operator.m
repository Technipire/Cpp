% Operator.m

classdef (Abstract) Operator < Nonterminal
	methods (Abstract)
		accept(theOperator, aVisitor)
	end
end
