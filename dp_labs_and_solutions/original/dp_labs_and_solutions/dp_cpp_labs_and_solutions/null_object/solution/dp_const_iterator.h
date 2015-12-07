// dp_const_iterator.h

#ifndef dp_const_iterator_header
#define dp_const_iterator_header

#include "dp_exception.h"

template <typename T>
class dp_const_iterator
{
public:
	virtual ~dp_const_iterator()
	{
	}

	virtual bool is_done() const = 0;
	virtual const T & get_current() const = 0;
	virtual void advance() = 0;

protected:
	dp_const_iterator()
	{
	}
	dp_const_iterator(const dp_const_iterator & other)
	{
		throw dp_exception("dp_const_iterator(const dp_const_iterator & other) -- is not supported.");
	}
	dp_const_iterator & operator=(const dp_const_iterator & other)
	{
		throw dp_exception("dp_const_iterator & operator=(const dp_const_iterator & other) -- is not supported.");
	}

private:
};

#endif
