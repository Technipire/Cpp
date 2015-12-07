// garden.h

#ifndef garden_header
#define garden_header

class lettuce;

class garden
{
public:
	garden(lettuce* a_lettuce_type);

	void set_lettuce_type(lettuce* a_lettuce_type);

	lettuce * make_lettuce() const;

private:
	lettuce* my_lettuce_type;
};

#endif