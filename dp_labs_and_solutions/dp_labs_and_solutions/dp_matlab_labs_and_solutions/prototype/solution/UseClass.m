% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aGarden)
			aLettuce = aGarden.makeLettuce;

			fprintf('%s.\n', class(aLettuce));
		end
	end
end
