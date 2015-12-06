// dp_vector.h

#ifndef dp_vector_header
#define dp_vector_header

#include "dp_const_iterator.h"
#include "dp_container.h"
#include "dp_exception.h"
#include "dp_iterator.h"

// D P _ V E C T O R

template <typename T>
class dp_vector;

// D P _ V E C T O R _ C O N S T _ I T E R A T O R

template <typename T>
class dp_vector_const_iterator : public dp_const_iterator<T>
{
public:
	dp_vector_const_iterator(const dp_vector<T> & a_vector);
	dp_vector_const_iterator(const dp_vector_const_iterator & other);
	dp_vector_const_iterator & operator=(const dp_vector_const_iterator & other);
	virtual ~dp_vector_const_iterator();

	virtual bool is_done() const;

	virtual const T & get_current() const;

	virtual void advance();

private:
	const dp_vector<T> & my_vector;
	int my_index;
};

// D P _ V E C T O R _ I T E R A T O R

template <typename T>
class dp_vector_iterator : public dp_iterator<T>
{
public:
	dp_vector_iterator(dp_vector<T> & a_vector);
	dp_vector_iterator(const dp_vector_iterator & other);
	dp_vector_iterator & operator=(const dp_vector_iterator & other);
	virtual ~dp_vector_iterator();

	virtual bool is_done() const;

	virtual T & get_current() const;

	virtual void advance();

private:
	dp_vector<T> & my_vector;
	int my_index;
};

// D P _ V E C T O R _ C O N S T _ R E V E R S E _ I T E R A T O R

template <typename T>
class dp_vector_const_reverse_iterator : public dp_const_iterator<T>
{
public:
	dp_vector_const_reverse_iterator(const dp_vector<T> & a_vector);
	dp_vector_const_reverse_iterator(const dp_vector_const_reverse_iterator & other);
	dp_vector_const_reverse_iterator & operator=(const dp_vector_const_reverse_iterator & other);
	virtual ~dp_vector_const_reverse_iterator();

	virtual bool is_done() const;

	virtual const T & get_current() const;

	virtual void advance();

private:
	const dp_vector<T> & my_vector;
	int my_index;
};

// D P _ V E C T O R _ R E V E R S E _ I T E R A T O R

template <typename T>
class dp_vector_reverse_iterator : public dp_iterator<T>
{
public:
	dp_vector_reverse_iterator(dp_vector<T> & a_vector);
	dp_vector_reverse_iterator(const dp_vector_reverse_iterator & other);
	dp_vector_reverse_iterator & operator=(const dp_vector_reverse_iterator & other);
	virtual ~dp_vector_reverse_iterator();

	virtual bool is_done() const;

	virtual T & get_current() const;

	virtual void advance();

private:
	dp_vector<T> & my_vector;
	int my_index;
};

// D P _ V E C T O R

template <typename T>
class dp_vector : public dp_container<T>
{
public:
	dp_vector();
	dp_vector(const dp_vector & other);
	dp_vector & operator=(const dp_vector & other);
	virtual ~dp_vector();

	void add(const T & a_value);

	virtual int get_size() const;

	void set(int a_subscript, const T & a_value);
	const T & get(int a_subscript) const;
	      T & get(int a_subscript)      ;

	virtual dp_const_iterator<T> * make_iterator() const;
	virtual       dp_iterator<T> * make_iterator()      ;

	virtual dp_const_iterator<T> * make_reverse_iterator() const;
	virtual       dp_iterator<T> * make_reverse_iterator()      ;

private:
	void validate_subscript(int a_subscript) const;

	T * my_elements;
	int my_number_of_elements;
};

// D P _ V E C T O R _ C O N S T _ I T E R A T O R

template <typename T>
inline
dp_vector_const_iterator<T>::dp_vector_const_iterator(const dp_vector<T> & a_vector)
: my_vector(a_vector), my_index(0)
{
}

template <typename T>
inline
dp_vector_const_iterator<T>::dp_vector_const_iterator(const dp_vector_const_iterator<T> & other)
{
	throw dp_exception("dp_vector_const_iterator<T>::dp_vector_const_iterator(const dp_vector_const_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_const_iterator<T> & dp_vector_const_iterator<T>::operator=(const dp_vector_const_iterator<T> & other)
{
	throw dp_exception("dp_vector_const_iterator<T> & dp_vector_const_iterator<T>::operator=(const dp_vector_const_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_const_iterator<T>::~dp_vector_const_iterator()
{
}

template <typename T>
inline
bool dp_vector_const_iterator<T>::is_done() const
{
	return (my_index >= my_vector.get_size());
}

template <typename T>
inline
const T & dp_vector_const_iterator<T>::get_current() const
{
	return my_vector.get(my_index);
}

template <typename T>
inline
void dp_vector_const_iterator<T>::advance()
{
	my_index++;
}

// D P _ V E C T O R _ I T E R A T O R

template <typename T>
inline
dp_vector_iterator<T>::dp_vector_iterator(dp_vector<T> & a_vector)
: my_vector(a_vector), my_index(0)
{
}

template <typename T>
inline
dp_vector_iterator<T>::dp_vector_iterator(const dp_vector_iterator<T> & other)
{
	throw dp_exception("dp_vector_iterator<T>::dp_vector_iterator(const dp_vector_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_iterator<T> & dp_vector_iterator<T>::operator=(const dp_vector_iterator<T> & other)
{
	throw dp_exception("dp_vector_iterator<T> & dp_vector_iterator<T>::operator=(const dp_vector_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_iterator<T>::~dp_vector_iterator()
{
}

template <typename T>
inline
bool dp_vector_iterator<T>::is_done() const
{
	return (my_index >= my_vector.get_size());
}

template <typename T>
inline
T & dp_vector_iterator<T>::get_current() const
{
	return my_vector.get(my_index);
}

template <typename T>
inline
void dp_vector_iterator<T>::advance()
{
	my_index++;
}

// D P _ V E C T O R _ C O N S T _ R E V E R S E _ I T E R A T O R

template <typename T>
inline
dp_vector_const_reverse_iterator<T>::dp_vector_const_reverse_iterator(const dp_vector<T> & a_vector)
: my_vector(a_vector), my_index(a_vector.get_size() - 1)
{
}

template <typename T>
inline
dp_vector_const_reverse_iterator<T>::dp_vector_const_reverse_iterator(const dp_vector_const_reverse_iterator<T> & other)
{
	throw dp_exception("dp_vector_const_reverse_iterator<T>::dp_vector_const_reverse_iterator(const dp_vector_const_reverse_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_const_reverse_iterator<T> & dp_vector_const_reverse_iterator<T>::operator=(const dp_vector_const_reverse_iterator<T> & other)
{
	throw dp_exception("dp_vector_const_reverse_iterator<T> & dp_vector_const_reverse_iterator<T>::operator=(const dp_vector_const_reverse_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_const_reverse_iterator<T>::~dp_vector_const_reverse_iterator()
{
}

template <typename T>
inline
bool dp_vector_const_reverse_iterator<T>::is_done() const
{
	return (my_index < 0);
}

template <typename T>
inline
const T & dp_vector_const_reverse_iterator<T>::get_current() const
{
	return my_vector.get(my_index);
}

template <typename T>
inline
void dp_vector_const_reverse_iterator<T>::advance()
{
	my_index--;
}

// D P _ V E C T O R _ R E V E R S E _ I T E R A T O R

template <typename T>
inline
dp_vector_reverse_iterator<T>::dp_vector_reverse_iterator(dp_vector<T> & a_vector)
: my_vector(a_vector), my_index(a_vector.get_size() - 1)
{
}

template <typename T>
inline
dp_vector_reverse_iterator<T>::dp_vector_reverse_iterator(const dp_vector_reverse_iterator<T> & other)
{
	throw dp_exception("dp_vector_reverse_iterator<T>::dp_vector_reverse_iterator(const dp_vector_reverse_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_reverse_iterator<T> & dp_vector_reverse_iterator<T>::operator=(const dp_vector_reverse_iterator<T> & other)
{
	throw dp_exception("dp_vector_reverse_iterator<T> & dp_vector_reverse_iterator<T>::operator=(const dp_vector_reverse_iterator<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector_reverse_iterator<T>::~dp_vector_reverse_iterator()
{
}

template <typename T>
inline
bool dp_vector_reverse_iterator<T>::is_done() const
{
	return (my_index < 0);
}

template <typename T>
inline
T & dp_vector_reverse_iterator<T>::get_current() const
{
	return my_vector.get(my_index);
}

template <typename T>
inline
void dp_vector_reverse_iterator<T>::advance()
{
	my_index--;
}

// D P _ V E C T O R

template <typename T>
inline
dp_vector<T>::dp_vector()
{
	my_elements = NULL;
	my_number_of_elements = 0;
}

template <typename T>
inline
dp_vector<T>::dp_vector(const dp_vector<T> & other)
{
	throw dp_exception("dp_vector<T>::dp_vector(const dp_vector<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector<T> & dp_vector<T>::operator=(const dp_vector<T> & other)
{
	throw dp_exception("dp_vector<T> & dp_vector<T>::operator=(const dp_vector<T> & other) -- is not supported.");
}

template <typename T>
inline
dp_vector<T>::~dp_vector()
{
	delete [] my_elements;
	my_elements = NULL;
	my_number_of_elements = 0;
}

template <typename T>
inline
void dp_vector<T>::add(const T & a_value)
{
	T * new_elements = new T[my_number_of_elements + 1];

	for (int i = 0; i < my_number_of_elements; i++)
	{
		new_elements[i] = my_elements[i];
	}

	new_elements[my_number_of_elements] = a_value;

	delete [] my_elements;
	my_elements = new_elements;
	my_number_of_elements++;
}

template <typename T>
inline
int dp_vector<T>::get_size() const
{
	return my_number_of_elements;
}

template <typename T>
inline
void dp_vector<T>::set(int a_subscript, const T & a_value)
{
	validate_subscript(a_subscript);

	my_elements[a_subscript] = a_value;
}

template <typename T>
inline
const T & dp_vector<T>::get(int a_subscript) const
{
	validate_subscript(a_subscript);

	return my_elements[a_subscript];
}

template <typename T>
inline
T & dp_vector<T>::get(int a_subscript)
{
	validate_subscript(a_subscript);

	return my_elements[a_subscript];
}

template <typename T>
inline
dp_const_iterator<T> * dp_vector<T>::make_iterator() const
{
	return new dp_vector_const_iterator<T>(*this);
}

template <typename T>
inline
dp_iterator<T> * dp_vector<T>::make_iterator()
{
	return new dp_vector_iterator<T>(*this);
}

template <typename T>
inline
dp_const_iterator<T> * dp_vector<T>::make_reverse_iterator() const
{
	return new dp_vector_const_reverse_iterator<T>(*this);
}

template <typename T>
inline
dp_iterator<T> * dp_vector<T>::make_reverse_iterator()
{
	return new dp_vector_reverse_iterator<T>(*this);
}

template <typename T>
inline
void dp_vector<T>::validate_subscript(int a_subscript) const
{
	if ((a_subscript < 0) || (a_subscript >= get_size()))
	{
		throw dp_exception("Invalid a_subscript.");
	}
}

#endif
