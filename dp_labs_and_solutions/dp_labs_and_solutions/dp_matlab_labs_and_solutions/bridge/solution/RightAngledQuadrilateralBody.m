% RightAngledQuadrilateralBody.m

classdef (Abstract) RightAngledQuadrilateralBody < handle
	methods (Abstract)
		result = getHeight(theRightAngledQuadrilateralBody)

		result = getWidth(theRightAngledQuadrilateralBody)

		result = isSquare(theRightAngledQuadrilateralBody)
	end
end
