% Manager.m

classdef Manager < handle
	properties (GetAccess = private, SetAccess = private)
		Meetings % DpVector of Meeting
	end

	methods
		% constructor:
		function theManager = Manager
			theManager.Meetings = DpVector;
		end

		function add(theManager, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Manager.add(%s)\n', aMeeting.toString);
			theManager.Meetings.add(aMeeting);
		end

		function remove(theManager, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Manager.remove(%s)\n', aMeeting.toString);
			% I was too lazy to implement this. :-(
		end

		function update(theManager, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Manager.update(%s)\n', aMeeting.toString);
		end
	end
end
