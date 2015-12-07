// setup_class.cpp

#include "foo.h"
#include "proxy_foo.h"
#include "real_foo.h"
#include "setup_class.h"

foo * setup_class::setup()
{
	if (true)
	{
		return new proxy_foo(new real_foo());
	}
	else
	{
		return new real_foo();
	}
}
