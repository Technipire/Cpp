% ProxyFoo.m

classdef ProxyFoo < Foo
	properties (GetAccess = private, SetAccess = private)
		RealFoo % RealFoo
	end

	methods
		% constructor:
		function theProxyFoo = ProxyFoo(aRealFoo)
			theProxyFoo.RealFoo = aRealFoo;
		end

		function bar(theProxyFoo)
			fprintf('before:\n');

			theProxyFoo.RealFoo.bar;

			fprintf('after:\n');
		end

		function set.RealFoo(theProxyFoo, aRealFoo)
			if isempty(aRealFoo)
				error('There must be a non-empty RealFoo.');
			end

			theProxyFoo.RealFoo = aRealFoo;
		end
	end
end
