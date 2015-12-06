// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;

class garden
{
protected:
	garden(lettuce * a_lettuce_prototype);

	void set_lettuce_prototype(lettuce * a_lettuce_prototype);

public:
	        lettuce * make_lettuce() const;
	virtual tomato  * make_tomato () const = 0;

private:
	lettuce * my_lettuce_prototype;
};

#endif
