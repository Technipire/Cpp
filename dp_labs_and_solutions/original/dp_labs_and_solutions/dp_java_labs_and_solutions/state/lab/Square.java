// Square.java

public class Square
{
	private static final int STATE_1_COVERED                    = 1;
	private static final int STATE_2_COVERED_WITH_FLAG          = 2;
	private static final int STATE_3_COVERED_WITH_QUESTION_MARK = 3;
	private static final int STATE_4_UNCOVERED_WITHOUT_MINE     = 4;
	private static final int STATE_5_UNCOVERED_WITH_MINE        = 5;

	public Square(boolean aHasAMine, int aRow, int aColumn)
	{
		myState = STATE_1_COVERED;
		myHasAMine = aHasAMine;
		myRow = aRow;
		myColumn = aColumn;
	}

	public boolean isCovered()
	{
		switch (myState)
		{
		case STATE_1_COVERED:
			return true;
		case STATE_2_COVERED_WITH_FLAG:
			return true;
		case STATE_3_COVERED_WITH_QUESTION_MARK:
			return true;
		case STATE_4_UNCOVERED_WITHOUT_MINE:
			return false;
		case STATE_5_UNCOVERED_WITH_MINE:
			return false;
		default:
			throw new DpException("void isCovered() -- unrecognized state.");
		}
	}

	public boolean hasAMine()
	{
		return myHasAMine;
	}

	public void leftClick(Game aGame)
	{
		switch (myState)
		{
		case STATE_1_COVERED:
			if (myHasAMine)
			{
				myState = STATE_5_UNCOVERED_WITH_MINE;
				aGame.uncoverAMine();
			}
			else
			{
				myState = STATE_4_UNCOVERED_WITHOUT_MINE;
				aGame.uncoverANonMine();
			}
			break;
		case STATE_2_COVERED_WITH_FLAG:
			break;
		case STATE_3_COVERED_WITH_QUESTION_MARK:
			if (myHasAMine)
			{
				myState = STATE_5_UNCOVERED_WITH_MINE;
				aGame.uncoverAMine();
			}
			else
			{
				myState = STATE_4_UNCOVERED_WITHOUT_MINE;
				aGame.uncoverANonMine();
			}
			break;
		case STATE_4_UNCOVERED_WITHOUT_MINE:
			break;
		case STATE_5_UNCOVERED_WITH_MINE:
			break;
		default:
			throw new DpException("void leftClick(Game aGame) -- unrecognized state.");
		}
	}

	public void rightClick()
	{
		switch (myState)
		{
		case STATE_1_COVERED:
			myState = STATE_2_COVERED_WITH_FLAG;
			break;
		case STATE_2_COVERED_WITH_FLAG:
			myState = STATE_3_COVERED_WITH_QUESTION_MARK;
			break;
		case STATE_3_COVERED_WITH_QUESTION_MARK:
			myState = STATE_1_COVERED;
			break;
		case STATE_4_UNCOVERED_WITHOUT_MINE:
			break;
		case STATE_5_UNCOVERED_WITH_MINE:
			break;
		default:
			throw new DpException("void rightClick() -- unrecognized state.");
		}
	}

	public void output(Game aGame)
	{
		switch (myState)
		{
		case STATE_1_COVERED:
			System.out.print('C');
			break;
		case STATE_2_COVERED_WITH_FLAG:
			System.out.print('F');
			break;
		case STATE_3_COVERED_WITH_QUESTION_MARK:
			System.out.print('?');
			break;
		case STATE_4_UNCOVERED_WITHOUT_MINE:
			{
				int n = aGame.getNumberOfNeighborsWhoHaveAMine(myRow, myColumn);
				if (n == 0)
				{
					System.out.print(' ');
				}
				else
				{
					System.out.print((char) ('0' + n));
				}
			}
			break;
		case STATE_5_UNCOVERED_WITH_MINE:
			System.out.print('M');
			break;
		default:
			throw new DpException("void output(Game aGame) -- unrecognized state.");
		}
	}

	public void uncover()
	{
		switch (myState)
		{
		case STATE_1_COVERED:
			if (myHasAMine)
			{
				myState = STATE_5_UNCOVERED_WITH_MINE;
			}
			else
			{
				myState = STATE_4_UNCOVERED_WITHOUT_MINE;
			}
			break;
		case STATE_2_COVERED_WITH_FLAG:
			if (myHasAMine)
			{
				myState = STATE_5_UNCOVERED_WITH_MINE;
			}
			else
			{
				myState = STATE_4_UNCOVERED_WITHOUT_MINE;
			}
			break;
		case STATE_3_COVERED_WITH_QUESTION_MARK:
			if (myHasAMine)
			{
				myState = STATE_5_UNCOVERED_WITH_MINE;
			}
			else
			{
				myState = STATE_4_UNCOVERED_WITHOUT_MINE;
			}
			break;
		case STATE_4_UNCOVERED_WITHOUT_MINE:
			break;
		case STATE_5_UNCOVERED_WITH_MINE:
			break;
		default:
			throw new DpException("void uncover() -- unrecognized state.");
		}
	}

	private boolean myHasAMine;
	private int     myRow;
	private int     myColumn;
	private int     myState;
}
