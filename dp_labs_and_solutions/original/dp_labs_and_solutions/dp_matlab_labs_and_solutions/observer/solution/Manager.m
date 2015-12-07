% Manager.m

classdef Manager < Participant
	methods
		function add(theManager, aMeeting)
			theManager.add@Participant(aMeeting);

			fprintf('Manager.add(%s)\n', aMeeting.toString);
		end

		function remove(theManager, aMeeting)
			theManager.remove@Participant(aMeeting);

			fprintf('Manager.remove(%s)\n', aMeeting.toString);
		end

		function update(theManager, aMeeting)
			theManager.update@Participant(aMeeting);

			fprintf('Manager.update(%s)\n', aMeeting.toString);
		end
	end
end
