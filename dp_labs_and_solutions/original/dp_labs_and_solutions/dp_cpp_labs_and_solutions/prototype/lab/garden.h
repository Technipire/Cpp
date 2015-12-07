// garden.h

#ifndef garden_header
#define garden_header

class lettuce;

class garden
{
public:
	garden(int a_lettuce_type);

	void set_lettuce_type(int a_lettuce_type);

	lettuce * make_lettuce() const;

private:
	int my_lettuce_type;
};

#endif
