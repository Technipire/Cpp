% SimpleDriverCommand.m

classdef (Abstract) SimpleDriverCommand < Command
	properties (GetAccess = protected, SetAccess = private)
		Driver % DpDriver
	end

	methods
		% constructor:
		function theSimpleDriverCommand = SimpleDriverCommand(aDriver)
			theSimpleDriverCommand.Driver = aDriver;
		end

		function set.Driver(theSimpleDriverCommand, aDriver)
			if isempty(aDriver)
				error('aDriver is empty.');
			end

			theSimpleDriverCommand.Driver = aDriver;
		end
	end

	methods (Abstract)
		execute(theCommand)

		undo(theCommand)
	end
end
