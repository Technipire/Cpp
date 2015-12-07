% Developer.m

classdef Developer < handle
	properties (GetAccess = private, SetAccess = private)
		Meetings % DpVector of Meeting
	end

	methods
		% constructor:
		function theDeveloper = Developer
			theDeveloper.Meetings = DpVector;
		end

		function add(theDeveloper, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Developer.add(%s)\n', aMeeting.toString);
			theDeveloper.Meetings.add(aMeeting);
		end

		function remove(theDeveloper, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Developer.remove(%s)\n', aMeeting.toString);
			% I was too lazy to implement this. :-(
		end

		function update(theDeveloper, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Developer.update(%s)\n', aMeeting.toString);
		end
	end
end
