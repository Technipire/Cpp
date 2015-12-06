% State4UncoveredWithoutMine.m

classdef State4UncoveredWithoutMine < State
	methods
		function result = isCovered(theState4UncoveredWithoutMine)
			result = false;
		end

		function leftClick(theState4UncoveredWithoutMine, aGame, aSquare)
		end

		function rightClick(theState4UncoveredWithoutMine, aSquare)
		end

		function output(theState4UncoveredWithoutMine, aGame, aSquare)
			n = aGame.getNumberOfNeighborsWhoHaveAMine(aSquare.Row, aSquare.Column);
			if n == 0
				fprintf(' ');
			else
				fprintf('%c', '0' + n);
			end
		end

		function uncover(theState4UncoveredWithoutMine, aSquare)
		end
	end
end
