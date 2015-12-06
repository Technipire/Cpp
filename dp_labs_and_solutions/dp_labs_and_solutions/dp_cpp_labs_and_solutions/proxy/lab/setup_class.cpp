// setup_class.cpp

#include "foo.h"
#include "setup_class.h"
#include "proxy_foo.h"
#include "real_foo.h"

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
