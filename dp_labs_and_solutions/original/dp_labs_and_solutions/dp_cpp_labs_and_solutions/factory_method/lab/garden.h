// garden.h

#ifndef garden_header
#define garden_header

class tomato;

class garden
{
public:
	garden(int a_tomato_type);

	void set_tomato_type(int a_tomato_type);

	tomato * make_tomato();

private:
	int my_tomato_type;
};

#endif
