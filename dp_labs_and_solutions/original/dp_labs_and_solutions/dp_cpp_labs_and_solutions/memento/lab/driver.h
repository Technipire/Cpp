// driver.h

#ifndef driver_header
#define driver_header

#include <string>

class driver
{
public:
	driver(const std::string & a_name);

	void turn_left();
	void go_straight(int how_far);
	void turn_right();

	void report_position() const;

	driver * clone() const;

private:
	void set_name(const std::string & a_name);
	const std::string & get_name() const;

	void set_x(int a_x);
	int get_x() const;

	void set_y(int a_y);
	int get_y() const;

	void set_heading(int a_heading);
	int get_heading() const;

	std::string get_heading_as_string() const;

	static const int NORTH = 1;
	static const int EAST  = 2;
	static const int SOUTH = 3;
	static const int WEST  = 4;

	std::string my_name;
	int my_x;
	int my_y;
	int my_heading;
};

#endif