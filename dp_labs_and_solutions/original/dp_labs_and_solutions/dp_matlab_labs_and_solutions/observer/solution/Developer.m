% Developer.m

classdef Developer < Participant
	methods
		function add(theDeveloper, aMeeting)
			theDeveloper.add@Participant(aMeeting);

			fprintf('Developer.add(%s)\n', aMeeting.toString);
		end

		function remove(theDeveloper, aMeeting)
			theDeveloper.remove@Participant(aMeeting);

			fprintf('Developer.remove(%s)\n', aMeeting.toString);
		end

		function update(theDeveloper, aMeeting)
			theDeveloper.update@Participant(aMeeting);

			fprintf('Developer.update(%s)\n', aMeeting.toString);
		end
	end
end
