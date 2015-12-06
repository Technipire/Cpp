% Participant.m

classdef (Abstract) Participant < handle
	properties (GetAccess = private, SetAccess = private)
		Meetings % DpVector of Meeting
	end

	methods
		% constructor:
		function theParticipant = Participant
			theParticipant.Meetings = DpVector;
		end

		function add(theParticipant, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Participant.add(%s)\n', aMeeting.toString);
			theParticipant.Meetings.add(aMeeting);
		end

		function remove(theParticipant, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Participant.remove(%s)\n', aMeeting.toString);
			% I was too lazy to implement this. :-(
		end

		function update(theParticipant, aMeeting)
			if isempty(aMeeting)
				error('Invalid aMeeting.');
			end

			fprintf('Participant.update(%s)\n', aMeeting.toString);
		end
	end
end
