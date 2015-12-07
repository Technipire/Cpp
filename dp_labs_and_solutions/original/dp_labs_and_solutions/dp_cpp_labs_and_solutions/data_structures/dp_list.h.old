// dp_list.h

#ifndef dp_list_header
#define dp_list_header

#include "dp_const_iterator.h"
#include "dp_container.h"
#include "dp_exception.h"
#include "dp_iterator.h"
#include "dp_link.h"

// D P _ L I S T

template <typename T>
class dp_list;

// D P _ L I S T _ C O N S T _ I T E R A T O R

template <typename T>
class dp_list_const_iterator : public dp_const_iterator<T>
{
public:
	dp_list_const_iterator(const dp_list<T> & a_list);
	dp_list_const_iterator(const dp_list_const_iterator & other);
	dp_list_const_iterator & operator=(const dp_list_const_iterator & other);
	virtual ~dp_list_const_iterator();

	virtual bool is_done() const;

	virtual const T & get_current() const;

	virtual void advance();

private:
	const dp_link<T> * my_current_link;
};

// D P _ L I S T _ I T E R A T O R

template <typename T>
class dp_list_iterator : public dp_iterator<T>
{
public:
	dp_list_iterator(dp_list<T> & a_list);
	dp_list_iterator(const dp_list_iterator & other);
	dp_list_iterator & operator=(const dp_list_iterator & other);
	virtual ~dp_list_iterator();

	virtual bool is_done() const;

	virtual T & get_current() const;

	virtual void advance();

private:
	dp_link<T> * my_current_link;
};

// D P _ L I S T

template <typename T>
class dp_list : public dp_container<T>
{
public:
	dp_list();
	dp_list(const dp_list & other);
	dp_list & operator=(const dp_list & other);
	virtual ~dp_list();

	void add(const T & a_value);

	virtual dp_const_iterator<T> * make_iterator() const;
	virtual       dp_iterator<T> * make_iterator()      ;

private:
	dp_link<T> * my_first;
	dp_link<T> * my_last;

	friend class dp_list_const_iterator<T>;
	friend class dp_list_iterator<T>;
};

// D P _ L I S T _ C O N S T _ I T E R A T O R

template <typename T>
inline
dp_list_const_iterator<T>::dp_list_const_iterator(const dp_list<T> & a_list)
{
	my_current_link = a_list.my_first;
}

template <typename T>
inline
dp_list_const_iterator<T>::dp_list_const_iterator(const dp_list_const_iterator<T> & other)
{
	throw dp_exception("dp_list_const_iterator<T>::dp_list_const_iterator(const dp_list_const_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list_const_iterator<T> & dp_list_const_iterator<T>::operator=(const dp_list_const_iterator<T> & other)
{
	throw dp_exception("dp_list_const_iterator<T> & dp_list_const_iterator<T>::operator=(const dp_list_const_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list_const_iterator<T>::~dp_list_const_iterator()
{
}

template <typename T>
inline
bool dp_list_const_iterator<T>::is_done() const
{
	return (my_current_link == NULL);
}

template <typename T>
inline
const T & dp_list_const_iterator<T>::get_current() const
{
	return my_current_link->get_value();
}

template <typename T>
inline
void dp_list_const_iterator<T>::advance()
{
	my_current_link = my_current_link->get_next();
}

// D P _ L I S T _ I T E R A T O R

template <typename T>
inline
dp_list_iterator<T>::dp_list_iterator(dp_list<T> & a_list)
{
	my_current_link = a_list.my_first;
}

template <typename T>
inline
dp_list_iterator<T>::dp_list_iterator(const dp_list_iterator<T> & other)
{
	throw dp_exception("dp_list_iterator<T>::dp_list_iterator(const dp_list_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list_iterator<T> & dp_list_iterator<T>::operator=(const dp_list_iterator<T> & other)
{
	throw dp_exception("dp_list_iterator<T> & dp_list_iterator<T>::operator=(const dp_list_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list_iterator<T>::~dp_list_iterator()
{
}

template <typename T>
inline
bool dp_list_iterator<T>::is_done() const
{
	return (my_current_link == NULL);
}

template <typename T>
inline
T & dp_list_iterator<T>::get_current() const
{
	return my_current_link->get_value();
}

template <typename T>
inline
void dp_list_iterator<T>::advance()
{
	my_current_link = my_current_link->get_next();
}

// D P _ L I S T

template <typename T>
inline
dp_list<T>::dp_list()
{
	my_first = NULL;
	my_last = NULL;
}

template <typename T>
inline
dp_list<T>::dp_list(const dp_list<T> & other)
{
	throw dp_exception("dp_list<T>::dp_list(const dp_list<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list<T> & dp_list<T>::operator=(const dp_list<T> & other)
{
	throw dp_exception("dp_list<T> & dp_list<T>::operator=(const dp_list<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_list<T>::~dp_list()
{
}

template <typename T>
inline
void dp_list<T>::add(const T & a_value)
{
	dp_link<T> * a_link = new dp_link<T>(a_value);
	if (my_first == NULL)
	{
		my_first = a_link;
	}
	else
	{
		my_last->set_next(a_link);
	}
	my_last = a_link;
}

template <typename T>
inline
dp_const_iterator<T> * dp_list<T>::make_iterator() const
{
	return new dp_list_const_iterator<T>(*this);
}

template <typename T>
inline
dp_iterator<T> * dp_list<T>::make_iterator()
{
	return new dp_list_iterator<T>(*this);
}

#endif
