% SquareBody.m

classdef SquareBody < RightAngledQuadrilateralBody
	properties (GetAccess = public, SetAccess = private)
		Side % double
	end

	methods
		% constructor:
		function theSquareBody = SquareBody(aSide)
			theSquareBody.Side = aSide;
		end

		function result = getHeight(theSquareBody)
			result = theSquareBody.Side;
		end

		function result = getWidth(theSquareBody)
			result = theSquareBody.Side;
		end

		function result = isSquare(theSquareBody)
			result = true;
		end
	end
end
