// game.h

#ifndef game_header
#define game_header

#include "dp_vector.h"
class square;

class game
{
public:
	game(int a_number_of_rows = 3, int a_number_of_columns = 3);

	void play();

	void output() const;

	int get_number_of_neighbors_who_have_a_mine(int a_row, int a_column) const;
	void uncover_a_mine();
	void uncover_a_non_mine();
	void uncover_all_squares();

private:
	square * get_square(int a_row, int a_column) const;
	bool has_a_mine(int a_row, int a_column) const;
	static bool should_have_a_mine();

	int my_number_of_rows;
	int my_number_of_columns;
	int my_number_of_mines;
	bool my_is_over;
	dp_vector<dp_vector<square *> *> my_squares;

	friend class square;
};

#endif
