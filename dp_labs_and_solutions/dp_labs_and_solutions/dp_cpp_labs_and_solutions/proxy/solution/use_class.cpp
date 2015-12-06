// use_class.cpp

#include "foo.h"
#include "use_class.h"

void use_class::use(foo * a_foo)
{
	a_foo->bar();

	a_foo->bar();

	a_foo->bar();
}
