% Square.m

classdef Square < handle
	properties (Constant)
		STATE_1_COVERED                    = 1
		STATE_2_COVERED_WITH_FLAG          = 2
		STATE_3_COVERED_WITH_QUESTION_MARK = 3
		STATE_4_UNCOVERED_WITHOUT_MINE     = 4
		STATE_5_UNCOVERED_WITH_MINE        = 5
	end

	properties (GetAccess = private, SetAccess = private)
		HasAMineProperty % bool
		Row              % int
		Column           % int
		State            % int
	end

	methods
		% constructor:
		function theSquare = Square(aHasAMine, aRow, aColumn)
			theSquare.HasAMineProperty = aHasAMine;
			theSquare.Row              = aRow;
			theSquare.Column           = aColumn;
			theSquare.State            = Square.STATE_1_COVERED;
		end

		function result = isCovered(theSquare)
			switch theSquare.State
				case Square.STATE_1_COVERED
					result = true;
				case Square.STATE_2_COVERED_WITH_FLAG
					result = true;
				case Square.STATE_3_COVERED_WITH_QUESTION_MARK
					result = true;
				case Square.STATE_4_UNCOVERED_WITHOUT_MINE
					result = false;
				case Square.STATE_5_UNCOVERED_WITH_MINE
					result = false;
				otherwise
					error('function result = isCovered(theSquare) -- unrecognized State.');
			end
		end

		function result = hasAMine(theSquare)
			result = theSquare.HasAMineProperty;
		end

		function leftClick(theSquare, aGame)
			switch theSquare.State
				case Square.STATE_1_COVERED
					if theSquare.hasAMine
						theSquare.State = Square.STATE_5_UNCOVERED_WITH_MINE;
						aGame.uncoverAMine;
					else
						theSquare.State = Square.STATE_4_UNCOVERED_WITHOUT_MINE;
						aGame.uncoverANonMine;
					end
				case Square.STATE_2_COVERED_WITH_FLAG
				case Square.STATE_3_COVERED_WITH_QUESTION_MARK
					if theSquare.hasAMine
						theSquare.State = Square.STATE_5_UNCOVERED_WITH_MINE;
						aGame.uncoverAMine;
					else
						theSquare.State = Square.STATE_4_UNCOVERED_WITHOUT_MINE;
						aGame.uncoverANonMine;
					end
				case Square.STATE_4_UNCOVERED_WITHOUT_MINE
				case Square.STATE_5_UNCOVERED_WITH_MINE
				otherwise
					error('function leftClick(theSquare, aGame) -- unrecognized State.');
			end
		end

		function rightClick(theSquare)
			switch theSquare.State
				case Square.STATE_1_COVERED
					theSquare.State = Square.STATE_2_COVERED_WITH_FLAG;
				case Square.STATE_2_COVERED_WITH_FLAG
					theSquare.State = Square.STATE_3_COVERED_WITH_QUESTION_MARK;
				case Square.STATE_3_COVERED_WITH_QUESTION_MARK
					theSquare.State = Square.STATE_1_COVERED;
				case Square.STATE_4_UNCOVERED_WITHOUT_MINE
				case Square.STATE_5_UNCOVERED_WITH_MINE
				otherwise
					error('function rightClick(theSquare) -- unrecognized State.');
			end
		end

		function output(theSquare, aGame)
			switch theSquare.State
				case Square.STATE_1_COVERED
					fprintf('C');
				case Square.STATE_2_COVERED_WITH_FLAG
					fprintf('F');
				case Square.STATE_3_COVERED_WITH_QUESTION_MARK
					fprintf('?');
				case Square.STATE_4_UNCOVERED_WITHOUT_MINE
					n = aGame.getNumberOfNeighborsWhoHaveAMine(theSquare.Row, theSquare.Column);
					if n == 0
						fprintf(' ');
					else
						fprintf('%c', '0' + n);
					end
				case Square.STATE_5_UNCOVERED_WITH_MINE
					fprintf('M');
				otherwise
					error('function output(theSquare, aGame) -- unrecognized State.');
			end
		end

		function uncover(theSquare)
			switch theSquare.State
				case Square.STATE_1_COVERED
					if theSquare.hasAMine
						theSquare.State = Square.STATE_5_UNCOVERED_WITH_MINE;
					else
						theSquare.State = Square.STATE_4_UNCOVERED_WITHOUT_MINE;
					end
				case Square.STATE_2_COVERED_WITH_FLAG
					if theSquare.hasAMine
						theSquare.State = Square.STATE_5_UNCOVERED_WITH_MINE;
					else
						theSquare.State = Square.STATE_4_UNCOVERED_WITHOUT_MINE;
					end
				case Square.STATE_3_COVERED_WITH_QUESTION_MARK
					if theSquare.hasAMine
						theSquare.State = Square.STATE_5_UNCOVERED_WITH_MINE;
					else
						theSquare.State = Square.STATE_4_UNCOVERED_WITHOUT_MINE;
					end
				case Square.STATE_4_UNCOVERED_WITHOUT_MINE
				case Square.STATE_5_UNCOVERED_WITH_MINE
				otherwise
					error('function uncover(theSquare) -- unrecognized State.');
			end
		end
	end
end
