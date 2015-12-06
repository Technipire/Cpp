% Operator.m

classdef (Abstract) Operator < Nonterminal
	methods (Abstract)
		result = getNumberOfUsesOfVariable(theOperator, aName)

		result = getValue(theOperator, aMap)

		output(theOperator)
	end
end
