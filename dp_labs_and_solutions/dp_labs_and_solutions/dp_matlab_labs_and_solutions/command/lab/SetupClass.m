% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aDriver = DpDriver('Robert');

			aCompoundCommand = CompoundCommand;

			aCompoundCommand.add(ReportPositionCommand(aDriver));
			aCompoundCommand.add(TurnLeftCommand(aDriver));
			aCompoundCommand.add(GoStraightCommand(aDriver, 3));
			aCompoundCommand.add(TurnRightCommand(aDriver));
			aCompoundCommand.add(GoStraightCommand(aDriver, 6));
			aCompoundCommand.add(TurnRightCommand(aDriver));
			aCompoundCommand.add(ReportPositionCommand(aDriver));

			result = aCompoundCommand;
		end
	end
end
