#ifndef PROXY_FOO__H__
#define PROXY_FOO__H__
#include "real_foo.h"

class proxy_foo : public foo
{
public:
	proxy_foo(real_foo* a_real_foo);
	void bar();
private:
	void set_my_foo(real_foo* a_real_foo);
	real_foo* my_foo;
};

#endif