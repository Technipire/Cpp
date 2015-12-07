% TurnRightCommand.m

classdef TurnRightCommand < SimpleDriverCommand
	methods
		% constructor:
		function theTurnRightCommand = TurnRightCommand(aDriver)
			theTurnRightCommand@SimpleDriverCommand(aDriver);
		end
	end

	methods
		function execute(theTurnRightCommand)
			theTurnRightCommand.Driver.turnRight;
		end

		function undo(theTurnRightCommand)
			theTurnRightCommand.Driver.undoTurnRight;
		end
	end
end
