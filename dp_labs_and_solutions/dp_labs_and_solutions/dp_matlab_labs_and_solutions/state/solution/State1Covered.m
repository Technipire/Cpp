% State1Covered.m

classdef State1Covered < State
	methods
		function result = isCovered(theState1Covered)
			result = true;
		end

		function leftClick(theState1Covered, aGame, aSquare)
			if aSquare.hasAMine
				aSquare.State = State5UncoveredWithMine;
				aGame.uncoverAMine;
			else
				aSquare.State = State4UncoveredWithoutMine;
				aGame.uncoverANonMine;
			end
		end

		function rightClick(theState1Covered, aSquare)
			aSquare.State = State2CoveredWithFlag;
		end

		function output(theState1Covered, aGame, aSquare)
			fprintf('C');
		end

		function uncover(theState1Covered, aSquare)
			if aSquare.hasAMine
				aSquare.State = State5UncoveredWithMine;
			else
				aSquare.State = State4UncoveredWithoutMine;
			end
		end
	end
end
