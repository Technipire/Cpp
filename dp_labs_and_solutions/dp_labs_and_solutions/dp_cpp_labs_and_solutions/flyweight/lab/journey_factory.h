#ifndef JOURNEY_FACTORY__H__
#define JOURNEY_FACTORY__H__

#include <unordered_map>
class journey;

class journey_factory
{
	public:
		journey_factory();
		journey* output(std::string name);
	private:
		unordered_map<string, journey*> journeyMap;
};

#endif