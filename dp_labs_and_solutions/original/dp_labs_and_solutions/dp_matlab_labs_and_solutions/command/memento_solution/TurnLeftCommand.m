% TurnLeftCommand.m

classdef TurnLeftCommand < SimpleDriverCommand
	methods
		% constructor:
		function theTurnLeftCommand = TurnLeftCommand(aDriver)
			theTurnLeftCommand@SimpleDriverCommand(aDriver);
		end
	end

	methods
		function execute(theTurnLeftCommand)
			theTurnLeftCommand.execute@SimpleDriverCommand;

			theTurnLeftCommand.Driver.turnLeft;
		end
	end
end
