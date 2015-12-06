// proxy_foo.h

#ifndef proxy_foo_header
#define proxy_foo_header

#include "foo.h"
class real_foo;

class proxy_foo : public foo
{
public:
	proxy_foo(real_foo * a_real_foo);

	virtual void bar();

private:
	void set_real_foo(real_foo * a_real_foo);

	real_foo * my_real_foo;
};

#endif
