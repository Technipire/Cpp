// test_map.cpp

#include <iostream>
#include "dp_map.h"

template <typename Key, typename Value>
inline
void display_map(const dp_map<Key, Value> & a_map)
{
	std::cout << "display_map(a_map): ";
	if (a_map.contains(1))
	{
		std::cout << "[1, " << a_map.get(1) << "] ";
	}
	if (a_map.contains(2))
	{
		std::cout << "[2, " << a_map.get(2) << "] ";
	}
	std::cout << std::endl;
}

int main()
{
	dp_map<int, int> a_map;
	display_map(a_map);

	a_map.put(1, -1);
	display_map(a_map);

	a_map.put(2, -2);
	display_map(a_map);

	return 0;
}
