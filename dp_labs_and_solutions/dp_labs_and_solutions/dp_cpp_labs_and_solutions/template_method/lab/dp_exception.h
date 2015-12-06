// dp_exception.h

#ifndef dp_exception_header
#define dp_exception_header

#include <string>

class dp_exception
{
public:
	dp_exception(const std::string & a_text)
	{
		my_text = a_text;
	}

	const std::string & get_text() const
	{
		return my_text;
	}

private:
	std::string my_text;
};

#endif
