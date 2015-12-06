// barista.h

#ifndef barista_header
#define barista_header

#include <string>
#include <vector>
class coffee;

class barista
{
public:
	coffee * make_coffee(const std::vector<std::string> & a_description);
};

#endif
