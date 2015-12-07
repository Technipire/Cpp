% Square.m

classdef Square < handle
	properties (GetAccess = public, SetAccess = private)
		HasAMineProperty % bool
		Row              % int
		Column           % int
	end

	properties (Access = { ?State1Covered, ?State2CoveredWithFlag, ?State3CoveredWithQuestionMark, ?State4UncoveredWithoutMine, ?State5UncoveredWithMine })
		State            % State
	end

	methods
		% constructor:
		function theSquare = Square(aHasAMine, aRow, aColumn)
			theSquare.HasAMineProperty = aHasAMine;
			theSquare.Row              = aRow;
			theSquare.Column           = aColumn;
			theSquare.State            = State1Covered;
		end

		function result = isCovered(theSquare)
			result = theSquare.State.isCovered;
		end

		function result = hasAMine(theSquare)
			result = theSquare.HasAMineProperty;
		end

		function leftClick(theSquare, aGame)
			theSquare.State.leftClick(aGame, theSquare);
		end

		function rightClick(theSquare)
			theSquare.State.rightClick(theSquare);
		end

		function output(theSquare, aGame)
			theSquare.State.output(aGame, theSquare);
		end

		function uncover(theSquare)
			theSquare.State.uncover(theSquare);
		end
	end
end
