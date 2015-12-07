% SimpleDriverCommand.m

classdef (Abstract) SimpleDriverCommand < Command
	properties (GetAccess = protected, SetAccess = private)
		Driver % DpDriver
	end

	properties (GetAccess = private, SetAccess = private)
		DpDriverMementoInterface % DpDriverMementoInterface
	end

	methods
		% constructor:
		function theSimpleDriverCommand = SimpleDriverCommand(aDriver)
			theSimpleDriverCommand.Driver = aDriver;
		end

		function execute(theSimpleDriverCommand)
			theSimpleDriverCommand.DpDriverMementoInterface = theSimpleDriverCommand.Driver.backup;
		end

		function undo(theSimpleDriverCommand)
			theSimpleDriverCommand.Driver.restore(theSimpleDriverCommand.DpDriverMementoInterface);
		end

		function set.Driver(theSimpleDriverCommand, aDriver)
			if isempty(aDriver)
				error('aDriver is empty.');
			end

			theSimpleDriverCommand.Driver = aDriver;
		end
	end
end
