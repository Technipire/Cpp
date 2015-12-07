% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aMeeting)
			aMeeting.setDay(4);

			aMeeting.setLocation('Cafeteria');

			aMeeting.cancel;
		end
	end
end
