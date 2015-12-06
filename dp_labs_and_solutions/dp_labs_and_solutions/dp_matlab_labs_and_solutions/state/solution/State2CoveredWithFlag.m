% State2CoveredWithFlag.m

classdef State2CoveredWithFlag < State
	methods
		function result = isCovered(theState2CoveredWithFlag)
			result = true;
		end

		function leftClick(theState2CoveredWithFlag, aGame, aSquare)
		end

		function rightClick(theState2CoveredWithFlag, aSquare)
			aSquare.State = State3CoveredWithQuestionMark;
		end

		function output(theState2CoveredWithFlag, aGame, aSquare)
			fprintf('F');
		end

		function uncover(theState2CoveredWithFlag, aSquare)
			if aSquare.hasAMine
				aSquare.State = State5UncoveredWithMine;
			else
				aSquare.State = State4UncoveredWithoutMine;
			end
		end
	end
end
