% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aMeeting = Meeting(4, 3, 2005, 2, 15, 'Conference Room 3');

			aMeeting.add(Manager);

			aMeeting.add(Developer);

			result = aMeeting;
		end
	end
end
