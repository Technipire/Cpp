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
		Managers   % DpVector of Manager
		Developers % DpVector of Developer
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

			theMeeting.Managers   = DpVector;
			theMeeting.Developers = DpVector;
		end

		function addManager(theMeeting, aManager)
			fprintf('Meeting.addManager(aManager)\n');

			if isempty(aManager)
				error('Invalid aManager.');
			end

			theMeeting.Managers.add(aManager);

			aManager.add(theMeeting);
		end

		function addDeveloper(theMeeting, aDeveloper)
			fprintf('Meeting.addDeveloper(aDeveloper)\n');

			if isempty(aDeveloper)
				error('Invalid aDeveloper.');
			end

			theMeeting.Developers.add(aDeveloper);

			aDeveloper.add(theMeeting);
		end

		function result = getManagers(theMeeting)
			result = theMeeting.Managers.makeIterator;
		end

		function result = getDevelopers(theMeeting)
			result = theMeeting.Developers.makeIterator;
		end

		function cancel(theMeeting)
			fprintf('Meeting.cancel\n');

			aIterator = theMeeting.getManagers;
			while ~aIterator.isDone
				aManager = aIterator.getCurrent;
				aManager.remove(theMeeting);
				aIterator.advance;
			end

			aIterator = theMeeting.getDevelopers;
			while ~aIterator.isDone
				aDeveloper = aIterator.getCurrent;
				aDeveloper.remove(theMeeting);
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

			aIterator = theMeeting.getManagers;
			while ~aIterator.isDone
				aManager = aIterator.getCurrent;
				aManager.update(theMeeting);
				aIterator.advance;
			end

			aIterator = theMeeting.getDevelopers;
			while ~aIterator.isDone
				aDeveloper = aIterator.getCurrent;
				aDeveloper.update(theMeeting);
				aIterator.advance;
			end
		end
	end
end
