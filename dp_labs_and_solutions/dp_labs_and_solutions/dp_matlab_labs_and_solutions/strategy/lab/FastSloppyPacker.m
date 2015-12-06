% FastSloppyPacker.m

classdef FastSloppyPacker < Packer
	methods
		% constructor:
		function theFastSloppyPacker = FastSloppyPacker
			theFastSloppyPacker@Packer;
		end

		function pack(theFastSloppyPacker)
			fprintf('Packing fast and sloppy.\n');
		end
	end
end
