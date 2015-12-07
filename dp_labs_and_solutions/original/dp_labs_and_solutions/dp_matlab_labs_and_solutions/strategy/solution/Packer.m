% Packer.m

classdef Packer < handle
	properties
		PackingStrategy % PackingStrategy
	end

	methods
		% constructor:
		function thePacker = Packer(aPackingStrategy)
			thePacker.PackingStrategy = aPackingStrategy;
		end

		function pack(thePacker)
			thePacker.PackingStrategy.pack(thePacker);
		end

		function set.PackingStrategy(thePacker, aPackingStrategy)
			if isempty(aPackingStrategy)
				error('Missing PackingStrategy.');
			end

			thePacker.PackingStrategy = aPackingStrategy;
		end
	end
end
