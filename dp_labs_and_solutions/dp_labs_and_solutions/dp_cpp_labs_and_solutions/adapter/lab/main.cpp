// main.cpp

class address_book;
#include "address_book_adapted_to_table.h"
#include "setup_class.h"
class table;
#include "use_class.h"

int main()
{
	address_book * a_address_book = setup_class::setup();

	table * a_table = new address_book_adapted_to_table(a_address_book);

	use_class::use(a_table);

	return 0;
}
