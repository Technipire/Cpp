// barista.h

#ifndef barista_header
#define barista_header

#include <string>
#include <vector>
class beverage;

class barista
{
public:
	beverage * make_beverage(const std::vector<std::string> & a_description);
};

#endif
