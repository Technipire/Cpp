// garden.h

#ifndef garden_header
#define garden_header

class lettuce;
class tomato;
class garden
{
protected:
	garden(lettuce* a_lettuce_prototype);
    void set_lettuce_prototype(lettuce* a_lettuce_prototype);
    ~garden();

public:
	static garden& get_instance();
	        lettuce * make_lettuce() const;
	virtual tomato  * make_tomato () const = 0;

private:
    garden(const garden& other);
    garden& operator = (const garden& other);
	static garden* the_instance;
    lettuce* my_lettuce;
};

#endif
