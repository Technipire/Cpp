// to_string.h

#ifndef to_string_header
#define to_string_header

#include <string>
#include <sstream>

template <typename T>
std::string to_string(const T & t)
{
	std::ostringstream s;
	s << std::boolalpha;
	s << t;
	return s.str();
}

#endif
