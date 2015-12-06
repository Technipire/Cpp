// game.cpp

#include <cstdlib>
#include <iostream>
#include "dp_exception.h"
#include "game.h"
#include "square.h"

game::game(int a_number_of_rows, int a_number_of_columns)
{
	my_number_of_rows    = a_number_of_rows;
	my_number_of_columns = a_number_of_columns;
	my_number_of_mines   = 0;

	my_is_over = false;

	for (int a_row = 0; a_row < my_number_of_rows; ++a_row)
	{
		dp_vector<square *> * a_vector = new dp_vector<square *>();

		for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
		{
			bool has_a_mine(should_have_a_mine());
			if (has_a_mine)
			{
				++my_number_of_mines;
			}
			a_vector->add(new square(has_a_mine, a_row, a_column));
		}

		my_squares.add(a_vector);
	}
}

bool game::should_have_a_mine()
{
	static int percent_of_squares_with_a_mine(30);

	return (std::rand() % 100) < percent_of_squares_with_a_mine;
}

bool game::has_a_mine(int a_row, int a_column) const
{
	if ((0 <= a_row    && a_row    < my_number_of_rows   )
	&&  (0 <= a_column && a_column < my_number_of_columns))
	{
		return get_square(a_row, a_column)->has_a_mine();
	}
	else
	{
		return false;
	}
}

square * game::get_square(int a_row, int a_column) const
{
	if (a_row < 0
	||  a_row >= my_number_of_rows)
	{
		throw dp_exception("square * game::get_square(int a_row, int a_column) const -- invalid a_row.");
	}
	if (a_column < 0
	||  a_column >= my_number_of_columns)
	{
		throw dp_exception("square * game::get_square(int a_row, int a_column) const -- invalid a_column.");
	}
	dp_vector<square *> * a_vector = my_squares.get(a_row);
	square * result = a_vector->get(a_column);
	return result;
}

void game::play()
{
	while (!my_is_over)
	{
		output();

		std::cout << std::endl;
		std::cout << "Enter 'q' to quit or a row number: ";
		char c;
		std::cin >> c;
		if (c == 'q')
		{
			uncover_all_squares();
			output();
			return;
		}
		int a_row = (c - '0');
		if (a_row < 0 || a_row >= my_number_of_rows)
		{
			std::cerr << "Invalid row, try again." << std::endl;
			continue;
		}
		std::cout << "Enter a column number: ";
		std::cin >> c;
		int a_column = (c - '0');
		if (a_column < 0 || a_column >= my_number_of_columns)
		{
			std::cerr << "Invalid column, try again." << std::endl;
			continue;
		}
		square * a_square = get_square(a_row, a_column);
		std::cout << "Enter 'l' to left-click or 'r' to right-click: ";
		std::cin >> c;
		if (c == 'l')
		{
			a_square->left_click(*this);
		}
		else if (c == 'r')
		{
			a_square->right_click();
		}
		else
		{
			std::cerr << "Invalid entry, try again." << std::endl;
			continue;
		}
	}
	output();
}

int game::get_number_of_neighbors_who_have_a_mine(int a_row, int a_column) const
{
	int result(0);

	result += (has_a_mine(a_row - 1, a_column - 1) ? 1 : 0);
	result += (has_a_mine(a_row - 1, a_column    ) ? 1 : 0);
	result += (has_a_mine(a_row - 1, a_column + 1) ? 1 : 0);

	result += (has_a_mine(a_row    , a_column - 1) ? 1 : 0);
	result += (has_a_mine(a_row    , a_column + 1) ? 1 : 0);

	result += (has_a_mine(a_row + 1, a_column - 1) ? 1 : 0);
	result += (has_a_mine(a_row + 1, a_column    ) ? 1 : 0);
	result += (has_a_mine(a_row + 1, a_column + 1) ? 1 : 0);

	return result;
}

void game::output() const
{
	std::cout << "  ";
	for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
	{
		std::cout << a_column;
	}
	std::cout << std::endl;
	std::cout << "  ";
	for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
	{
		std::cout << '-';
	}
	std::cout << std::endl;

	for (int a_row = 0; a_row < my_number_of_rows; ++a_row)
	{
		dp_vector<square *> * a_vector = my_squares.get(a_row);
		std::cout << a_row << "|";

		for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
		{
			square * a_square = a_vector->get(a_column);
			a_square->output(*this);
		}

		std::cout << std::endl;
	}
}

void game::uncover_a_mine()
{
	std::cout << "YOU LOSE!!! :-(" << std::endl;

	uncover_all_squares();

	my_is_over = true;
}

void game::uncover_a_non_mine()
{
	bool is_a_win(true);

	// the definition of "win" is: every square without a mine is uncovered.
	for (int a_row = 0; a_row < my_number_of_rows; ++a_row)
	{
		for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
		{
			square * a_square = get_square(a_row, a_column);
			if (!a_square->has_a_mine() && a_square->is_covered())
			{
				is_a_win = false;
			}
		}
	}
	if (is_a_win)
	{
		std::cout << "YOU WIN!!! :-)" << std::endl;

		uncover_all_squares();

		my_is_over = true;
	}
}

void game::uncover_all_squares()
{
	for (int a_row = 0; a_row < my_number_of_rows; ++a_row)
	{
		for (int a_column = 0; a_column < my_number_of_columns; ++a_column)
		{
			get_square(a_row, a_column)->uncover();
		}
	}
}
