#include "proxy_foo.h"

proxy_foo::proxy_foo(real_foo* a_real_foo)
{
	set_my_foo(a_real_foo);
}

void proxy_foo::set_my_foo(real_foo* a_real_foo)
{
	if (!a_real_foo)
	{
		throw dp_exception("void proxy_foo::set_real_foo(real_foo * a_real_foo) -- a_real_foo == nullptr.");
	}
	my_foo = a_real_foo;
}

void proxy_foo::bar()
{
	std::cout << "before:" << std::endl;
	my_foo->bar();
	std::cout << "after:" << std::endl;

	std::cout << "before:" << std::endl;
	my_foo->bar();
	std::cout << "after:" << std::endl;

	std::cout << "before:" << std::endl;
	my_foo->bar();
	std::cout << "after:" << std::endl;
}