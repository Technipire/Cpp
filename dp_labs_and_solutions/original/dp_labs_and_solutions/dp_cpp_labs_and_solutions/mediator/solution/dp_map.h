// dp_map.h

#ifndef dp_map_header
#define dp_map_header

#include "dp_const_iterator.h"
#include "dp_exception.h"
#include "dp_list.h"
#include "dp_pair.h"

template <typename Key, typename Value>
class dp_map
{
public:
	dp_map()
	{
	}
	dp_map(const dp_map & other)
	{
		throw dp_exception("dp_map(const dp_map & other) -- is not supported.");
	}
	dp_map & operator=(const dp_map & other)
	{
		throw dp_exception("dp_map & operator=(const dp_map & other) -- is not supported.");
	}
	~dp_map()
	{
	}

	void put(const Key & a_key, const Value & a_value)
	{
		my_list.add(dp_pair<Key, Value>(a_key, a_value));
	}

	bool contains(const Key & a_key) const
	{
		dp_const_iterator<dp_pair<Key, Value> > * a_iterator = my_list.make_iterator();
		while (!a_iterator->is_done())
		{
			const dp_pair<Key, Value> & a_pair = a_iterator->get_current();
			if (a_pair.get_first() == a_key)
			{
				return true;
			}
			a_iterator->advance();
		}
		return false;
	}

	const Value & get(const Key & a_key) const
	{
		dp_const_iterator<dp_pair<Key, Value> > * a_iterator = my_list.make_iterator();
		while (!a_iterator->is_done())
		{
			const dp_pair<Key, Value> & a_pair = a_iterator->get_current();
			if (a_pair.get_first() == a_key)
			{
				return a_pair.get_second();
			}
			a_iterator->advance();
		}
		throw dp_exception("dp_map<T>::get() - a_key is not in this dp_map.");
	}

	Value & get(const Key & a_key)
	{
		dp_iterator<dp_pair<Key, Value> > * a_iterator = my_list.make_iterator();
		while (!a_iterator->is_done())
		{
			dp_pair<Key, Value> & a_pair = a_iterator->get_current();
			if (a_pair.get_first() == a_key)
			{
				return a_pair.get_second();
			}
			a_iterator->advance();
		}
		throw dp_exception("dp_map<T>::get() - a_key is not in this dp_map.");
	}

private:
	dp_list<dp_pair<Key, Value> > my_list;
};

#endif
