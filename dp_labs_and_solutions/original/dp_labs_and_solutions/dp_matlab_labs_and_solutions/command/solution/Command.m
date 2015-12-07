% Command.m

classdef (Abstract) Command < handle
	methods (Abstract)
		execute(theCommand)

		undo(theCommand)
	end
end
