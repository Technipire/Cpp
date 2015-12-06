// Game.java

public class Game
{
	public Game(int aNumberOfRows, int aNumberOfColumns)
	{
		myNumberOfRows    = aNumberOfRows;
		myNumberOfColumns = aNumberOfColumns;
		myNumberOfMines   = 0;

		mySquares = new DpVector<DpVector<Square> >();

		myIsOver = false;

		for (int aRow = 0; aRow < myNumberOfRows; ++aRow)
		{
			DpVector<Square> aVector = new DpVector<Square>();

			for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
			{
				boolean hasAMine = shouldHaveAMine();
				if (hasAMine)
				{
					++myNumberOfMines;
				}
				aVector.add(new Square(hasAMine, aRow, aColumn));
			}

			mySquares.add(aVector);
		}
	}

	private boolean shouldHaveAMine()
	{
		int percentOfSquaresWithAMine = 30;

		return ((int) (Math.random() * 100)) < percentOfSquaresWithAMine;
	}

	private boolean hasAMine(int aRow, int aColumn)
	{
		if ((0 <= aRow    && aRow    < myNumberOfRows   )
		&&  (0 <= aColumn && aColumn < myNumberOfColumns))
		{
			return getSquare(aRow, aColumn).hasAMine();
		}
		else
		{
			return false;
		}
	}

	private Square getSquare(int aRow, int aColumn)
	{
		if (aRow < 0
		||  aRow >= myNumberOfRows)
		{
			throw new DpException("Square getSquare(int aRow, int aColumn) -- invalid aRow.");
		}
		if (aColumn < 0
		||  aColumn >= myNumberOfColumns)
		{
			throw new DpException("Square getSquare(int aRow, int aColumn) -- invalid aColumn.");
		}
		DpVector<Square> aVector = mySquares.get(aRow);
		Square result = aVector.get(aColumn);
		return result;
	}

	public void play()
	{
		while (!myIsOver)
		{
			output();

			System.out.println();
			String aString = Keyboard.getString("Enter 'q' to quit or a row number: ");
			if (aString.equals("q"))
			{
				uncoverAllSquares();
				output();
				return;
			}
			int aRow = (aString.charAt(0) - '0');
			if (aRow < 0 || aRow >= myNumberOfRows)
			{
				System.err.println("Invalid row, try again.");
				continue;
			}
			char c = Keyboard.getChar("Enter a column number: ");
			int aColumn = (c - '0');
			if (aColumn < 0 || aColumn >= myNumberOfColumns)
			{
				System.err.println("Invalid column, try again.");
				continue;
			}
			Square aSquare = getSquare(aRow, aColumn);
			c = Keyboard.getChar("Enter 'l' to left-click or 'r' to right-click: ");
			if (c == 'l')
			{
				aSquare.leftClick(this);
			}
			else if (c == 'r')
			{
				aSquare.rightClick();
			}
			else
			{
				System.err.println("Invalid entry, try again.");
				continue;
			}
		}
		output();
	}

	public int getNumberOfNeighborsWhoHaveAMine(int aRow, int aColumn)
	{
		int result = 0;

		result += (hasAMine(aRow - 1, aColumn - 1) ? 1 : 0);
		result += (hasAMine(aRow - 1, aColumn    ) ? 1 : 0);
		result += (hasAMine(aRow - 1, aColumn + 1) ? 1 : 0);

		result += (hasAMine(aRow    , aColumn - 1) ? 1 : 0);
		result += (hasAMine(aRow    , aColumn + 1) ? 1 : 0);

		result += (hasAMine(aRow + 1, aColumn - 1) ? 1 : 0);
		result += (hasAMine(aRow + 1, aColumn    ) ? 1 : 0);
		result += (hasAMine(aRow + 1, aColumn + 1) ? 1 : 0);

		return result;
	}

	public void output()
	{
		System.out.print("  ");;
		for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
		{
			System.out.print(aColumn);
		}
		System.out.println();
		System.out.print("  ");
		for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
		{
			System.out.print('-');
		}
		System.out.println();

		for (int aRow = 0; aRow < myNumberOfRows; ++aRow)
		{
			DpVector<Square> aVector = mySquares.get(aRow);
			System.out.print(aRow + "|");

			for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
			{
				Square aSquare = aVector.get(aColumn);
				aSquare.output(this);
			}

			System.out.println();
		}
	}

	public void uncoverAMine()
	{
		System.out.println("YOU LOSE!!! :-(");

		uncoverAllSquares();

		myIsOver = true;
	}

	public void uncoverANonMine()
	{
		boolean isAWin = true;

		// the definition of "win" is: every Square without a mine is uncovered.
		for (int aRow = 0; aRow < myNumberOfRows; ++aRow)
		{
			for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
			{
				Square aSquare = getSquare(aRow, aColumn);
				if (!aSquare.hasAMine() && aSquare.isCovered())
				{
					isAWin = false;
				}
			}
		}
		if (isAWin)
		{
			System.out.println("YOU WIN!!! :-)");

			uncoverAllSquares();

			myIsOver = true;
		}
	}

	public void uncoverAllSquares()
	{
		for (int aRow = 0; aRow < myNumberOfRows; ++aRow)
		{
			for (int aColumn = 0; aColumn < myNumberOfColumns; ++aColumn)
			{
				getSquare(aRow, aColumn).uncover();
			}
		}
	}

	private int myNumberOfRows;
	private int myNumberOfColumns;
	private int myNumberOfMines;
	private boolean myIsOver;
	private DpVector<DpVector<Square> > mySquares;
}
