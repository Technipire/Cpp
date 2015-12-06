% DpDriver.m

classdef DpDriver < handle
	properties (GetAccess = private, Constant)
		NORTH = 1; % int
		EAST = 2; % int
		SOUTH = 3; % int
		WEST = 4; % int
	end

	properties (GetAccess = private, SetAccess = private)
		Name % string
		x % int
		y % int
		Heading % int
	end

	methods
		% constructor:
		function theDpDriver = DpDriver(constructorParameter)
			if isa(constructorParameter, 'DpDriver')
				% DpDriver(DpDriver):
				theDpDriver.Name = constructorParameter.Name;
				theDpDriver.x = constructorParameter.x;
				theDpDriver.y = constructorParameter.y;
				theDpDriver.Heading = constructorParameter.Heading;
			else
				% DpDriver(aName):
				theDpDriver.Name = constructorParameter;
				theDpDriver.x = 0;
				theDpDriver.y = 0;
				theDpDriver.Heading = DpDriver.NORTH;
			end
		end

		function turnLeft(theDpDriver)
			switch theDpDriver.Heading
				case DpDriver.NORTH
					theDpDriver.Heading = DpDriver.WEST;
				case DpDriver.EAST
					theDpDriver.Heading = DpDriver.NORTH;
				case DpDriver.SOUTH
					theDpDriver.Heading = DpDriver.EAST;
				case DpDriver.WEST
					theDpDriver.Heading = DpDriver.SOUTH;
			end
		end

		function goStraight(theDpDriver, howFar)
			switch theDpDriver.Heading
				case DpDriver.NORTH
					theDpDriver.y = theDpDriver.y + howFar;
				case DpDriver.EAST
					theDpDriver.x = theDpDriver.x + howFar;
				case DpDriver.SOUTH
					theDpDriver.y = theDpDriver.y - howFar;
				case DpDriver.WEST
					theDpDriver.x = theDpDriver.x - howFar;
			end
		end

		function turnRight(theDpDriver)
			switch theDpDriver.Heading
				case DpDriver.NORTH
					theDpDriver.Heading = DpDriver.EAST;
				case DpDriver.EAST
					theDpDriver.Heading = DpDriver.SOUTH;
				case DpDriver.SOUTH
					theDpDriver.Heading = DpDriver.WEST;
				case DpDriver.WEST
					theDpDriver.Heading = DpDriver.NORTH;
			end
		end

		function reportPosition(theDpDriver)
			fprintf('%s is located at (%d, %d) facing %s.\n', ...
				theDpDriver.Name, ...
				theDpDriver.x, ...
				theDpDriver.y, ...
				DpDriver.headingToString(theDpDriver.Heading));
		end

		function result = clone(theDpDriver)
			result = DpDriver(theDpDriver);
		end
	end

	methods (Static)
		function result = headingToString(aHeading)
			switch aHeading
				case DpDriver.NORTH
					result = 'north';
				case DpDriver.EAST
					result = 'east';
				case DpDriver.SOUTH
					result = 'south';
				case DpDriver.WEST
					result = 'west';
			end
		end
	end
end
