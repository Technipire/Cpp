// garden.h

#ifndef garden_header
#define garden_header

class lettuce;

class garden
{
public:
	garden(lettuce * a_lettuce_prototype);

	void set_lettuce_prototype(lettuce * a_lettuce_prototype);

	lettuce * make_lettuce() const;

private:
	lettuce * my_lettuce_prototype;
};

#endif
