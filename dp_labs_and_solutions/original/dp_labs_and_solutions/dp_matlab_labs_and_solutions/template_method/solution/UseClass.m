% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aPurchase)
			aPurchase.perform;
		end
	end
end
