% GoStraightCommand.m

classdef GoStraightCommand < SimpleDriverCommand
	properties (GetAccess = private, SetAccess = private)
		howFar % int
	end

	methods
		% constructor:
		function theGoStraightCommand = GoStraightCommand(aDriver, aHowFar)
			theGoStraightCommand@SimpleDriverCommand(aDriver);

			theGoStraightCommand.howFar = aHowFar;
		end
	end

	methods
		function execute(theGoStraightCommand)
			theGoStraightCommand.Driver.goStraight(theGoStraightCommand.howFar);
		end

		function undo(theGoStraightCommand)
			theGoStraightCommand.Driver.undoGoStraight(theGoStraightCommand.howFar);
		end
	end
end
