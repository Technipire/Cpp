% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aPacker)
			aPacker.pack;

			aPacker.PackingStrategy = FastSloppyPackingStrategy;

			aPacker.pack;
		end
	end
end
