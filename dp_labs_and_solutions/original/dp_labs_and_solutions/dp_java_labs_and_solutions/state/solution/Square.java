// Square.java

public class Square
{
	public Square(boolean aHasAMine, int aRow, int aColumn)
	{
		myState = new State1Covered();
		myHasAMine = aHasAMine;
		myRow = aRow;
		myColumn = aColumn;
	}

	public boolean isCovered()
	{
		return myState.isCovered();
	}

	public boolean hasAMine()
	{
		return myHasAMine;
	}

	public void leftClick(Game aGame)
	{
		myState.leftClick(aGame, this);
	}

	public void rightClick()
	{
		myState.rightClick(this);
	}

	public void output(Game aGame)
	{
		myState.output(aGame, this);
	}

	public void uncover()
	{
		myState.uncover(this);
	}

	private State myState;
	private boolean myHasAMine;
	private int myRow;
	private int myColumn;

	////////////////////////////////////////////////////////////////////////////////

	private abstract static class State
	{
		public abstract boolean isCovered();
		public abstract void leftClick(Game aGame, Square aSquare);
		public abstract void rightClick(Square aSquare);
		public abstract void output(Game aGame, Square aSquare);
		public abstract void uncover(Square aSquare);
	}

	////////////////////////////////////////////////////////////////////////////////

	private static class State1Covered extends State
	{
		public boolean isCovered()
		{
			return true;
		}

		public void leftClick(Game aGame, Square aSquare)
		{
			if (aSquare.myHasAMine)
			{
				aSquare.myState = new State5UncoveredWithMine();
				aGame.uncoverAMine();
			}
			else
			{
				aSquare.myState = new State4UncoveredWithoutMine();
				aGame.uncoverANonMine();
			}
		}

		public void rightClick(Square aSquare)
		{
			aSquare.myState = new State2CoveredWithFlag();
		}

		public void output(Game aGame, Square aSquare)
		{
			System.out.print('C');
		}

		public void uncover(Square aSquare)
		{
			if (aSquare.myHasAMine)
			{
				aSquare.myState = new State5UncoveredWithMine();
			}
			else
			{
				aSquare.myState = new State4UncoveredWithoutMine();
			}
		}
	}

	////////////////////////////////////////////////////////////////////////////////

	private static class State2CoveredWithFlag extends State
	{
		public boolean isCovered()
		{
			return true;
		}

		public void leftClick(Game aGame, Square aSquare)
		{
		}

		public void rightClick(Square aSquare)
		{
			aSquare.myState = new State3CoveredWithQuestionMark();
		}

		public void output(Game aGame, Square aSquare)
		{
			System.out.print('F');
		}

		public void uncover(Square aSquare)
		{
			if (aSquare.myHasAMine)
			{
				aSquare.myState = new State5UncoveredWithMine();
			}
			else
			{
				aSquare.myState = new State4UncoveredWithoutMine();
			}
		}
	}

	////////////////////////////////////////////////////////////////////////////////

	private static class State3CoveredWithQuestionMark extends State
	{
		public boolean isCovered()
		{
			return true;
		}

		public void leftClick(Game aGame, Square aSquare)
		{
			if (aSquare.myHasAMine)
			{
				aSquare.myState = new State5UncoveredWithMine();
				aGame.uncoverAMine();
			}
			else
			{
				aSquare.myState = new State4UncoveredWithoutMine();
				aGame.uncoverANonMine();
			}
		}

		public void rightClick(Square aSquare)
		{
			aSquare.myState = new State1Covered();
		}

		public void output(Game aGame, Square aSquare)
		{
			System.out.print('?');
		}

		public void uncover(Square aSquare)
		{
			if (aSquare.myHasAMine)
			{
				aSquare.myState = new State5UncoveredWithMine();
			}
			else
			{
				aSquare.myState = new State4UncoveredWithoutMine();
			}
		}
	}

	////////////////////////////////////////////////////////////////////////////////

	private static class State4UncoveredWithoutMine extends State
	{
		public boolean isCovered()
		{
			return false;
		}

		public void leftClick(Game aGame, Square aSquare)
		{
		}

		public void rightClick(Square aSquare)
		{
		}

		public void output(Game aGame, Square aSquare)
		{
			int n = aGame.getNumberOfNeighborsWhoHaveAMine(aSquare.myRow, aSquare.myColumn);
			if (n == 0)
			{
				System.out.print(' ');
			}
			else
			{
				System.out.print((char) ('0' + n));
			}
		}

		public void uncover(Square aSquare)
		{
		}
	}

	////////////////////////////////////////////////////////////////////////////////

	private static class State5UncoveredWithMine extends State
	{
		public boolean isCovered()
		{
			return false;
		}

		public void leftClick(Game aGame, Square aSquare)
		{
		}

		public void rightClick(Square aSquare)
		{
		}

		public void output(Game aGame, Square aSquare)
		{
			System.out.print('M');
		}

		public void uncover(Square aSquare)
		{
		}
	}
}
