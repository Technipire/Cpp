// test_stack.cpp

#include <iostream>
#include "dp_stack.h"

template <typename T>
inline
void display_stack(dp_stack<T> & a_stack)
{
	std::cout << "display_stack(a_stack): <top> ";
	while (!a_stack.is_empty())
	{
		T & a_value = a_stack.top();
		std::cout << a_value << " ";
		a_stack.pop();
	}
	std::cout << "<bottom>" << std::endl;
}

int main()
{
	dp_stack<int> a_stack;
	display_stack(a_stack);

	a_stack.push(1);
	display_stack(a_stack);

	a_stack.push(1);
	a_stack.push(2);
	display_stack(a_stack);

	return 0;
}
