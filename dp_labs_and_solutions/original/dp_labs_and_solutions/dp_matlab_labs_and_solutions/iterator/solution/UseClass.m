% UseClass.m

classdef UseClass < handle
	methods (Static)
		function Use(aIterator)
			while ~aIterator.isDone
				fprintf('%d.\n', aIterator.getCurrent);

				aIterator.advance;
			end
		end
	end
end
