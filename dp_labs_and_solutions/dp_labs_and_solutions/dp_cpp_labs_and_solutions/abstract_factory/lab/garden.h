// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;

class garden
{
protected:
	garden(lettuce* a_lettuce_prototype);
	set_lettuce_prototype(lettuce* a_lettuce_prototype);
public
	lettuce * make_lettuce() const;
	tomato  * make_tomato () const;

private:
	lettuce* my_lettuce;
};

#endif
