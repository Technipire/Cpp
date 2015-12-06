% Packer.m

classdef (Abstract) Packer < handle
	methods
		% constructor:
		function thePacker = Packer
		end
	end

	methods (Abstract)
		pack(thePacker)
	end
end
