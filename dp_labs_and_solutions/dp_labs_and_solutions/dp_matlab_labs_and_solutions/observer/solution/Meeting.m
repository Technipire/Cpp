% Meeting.m

classdef Meeting < handle
	properties (GetAccess = public, SetAccess = private)
		Month    % int
		Day      % int
		Year     % int
		Hour     % int
		Minute   % int
		Location % string
	end

	properties (GetAccess = private, SetAccess = private)
		Participants % DpVector of Participant
	end

	methods
		% constructor:
		function theMeeting = Meeting(aMonth, aDay, aYear, aHour, aMinute, aLocation)
			% do not call set_XXX() here, as they will call update().
			theMeeting.Month    = aMonth;
			theMeeting.Day      = aDay;
			theMeeting.Year     = aYear;
			theMeeting.Hour     = aHour;
			theMeeting.Minute   = aMinute;
			theMeeting.Location = aLocation;

			theMeeting.Participants = DpVector;
		end

		function add(theMeeting, aParticipant)
			fprintf('Meeting.add(aParticipant)\n');

			if isempty(aParticipant)
				error('Invalid aParticipant.');
			end

			theMeeting.Participants.add(aParticipant);

			aParticipant.add(theMeeting);
		end

		function result = getParticipants(theMeeting)
			result = theMeeting.Participants.makeIterator;
		end

		function cancel(theMeeting)
			fprintf('Meeting.cancel\n');

			aIterator = theMeeting.getParticipants;
			while ~aIterator.isDone
				aParticipant = aIterator.getCurrent;
				aParticipant.remove(theMeeting);
				aIterator.advance;
			end
		end

		function result = toString(theMeeting)
			result = sprintf('%d/%d/%d.%d:%d at %s', ...
			theMeeting.Month, ...
			theMeeting.Day, ...
			theMeeting.Year, ...
			theMeeting.Hour, ...
			theMeeting.Minute, ...
			theMeeting.Location);
		end

		function setMonth(theMeeting, aMonth)
			theMeeting.Month = aMonth;
			theMeeting.update;
		end

		function setDay(theMeeting, aDay)
			theMeeting.Day = aDay;
			theMeeting.update;
		end

		function setYear(theMeeting, aYear)
			theMeeting.Year = aYear;
			theMeeting.update;
		end

		function setHour(theMeeting, aHour)
			theMeeting.Hour = aHour;
			theMeeting.update;
		end

		function setMinute(theMeeting, aMinute)
			theMeeting.Minute = aMinute;
			theMeeting.update;
		end

		function setLocation(theMeeting, aLocation)
			theMeeting.Location = aLocation;
			theMeeting.update;
		end
	end

	methods (Access = private)
		function update(theMeeting)
			fprintf('Meeting.update\n');

			aIterator = theMeeting.getParticipants;
			while ~aIterator.isDone
				aParticipant = aIterator.getCurrent;
				aParticipant.update(theMeeting);
				aIterator.advance;
			end
		end
	end
end
