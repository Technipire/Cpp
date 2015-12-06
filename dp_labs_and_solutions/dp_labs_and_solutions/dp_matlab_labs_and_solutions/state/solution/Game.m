% Game.m

classdef Game < handle
	properties (GetAccess = public, SetAccess = private)
		NumberOfRows % int
		NumberOfColumns % int
		NumberOfMines % int
		IsOver % bool
		Squares % DpVector of DpVector of Square
	end

	methods
		% constructor:
		function theGame = Game(aNumberOfRows, aNumberOfColumns)
			theGame.NumberOfRows    = aNumberOfRows;
			theGame.NumberOfColumns = aNumberOfColumns;
			theGame.NumberOfMines   = 0;

			theGame.IsOver = false;

			theGame.Squares = DpVector;

			for aRow = 1:theGame.NumberOfRows
				aVector = DpVector;

				for aColumn = 1:theGame.NumberOfColumns
					aHasAMine = theGame.shouldHaveAMine;
					if aHasAMine
						theGame.NumberOfMines = theGame.NumberOfMines + 1;
					end
					aVector.add(Square(aHasAMine, aRow, aColumn));
				end

				theGame.Squares.add(aVector);
			end
		end

		function play(theGame)
			while ~theGame.IsOver
				theGame.output;
				fprintf('\n');

				userInput = input('Enter q to quit, or a row number: ', 's');
				if strcmp(userInput, 'q')
					theGame.uncoverAllSquares;
					theGame.output;
					return;
				end
				aRow = (userInput - '0');
				if aRow < 1 || aRow > theGame.NumberOfRows
					warning('Invalid row, try again.');
					continue;
				end
				userInput = input('Enter a column number: ', 's');
				aColumn = (userInput - '0');
				if aColumn < 1 || aColumn > theGame.NumberOfColumns
					warning('Invalid column, try again.');
					continue;
				end
				aSquare = theGame.getSquare(aRow, aColumn);
				userInput = input('Enter l to left-click or r to right-click: ', 's');
				if strcmp(userInput, 'l')
					aSquare.leftClick(theGame);
				elseif strcmp(userInput, 'r')
					aSquare.rightClick;
				else
					warning('Invalid entry, try again.');
					continue;
				end
			end
			theGame.output;
		end

		function result = getNumberOfNeighborsWhoHaveAMine(theGame, aRow, aColumn)
			result = 0;

			if theGame.hasAMine(aRow - 1, aColumn - 1)
				result = result + 1;
			end
			if theGame.hasAMine(aRow - 1, aColumn    )
				result = result + 1;
			end
			if theGame.hasAMine(aRow - 1, aColumn + 1)
				result = result + 1;
			end

			if theGame.hasAMine(aRow    , aColumn - 1)
				result = result + 1;
			end
			if theGame.hasAMine(aRow    , aColumn + 1)
				result = result + 1;
			end

			if theGame.hasAMine(aRow + 1, aColumn - 1)
				result = result + 1;
			end
			if theGame.hasAMine(aRow + 1, aColumn    )
				result = result + 1;
			end
			if theGame.hasAMine(aRow + 1, aColumn + 1)
				result = result + 1;
			end
		end

		function output(theGame)
			fprintf('  ');
			for aColumn=1:theGame.NumberOfColumns
				fprintf('%d', aColumn);
			end
			fprintf('\n');
			fprintf('  ');
			for aColumn=1:theGame.NumberOfColumns
				fprintf('-');
			end
			fprintf('\n');

			for aRow=1:theGame.NumberOfRows
				aVector = theGame.Squares.get(aRow);
				fprintf('%d|', aRow);

				for aColumn=1:theGame.NumberOfColumns
					aSquare = aVector.get(aColumn);
					aSquare.output(theGame);
				end

				fprintf('\n');
			end
		end

		function uncoverAMine(theGame)
			fprintf('YOU LOSE!!! :-(\n');

			theGame.uncoverAllSquares;

			theGame.IsOver = true;
		end

		function uncoverANonMine(theGame)
			isAWin = true;

			% the definition of 'win' is: every Square without a mine is uncovered.
			for aRow=1:theGame.NumberOfRows
				for aColumn=1:theGame.NumberOfColumns
					aSquare = theGame.getSquare(aRow, aColumn);
					if ~aSquare.hasAMine && aSquare.isCovered
						isAWin = false;
					end
				end
			end
			if isAWin
				fprintf('YOU WIN!!! :-)\n');

				theGame.uncoverAllSquares();

				theGame.IsOver = true;
			end
		end

		function uncoverAllSquares(theGame)
			for aRow=1:theGame.NumberOfRows
				for aColumn=1:theGame.NumberOfColumns
					theGame.getSquare(aRow, aColumn).uncover;
				end
			end
		end
	end

	methods (Access = private)
		function result = hasAMine(theGame, aRow, aColumn)
			if (1 <= aRow    && aRow    <= theGame.NumberOfRows   ) ...
			&& (1 <= aColumn && aColumn <= theGame.NumberOfColumns)
				result = theGame.getSquare(aRow, aColumn).hasAMine;
			else
				result = false;
			end
		end

		function result = getSquare(theGame, aRow, aColumn)
			if aRow < 1 || aRow > theGame.NumberOfRows
				error('function result = getSquare(theGame, aRow, aColumn) -- invalid aRow.');
			end
			if aColumn < 1 || aColumn > theGame.NumberOfColumns
				error('function result = getSquare(theGame, aRow, aColumn) -- invalid aColumn.');
			end
			aVector = theGame.Squares.get(aRow);
			result = aVector.get(aColumn);
		end
	end

	methods (Access = private, Static)
		function result = shouldHaveAMine
			persistent percentOfSquaresWithAMine;

			percentOfSquaresWithAMine = 30;
			result = floor(rand * 100) < percentOfSquaresWithAMine;
		end
	end
end
