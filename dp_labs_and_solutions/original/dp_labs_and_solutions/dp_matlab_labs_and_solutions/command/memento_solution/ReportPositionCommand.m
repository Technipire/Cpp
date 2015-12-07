% ReportPositionCommand.m

classdef ReportPositionCommand < SimpleDriverCommand
	methods
		% constructor:
		function theReportPositionCommand = ReportPositionCommand(aDriver)
			theReportPositionCommand@SimpleDriverCommand(aDriver);
		end
	end

	methods
		function execute(theReportPositionCommand)
			theReportPositionCommand.Driver.reportPosition;
		end

		function undo(theReportPositionCommand)
			theReportPositionCommand.Driver.reportPosition;
		end
	end
end
