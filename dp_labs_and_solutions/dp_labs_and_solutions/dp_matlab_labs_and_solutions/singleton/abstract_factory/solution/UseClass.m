% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use
			aLettuce = Garden.getInstance.makeLettuce;

			fprintf('%s.\n', class(aLettuce));

			aTomato = Garden.getInstance.makeTomato;

			fprintf('%s.\n', class(aTomato));
		end
	end
end
