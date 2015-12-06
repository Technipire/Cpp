% State3CoveredWithQuestionMark.m

classdef State3CoveredWithQuestionMark < State
	methods
		function result = isCovered(theState3CoveredWithQuestionMark)
			result = true;
		end

		function leftClick(theState3CoveredWithQuestionMark, aGame, aSquare)
			if aSquare.hasAMine
				aSquare.State = State5UncoveredWithMine;
				aGame.uncoverAMine;
			else
				aSquare.State = State4UncoveredWithoutMine;
				aGame.uncoverANonMine;
			end
		end

		function rightClick(theState3CoveredWithQuestionMark, aSquare)
			aSquare.State = State1Covered;
		end

		function output(theState3CoveredWithQuestionMark, aGame, aSquare)
			fprintf('?');
		end

		function uncover(theState3CoveredWithQuestionMark, aSquare)
			if aSquare.hasAMine
				aSquare.State = State5UncoveredWithMine;
			else
				aSquare.State = State4UncoveredWithoutMine;
			end
		end
	end
end
