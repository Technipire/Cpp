// dp_stack.h

#ifndef dp_stack_header
#define dp_stack_header

#include "dp_exception.h"
#include "dp_link.h"

template <typename T>
class dp_stack
{
public:
	dp_stack()
	{
		my_link = NULL;
	}
	dp_stack(const dp_stack & other)
	{
		throw dp_exception("dp_stack(const dp_stack & other) -- is not supported.");
	}
	dp_stack & operator=(const dp_stack & other)
	{
		throw dp_exception("dp_stack & operator=(const dp_stack & other) -- is not supported.");
	}
	~dp_stack()
	{
	}

	bool is_empty() const
	{
		return (my_link == NULL);
	}

	void push(const T & a_value)
	{
		my_link = new dp_link<T>(a_value, my_link);
	}

	void pop()
	{
		if (is_empty())
		{
			throw dp_exception("dp_stack<T>::pop() - The stack is empty.");
		}

		my_link = my_link->get_next();
	}

	T & top() const
	{
		if (is_empty())
		{
			throw dp_exception("dp_stack<T>::top() - The stack is empty.");
		}

		return my_link->get_value();
	}

private:
	dp_link<T> * my_link;
};

#endif
