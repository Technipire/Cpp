% Square.m

classdef Square < RightAngledQuadrilateral
	properties (Access = public)
		Side % double
	end

	methods
		% constructor:
		function theSquare = Square(aSide)
			theSquare.Side = aSide;
		end
	end
end
