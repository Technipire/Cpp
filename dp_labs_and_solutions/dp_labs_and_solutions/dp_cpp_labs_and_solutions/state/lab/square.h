// square.h

#ifndef square_header
#define square_header

class game;

class square
{
public:
	square(bool a_has_a_mine, int a_row, int a_column);

	bool is_covered() const;
	bool has_a_mine() const;

	void left_click(game & a_game);
	void right_click();

	void output(const game & a_game) const;

	void uncover();

private:
	enum state
	{
		STATE_1_COVERED,
		STATE_2_COVERED_WITH_FLAG,
		STATE_3_COVERED_WITH_QUESTION_MARK,
		STATE_4_UNCOVERED_WITHOUT_MINE,
		STATE_5_UNCOVERED_WITH_MINE,
	};
	bool  my_has_a_mine;
	int   my_row;
	int   my_column;
	state my_state;
};

#endif
