
% State5UncoveredWithMine.m

classdef State5UncoveredWithMine < State
	methods
		function result = isCovered(theState5UncoveredWithMine)
			result = false;
		end

		function leftClick(theState5UncoveredWithMine, aGame, aSquare)
		end

		function rightClick(theState5UncoveredWithMine, aSquare)
		end

		function output(theState5UncoveredWithMine, aGame, aSquare)
			fprintf('M');
		end

		function uncover(theState5UncoveredWithMine, aSquare)
		end
	end
end
