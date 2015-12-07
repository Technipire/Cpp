// setup_class.cpp

#include "foo.h"
#include "setup_class.h"

foo * setup_class::setup()
{
	return new foo();
}
