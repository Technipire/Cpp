// square.cpp

#include <iostream>
#include "dp_exception.h"
#include "game.h"
#include "square.h"

square::square(bool a_has_a_mine, int a_row, int a_column)
: my_has_a_mine(a_has_a_mine)
, my_row(a_row)
, my_column(a_column)
, my_state(new state_1_covered())
{
}

bool square::is_covered() const
{
	return my_state->is_covered();
}

bool square::has_a_mine() const
{
	return my_has_a_mine;
}

void square::left_click(game & a_game)
{
	my_state->left_click(a_game, *this);
}

void square::right_click()
{
	my_state->right_click(*this);
}

void square::output(const game & a_game) const
{
	my_state->output(a_game, *this);
}

void square::uncover()
{
	my_state->uncover(*this);
}

////////////////////////////////////////////////////////////////////////////////

bool square::state_1_covered::is_covered() const
{
	return true;
}

void square::state_1_covered::left_click(game & a_game, square & a_square) const
{
	if (a_square.my_has_a_mine)
	{
		a_square.my_state = new state_5_uncovered_with_mine();
		a_game.uncover_a_mine();
	}
	else
	{
		a_square.my_state = new state_4_uncovered_without_mine();
		a_game.uncover_a_non_mine();
	}
}

void square::state_1_covered::right_click(square & a_square) const
{
	a_square.my_state = new state_2_covered_with_flag();
}

void square::state_1_covered::output(const game & a_game, const square & a_square) const
{
	std::cout << 'C';
}

void square::state_1_covered::uncover(square & a_square) const
{
	if (a_square.my_has_a_mine)
	{
		a_square.my_state = new state_5_uncovered_with_mine();
	}
	else
	{
		a_square.my_state = new state_4_uncovered_without_mine();
	}
}

////////////////////////////////////////////////////////////////////////////////

bool square::state_2_covered_with_flag::is_covered() const
{
	return true;
}

void square::state_2_covered_with_flag::left_click(game & a_game, square & a_square) const
{
}

void square::state_2_covered_with_flag::right_click(square & a_square) const
{
	a_square.my_state = new state_3_covered_with_question_mark();
}

void square::state_2_covered_with_flag::output(const game & a_game, const square & a_square) const
{
	std::cout << 'F';
}

void square::state_2_covered_with_flag::uncover(square & a_square) const
{
	if (a_square.my_has_a_mine)
	{
		a_square.my_state = new state_5_uncovered_with_mine();
	}
	else
	{
		a_square.my_state = new state_4_uncovered_without_mine();
	}
}

////////////////////////////////////////////////////////////////////////////////

bool square::state_3_covered_with_question_mark::is_covered() const
{
	return true;
}

void square::state_3_covered_with_question_mark::left_click(game & a_game, square & a_square) const
{
	if (a_square.my_has_a_mine)
	{
		a_square.my_state = new state_5_uncovered_with_mine();
		a_game.uncover_a_mine();
	}
	else
	{
		a_square.my_state = new state_4_uncovered_without_mine();
		a_game.uncover_a_non_mine();
	}
}

void square::state_3_covered_with_question_mark::right_click(square & a_square) const
{
	a_square.my_state = new state_1_covered();
}

void square::state_3_covered_with_question_mark::output(const game & a_game, const square & a_square) const
{
	std::cout << '?';
}

void square::state_3_covered_with_question_mark::uncover(square & a_square) const
{
	if (a_square.my_has_a_mine)
	{
		a_square.my_state = new state_5_uncovered_with_mine();
	}
	else
	{
		a_square.my_state = new state_4_uncovered_without_mine();
	}
}

////////////////////////////////////////////////////////////////////////////////

bool square::state_4_uncovered_without_mine::is_covered() const
{
	return false;
}

void square::state_4_uncovered_without_mine::left_click(game & a_game, square & a_square) const
{
}

void square::state_4_uncovered_without_mine::right_click(square & a_square) const
{
}

void square::state_4_uncovered_without_mine::output(const game & a_game, const square & a_square) const
{
	int n = a_game.get_number_of_neighbors_who_have_a_mine(a_square.my_row, a_square.my_column);
	if (n == 0)
	{
		std::cout << ' ';
	}
	else
	{
		std::cout << char('0' + n);
	}
}

void square::state_4_uncovered_without_mine::uncover(square & a_square) const
{
}

////////////////////////////////////////////////////////////////////////////////

bool square::state_5_uncovered_with_mine::is_covered() const
{
	return false;
}

void square::state_5_uncovered_with_mine::left_click(game & a_game, square & a_square) const
{
}

void square::state_5_uncovered_with_mine::right_click(square & a_square) const
{
}

void square::state_5_uncovered_with_mine::output(const game & a_game, const square & a_square) const
{
	std::cout << 'M';
}

void square::state_5_uncovered_with_mine::uncover(square & a_square) const
{
}
