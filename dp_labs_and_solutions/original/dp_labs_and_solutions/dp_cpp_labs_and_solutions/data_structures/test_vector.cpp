// test_vector.cpp

#include <iostream>
#include "dp_const_iterator.h"
#include "dp_vector.h"

template <typename T>
inline
void display_vector(const dp_vector<T> & a_vector)
{
	std::cout << "display_vector(a_vector): <front> ";
	dp_const_iterator<T> * a_iterator = a_vector.make_iterator();
	while (!a_iterator->is_done())
	{
		const T & a_value = a_iterator->get_current();
		std::cout << a_value << " ";
		a_iterator->advance();
	}
	std::cout << "<back> (size = " << a_vector.get_size() << ")" << std::endl;
}

template <typename T>
inline
void display_reverse_vector(const dp_vector<T> & a_vector)
{
	std::cout << "display_vector(a_vector): <front> ";
	dp_const_iterator<T> * a_iterator = a_vector.make_reverse_iterator();
	while (!a_iterator->is_done())
	{
		const T & a_value = a_iterator->get_current();
		std::cout << a_value << " ";
		a_iterator->advance();
	}
	std::cout << "<back> (size = " << a_vector.get_size() << ")" << std::endl;
}

int main()
{
	dp_vector<int> a_vector;
	display_vector(a_vector);
	display_reverse_vector(a_vector);

	a_vector.add(1);
	display_vector(a_vector);
	display_reverse_vector(a_vector);

	a_vector.add(2);
	display_vector(a_vector);
	display_reverse_vector(a_vector);

	return 0;
}
