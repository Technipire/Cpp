% RectangleBody.m

classdef RectangleBody < RightAngledQuadrilateralBody
	properties (GetAccess = public, SetAccess = private)
		Height % double
		Width  % double
	end

	methods
		% constructor:
		function theRectangleBody = RectangleBody(aHeight, aWidth)
			theRectangleBody.Height = aHeight;
			theRectangleBody.Width  = aWidth ;
		end

		function result = getHeight(theRectangleBody)
			result = theRectangleBody.Height;
		end

		function result = getWidth(theRectangleBody)
			result = theRectangleBody.Width;
		end

		function result = isSquare(theRectangleBody)
			result = false;
		end
	end
end
