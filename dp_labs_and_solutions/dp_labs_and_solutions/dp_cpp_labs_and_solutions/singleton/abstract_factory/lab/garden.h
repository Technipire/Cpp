// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;

class garden
{
protected:
	garden(lettuce * a_lettuce_prototype);

public:
	static garden* get_instance();
	        lettuce * make_lettuce() const;
	virtual tomato  * make_tomato () const = 0;

private:
	static garden* the_instance;
};

#endif
