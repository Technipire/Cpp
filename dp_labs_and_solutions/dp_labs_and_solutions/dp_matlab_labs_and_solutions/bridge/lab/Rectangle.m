% Rectangle.m

classdef Rectangle < RightAngledQuadrilateral
	properties (Access = public)
		Height % double
		Width  % double
	end

	methods
		% constructor:
		function theRectangle = Rectangle(aHeight, aWidth)
			theRectangle.Height = aHeight;
			theRectangle.Width  = aWidth ;
		end
	end
end
