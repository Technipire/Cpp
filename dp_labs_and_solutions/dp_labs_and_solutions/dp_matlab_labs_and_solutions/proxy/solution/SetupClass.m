% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			if true
				result = ProxyFoo(RealFoo);
			else
				result = RealFoo;
			end
		end
	end
end
