% SlowCarefulPacker.m

classdef SlowCarefulPacker < Packer
	methods
		% constructor:
		function theSlowCarefulPacker = SlowCarefulPacker
			theSlowCarefulPacker@Packer;
		end

		function pack(theSlowCarefulPacker)
			fprintf('Packing slow and careful.\n');
		end
	end
end
