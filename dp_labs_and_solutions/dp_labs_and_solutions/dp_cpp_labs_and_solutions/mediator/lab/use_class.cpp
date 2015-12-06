// use_class.cpp

#include "consumer.h"
#include "use_class.h"

void use_class::use(consumer * a_consumer)
{
	a_consumer->consume();
}
