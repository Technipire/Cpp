% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aGarden)
			aTomato = aGarden.makeTomato;

			fprintf('%s.\n', class(aTomato));
		end
	end
end
