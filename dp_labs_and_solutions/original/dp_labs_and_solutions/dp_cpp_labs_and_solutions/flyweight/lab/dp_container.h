// dp_container.h

#ifndef dp_container_header
#define dp_container_header

#include "dp_const_iterator.h"
#include "dp_exception.h"
#include "dp_iterator.h"

template <typename T>
class dp_container
{
public:
	virtual ~dp_container()
	{
	}

	virtual dp_const_iterator<T> * make_iterator() const = 0;
	virtual       dp_iterator<T> * make_iterator()       = 0;

	virtual int get_size() const
	{
		int result(0);
		dp_const_iterator<T> * a_iterator = make_iterator();
		while (!a_iterator->is_done())
		{
			result++;
			a_iterator->advance();
		}
		return result;
	}

protected:
	dp_container()
	{
	}
	dp_container(const dp_container & other)
	{
		throw dp_exception("dp_container(const dp_container & other) -- is not supported.");
	}
	dp_container & operator=(const dp_container & other)
	{
		throw dp_exception("dp_container & operator=(const dp_container & other) -- is not supported.");
	}
private:
};

#endif
