// proxy_foo.cpp

#include <iostream>
#include "dp_exception.h"
#include "proxy_foo.h"
#include "real_foo.h"

proxy_foo::proxy_foo(real_foo * a_real_foo)
{
	set_real_foo(a_real_foo);
}

void proxy_foo::bar()
{
	std::cout << "before:" << std::endl;

	my_real_foo->bar();

	std::cout << "after:" << std::endl;
}

void proxy_foo::set_real_foo(real_foo * a_real_foo)
{
	if (a_real_foo == nullptr)
	{
		throw dp_exception("void proxy_foo::set_real_foo(real_foo * a_real_foo) -- a_real_foo == nullptr.");
	}

	my_real_foo = a_real_foo;
}
