// dp_pair.h

#ifndef dp_pair_header
#define dp_pair_header

template <typename First, typename Second>
class dp_pair
{
public:
	dp_pair(const First & a_first, const Second & a_second)
	{
		set_first(a_first);
		set_second(a_second);
	}

	void set_first(const First & a_first)
	{
		my_first = a_first;
	}

	const First & get_first() const
	{
		return my_first;
	}

	First & get_first()
	{
		return my_first;
	}

	void set_second(const Second & a_second)
	{
		my_second = a_second;
	}

	const Second & get_second() const
	{
		return my_second;
	}

	Second & get_second()
	{
		return my_second;
	}

private:
	First  my_first;
	Second my_second;
};

#endif
