% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aGarden)
			aLettuce = aGarden.makeLettuce;

			fprintf('%s.\n', class(aLettuce));

			aTomato = aGarden.makeTomato;

			fprintf('%s.\n', class(aTomato));
		end
	end
end
