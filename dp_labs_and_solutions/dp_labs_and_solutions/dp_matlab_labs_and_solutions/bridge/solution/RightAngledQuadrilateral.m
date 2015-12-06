% RightAngledQuadrilateral.m

classdef RightAngledQuadrilateral < handle
	properties (Access = private)
		Body % RightAngledQuadrilateralBody
	end

	methods
		% constructor:
		function theRightAngledQuadrilateral = RightAngledQuadrilateral(aHeight, aWidth)
			if nargin == 1
				% aHeight means aSide:
				theRightAngledQuadrilateral.Body = theRightAngledQuadrilateral.makeBody(aHeight, aHeight);
				% or:
				theRightAngledQuadrilateral.Body = SquareBody(aHeight);
			else
				theRightAngledQuadrilateral.Body = theRightAngledQuadrilateral.makeBody(aHeight, aWidth);
			end
		end

		function setHeight(theRightAngledQuadrilateral, aHeight)
			theRightAngledQuadrilateral.Body = theRightAngledQuadrilateral.makeBody(aHeight, theRightAngledQuadrilateral.getWidth());
		end

		function setWidth(theRightAngledQuadrilateral, aWidth)
			theRightAngledQuadrilateral.Body = theRightAngledQuadrilateral.makeBody(theRightAngledQuadrilateral.getHeight(), aWidth);
		end

		function setSide(theRightAngledQuadrilateral, aSide)
			theRightAngledQuadrilateral.Body = theRightAngledQuadrilateral.makeBody(aSide, aSide);
			% or:
			theRightAngledQuadrilateral.Body = SquareBody(aSide);
		end

		function result = getHeight(theRightAngledQuadrilateral)
			result = theRightAngledQuadrilateral.Body.getHeight;
		end

		function result = getWidth(theRightAngledQuadrilateral)
			result = theRightAngledQuadrilateral.Body.getWidth;
		end

		function result = isSquare(theRightAngledQuadrilateral)
			result = theRightAngledQuadrilateral.Body.isSquare;
		end
	end

	methods (Access = private, Static)
		function result = makeBody(aHeight, aWidth)
			if aHeight == aWidth
				result = SquareBody(aHeight);
			else
				result = RectangleBody(aHeight, aWidth);
			end
		end
	end
end
