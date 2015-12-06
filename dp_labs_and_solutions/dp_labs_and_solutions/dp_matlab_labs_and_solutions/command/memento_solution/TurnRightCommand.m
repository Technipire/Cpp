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
			theTurnRightCommand.execute@SimpleDriverCommand;

			theTurnRightCommand.Driver.turnRight;
		end
	end
end
