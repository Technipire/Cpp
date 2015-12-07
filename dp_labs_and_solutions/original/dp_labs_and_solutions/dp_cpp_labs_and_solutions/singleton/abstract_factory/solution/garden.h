// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;

class garden
{
// Singleton:

protected:
	garden(lettuce * a_lettuce_prototype);
	virtual ~garden();
	
private:
	garden(const garden & other); // DO NOT DEFINE!
	garden & operator=(const garden & other); // DO NOT DEFINE!

public:
	static garden & get_instance();

private:
	static garden * the_instance;

// non-Singleton:

public:
	        lettuce * make_lettuce() const;
	virtual tomato  * make_tomato () const = 0;

protected:
	void set_lettuce_prototype(lettuce * a_lettuce_prototype);

private:
	lettuce * my_lettuce_prototype;
};

#endif
