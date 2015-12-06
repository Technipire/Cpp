% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aConsumer)
			aConsumer.consume;
		end
	end
end
