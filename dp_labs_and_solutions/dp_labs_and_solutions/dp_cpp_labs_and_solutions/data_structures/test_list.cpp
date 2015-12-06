// test_list.cpp

#include <iostream>
#include "dp_const_iterator.h"
#include "dp_list.h"

template <typename T>
inline
void display_list(const dp_list<T> & a_list)
{
	std::cout << "display_list(a_list): <front> ";
	dp_const_iterator<T> * a_iterator = a_list.make_iterator();
	while (!a_iterator->is_done())
	{
		const T & a_value = a_iterator->get_current();
		std::cout << a_value << " ";
		a_iterator->advance();
	}
	std::cout << "<back> (size = " << a_list.get_size() << ")" << std::endl;
}

template <typename T>
inline
void modify_list(dp_list<T> & a_list)
{
	dp_iterator<T> * a_iterator = a_list.make_iterator();
	while (!a_iterator->is_done())
	{
		T & a_value = a_iterator->get_current();
		a_value = 99;
		a_iterator->advance();
	}
}

int main()
{
	dp_list<int> a_list;
	display_list(a_list);
	modify_list(a_list);
	display_list(a_list);

	a_list.add(1);
	display_list(a_list);
	modify_list(a_list);
	display_list(a_list);

	a_list.add(2);
	display_list(a_list);
	modify_list(a_list);
	display_list(a_list);

	return 0;
}
