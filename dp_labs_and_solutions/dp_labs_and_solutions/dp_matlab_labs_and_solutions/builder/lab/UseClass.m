% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aJourney)
			if isempty(aJourney)
				error('isempty(aJourney).');
			end

			aJourney.output;

			fprintf('%d.\n', aJourney.getNumberOfStops);
		end
	end
end
