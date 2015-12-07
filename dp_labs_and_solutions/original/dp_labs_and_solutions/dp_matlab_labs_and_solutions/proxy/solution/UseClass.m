% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aFoo)
			aFoo.bar;

			aFoo.bar;

			aFoo.bar;
		end
	end
end
