// dp_map.java

public class dp_map<Key, Value>
{
	public dp_map()
	{
		my_list = new dp_list<dp_pair<Key, Value> >();
	}

	void put(Key a_key, Value a_value)
	{
		my_list.add(new dp_pair<Key, Value>(a_key, a_value));
	}

	public boolean contains(Key a_key)
	{
		dp_iterator<dp_pair<Key, Value> > a_iterator = my_list.make_iterator();
		while (!a_iterator.is_done())
		{
			dp_pair<Key, Value> a_pair = a_iterator.get_current();
			if (a_pair.get_first() == a_key)
			{
				return true;
			}
			a_iterator.advance();
		}
		return false;
	}

	public Value get(Key a_key)
	{
		dp_iterator<dp_pair<Key, Value> > a_iterator = my_list.make_iterator();
		while (!a_iterator.is_done())
		{
			dp_pair<Key, Value> a_pair = a_iterator.get_current();
			if (a_pair.get_first() == a_key)
			{
				return a_pair.get_second();
			}
			a_iterator.advance();
		}
		throw new dp_exception("dp_map<T>.get() - a_key is not in this dp_map.");
	}

	private dp_list<dp_pair<Key, Value> > my_list;
}
