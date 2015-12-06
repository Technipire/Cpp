% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aExpression)
			if isempty(aExpression)
				error('aExpression is empty.');
			end
			aExpression.output;
			fprintf('\n');

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			fprintf('%d.\n', aExpression.getNumberOfUsesOfVariable('a'));

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			fprintf('%d.\n', aExpression.getNumberOfUsesOfVariable('b'));

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			fprintf('%d.\n', aExpression.getNumberOfUsesOfVariable('c'));

			aMap = DpMap;
			aMap.put('a',  3.0);
			aMap.put('b', 10.0);
			aMap.put('c',  7.0);

			if isempty(aExpression)
				error('aExpression is empty.');
			end
			fprintf('%f.\n', aExpression.getValue(aMap));
		end
	end
end
