// dp_iterator.h

#ifndef dp_iterator_header
#define dp_iterator_header

#include "dp_exception.h"

template <typename T>
class dp_iterator
{
public:
	virtual ~dp_iterator()
	{
	}

	virtual bool is_done() const = 0;
	virtual T & get_current() const = 0;
	virtual void advance() = 0;

protected:
	dp_iterator()
	{
	}
	dp_iterator(const dp_iterator & other)
	{
		throw dp_exception("dp_iterator(const dp_iterator & other) -- is not supported.");
	}
	dp_iterator & operator=(const dp_iterator & other)
	{
		throw dp_exception("dp_iterator & operator=(const dp_iterator & other) -- is not supported.");
	}
private:
};

#endif
