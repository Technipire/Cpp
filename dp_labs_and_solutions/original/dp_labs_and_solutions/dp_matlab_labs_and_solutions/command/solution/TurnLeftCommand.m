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
			theTurnLeftCommand.Driver.turnLeft;
		end

		function undo(theTurnLeftCommand)
			theTurnLeftCommand.Driver.undoTurnLeft;
		end
	end
end
