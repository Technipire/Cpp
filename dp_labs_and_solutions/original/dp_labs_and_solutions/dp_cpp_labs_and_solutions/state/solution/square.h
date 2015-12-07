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
	class state
	{
	public:
		virtual bool is_covered() const = 0;
		virtual void left_click(game & a_game, square & a_square) const = 0;
		virtual void right_click(square & a_square) const = 0;
		virtual void output(const game & a_game, const square & a_square) const = 0;
		virtual void uncover(square & a_square) const = 0;
	};
	class state_1_covered : public state
	{
	public:
		virtual bool is_covered() const;
		virtual void left_click(game & a_game, square & a_square) const;
		virtual void right_click(square & a_square) const;
		virtual void output(const game & a_game, const square & a_square) const;
		virtual void uncover(square & a_square) const;
	};
	class state_2_covered_with_flag : public state
	{
	public:
		virtual bool is_covered() const;
		virtual void left_click(game & a_game, square & a_square) const;
		virtual void right_click(square & a_square) const;
		virtual void output(const game & a_game, const square & a_square) const;
		virtual void uncover(square & a_square) const;
	};
	class state_3_covered_with_question_mark : public state
	{
	public:
		virtual bool is_covered() const;
		virtual void left_click(game & a_game, square & a_square) const;
		virtual void right_click(square & a_square) const;
		virtual void output(const game & a_game, const square & a_square) const;
		virtual void uncover(square & a_square) const;
	};
	class state_4_uncovered_without_mine : public state
	{
	public:
		virtual bool is_covered() const;
		virtual void left_click(game & a_game, square & a_square) const;
		virtual void right_click(square & a_square) const;
		virtual void output(const game & a_game, const square & a_square) const;
		virtual void uncover(square & a_square) const;
	};
	class state_5_uncovered_with_mine : public state
	{
	public:
		virtual bool is_covered() const;
		virtual void left_click(game & a_game, square & a_square) const;
		virtual void right_click(square & a_square) const;
		virtual void output(const game & a_game, const square & a_square) const;
		virtual void uncover(square & a_square) const;
	};

	bool  my_has_a_mine;
	int   my_row;
	int   my_column;
	state * my_state;
};

#endif
