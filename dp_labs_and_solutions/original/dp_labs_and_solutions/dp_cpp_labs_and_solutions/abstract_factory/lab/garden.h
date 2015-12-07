// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;

class garden
{
public:
	garden(int a_lettuce_type, int a_tomato_type);

	void set_lettuce_type(int a_lettuce_type);
	void set_tomato_type (int a_tomato_type );

	lettuce * make_lettuce() const;
	tomato  * make_tomato () const;

private:
	int my_lettuce_type;
	int my_tomato_type;
};

#endif
