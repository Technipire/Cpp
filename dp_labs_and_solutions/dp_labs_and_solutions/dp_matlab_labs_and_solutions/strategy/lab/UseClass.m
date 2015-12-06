% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aPacker)
			aPacker.pack;
		end
	end
end
