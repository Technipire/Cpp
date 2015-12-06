// dp_link.h

#ifndef dp_link_header
#define dp_link_header

template <typename T>
class dp_link
{
public:
	// use the member initialization list, instead of set_xxx()'s, in case T doesn't have a public default constructor.
	dp_link(const T & a_value, dp_link * a_next = NULL)
	: my_value(a_value), my_next(a_next)
	{
	}

	void set_value(const T & a_value)
	{
		my_value = a_value;
	}

	const T & get_value() const
	{
		return my_value;
	}

	T & get_value()
	{
		return my_value;
	}

	void set_next(dp_link * a_next)
	{
		my_next = a_next;
	}

	dp_link * get_next() const
	{
		return my_next;
	}

private:
	T my_value;
	dp_link * my_next;
};

#endif
