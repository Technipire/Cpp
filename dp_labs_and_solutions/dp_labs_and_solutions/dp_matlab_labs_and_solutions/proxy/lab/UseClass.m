% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aFoo)
			fprintf('before:\n');
			aFoo.bar;
			fprintf('after:\n');

			fprintf('before:\n');
			aFoo.bar;
			fprintf('after:\n');

			fprintf('before:\n');
			aFoo.bar;
			fprintf('after:\n');
		end
	end
end
