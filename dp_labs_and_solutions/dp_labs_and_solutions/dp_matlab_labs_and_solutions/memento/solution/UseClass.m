% UseClass.m

classdef UseClass < handle
	methods (Static)
		function use(aDriver)
			aDriver.reportPosition;

			aDriverMementoInterface = aDriver.backup();

			aDriver.turnLeft;
			aDriver.goStraight(3);
			aDriver.turnRight;
			aDriver.goStraight(6);
			aDriver.turnRight;

			aDriver.reportPosition;

			aDriver.restore(aDriverMementoInterface);

			aDriver.reportPosition;
		end
	end
end
