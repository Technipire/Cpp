// square.cpp

#include <iostream>
#include "dp_exception.h"
#include "game.h"
#include "square.h"

square::square(bool a_has_a_mine, int a_row, int a_column)
: my_has_a_mine(a_has_a_mine)
, my_row(a_row)
, my_column(a_column)
, my_state(STATE_1_COVERED)
{
}

bool square::is_covered() const
{
	switch (my_state)
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
		throw dp_exception("void square::is_covered() -- unrecognized state.");
	}
}

bool square::has_a_mine() const
{
	return my_has_a_mine;
}

void square::left_click(game & a_game)
{
	switch (my_state)
	{
	case STATE_1_COVERED:
		if (my_has_a_mine)
		{
			my_state = STATE_5_UNCOVERED_WITH_MINE;
			a_game.uncover_a_mine();
		}
		else
		{
			my_state = STATE_4_UNCOVERED_WITHOUT_MINE;
			a_game.uncover_a_non_mine();
		}
		break;
	case STATE_2_COVERED_WITH_FLAG:
		break;
	case STATE_3_COVERED_WITH_QUESTION_MARK:
		if (my_has_a_mine)
		{
			my_state = STATE_5_UNCOVERED_WITH_MINE;
			a_game.uncover_a_mine();
		}
		else
		{
			my_state = STATE_4_UNCOVERED_WITHOUT_MINE;
			a_game.uncover_a_non_mine();
		}
		break;
	case STATE_4_UNCOVERED_WITHOUT_MINE:
		break;
	case STATE_5_UNCOVERED_WITH_MINE:
		break;
	default:
		throw dp_exception("void square::left_click(game & a_game) -- unrecognized state.");
	}
}

void square::right_click()
{
	switch (my_state)
	{
	case STATE_1_COVERED:
		my_state = STATE_2_COVERED_WITH_FLAG;
		break;
	case STATE_2_COVERED_WITH_FLAG:
		my_state = STATE_3_COVERED_WITH_QUESTION_MARK;
		break;
	case STATE_3_COVERED_WITH_QUESTION_MARK:
		my_state = STATE_1_COVERED;
		break;
	case STATE_4_UNCOVERED_WITHOUT_MINE:
		break;
	case STATE_5_UNCOVERED_WITH_MINE:
		break;
	default:
		throw dp_exception("void square::right_click() -- unrecognized state.");
	}
}

void square::output(const game & a_game) const
{
	switch (my_state)
	{
	case STATE_1_COVERED:
		std::cout << 'C';
		break;
	case STATE_2_COVERED_WITH_FLAG:
		std::cout << 'F';
		break;
	case STATE_3_COVERED_WITH_QUESTION_MARK:
		std::cout << '?';
		break;
	case STATE_4_UNCOVERED_WITHOUT_MINE:
		{
			int n = a_game.get_number_of_neighbors_who_have_a_mine(my_row, my_column);
			if (n == 0)
			{
				std::cout << ' ';
			}
			else
			{
				std::cout << char('0' + n);
			}
		}
		break;
	case STATE_5_UNCOVERED_WITH_MINE:
		std::cout << 'M';
		break;
	default:
		throw dp_exception("void square::output(const game & a_game) const -- unrecognized state.");
	}
}

void square::uncover()
{
	switch (my_state)
	{
	case STATE_1_COVERED:
		if (my_has_a_mine)
		{
			my_state = STATE_5_UNCOVERED_WITH_MINE;
		}
		else
		{
			my_state = STATE_4_UNCOVERED_WITHOUT_MINE;
		}
		break;
	case STATE_2_COVERED_WITH_FLAG:
		if (my_has_a_mine)
		{
			my_state = STATE_5_UNCOVERED_WITH_MINE;
		}
		else
		{
			my_state = STATE_4_UNCOVERED_WITHOUT_MINE;
		}
		break;
	case STATE_3_COVERED_WITH_QUESTION_MARK:
		if (my_has_a_mine)
		{
			my_state = STATE_5_UNCOVERED_WITH_MINE;
		}
		else
		{
			my_state = STATE_4_UNCOVERED_WITHOUT_MINE;
		}
		break;
	case STATE_4_UNCOVERED_WITHOUT_MINE:
		break;
	case STATE_5_UNCOVERED_WITH_MINE:
		break;
	default:
		throw dp_exception("void square::uncover() -- unrecognized state.");
	}
}
