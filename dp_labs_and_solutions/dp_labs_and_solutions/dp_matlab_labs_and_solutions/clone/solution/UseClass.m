% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aLettuce)
			if isempty(aLettuce)
				aCopy = aLettuce; % Creating an instance of the Abstract class 'Lettuce' is not allowed.
			else
				aCopy = aLettuce.clone;
			end

			if isempty(aCopy)
				fprintf('empty\n');
			else
				fprintf('%s.\n', class(aCopy));
			end
		end
	end
end
