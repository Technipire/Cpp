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

public:
	class memento_interface
	{
	public:
		virtual ~memento_interface() = 0;

	protected:
		memento_interface();

	private:
		// DO NOT IMPLEMENT!
		memento_interface(const memento_interface & other);
		// DO NOT IMPLEMENT!
		memento_interface & operator=(const memento_interface & other);
	};

private:
	class memento_implementation : public memento_interface
	{
	public:
		memento_implementation(const driver & a_originator);

		const driver * my_originator;
		const driver * my_clone;

	private:
		// DO NOT IMPLEMENT!
		memento_implementation(const memento_implementation & other);
		// DO NOT IMPLEMENT!
		memento_implementation & operator=(const memento_implementation & other);
	};

public:
	const memento_interface * backup() const;
	void restore(const memento_interface * a_memento_interface);
};

#endif
