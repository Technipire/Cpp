% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aCommand)
			aCommand.execute;

			aCommand.undo;
		end
	end
end
