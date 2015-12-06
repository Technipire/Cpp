#include "address_book_adapted_to_table.h"

address_book_adapted_to_table::address_book_adapted_to_table()
{}

int address_book_adapted_to_table::get_number_of_rows()
{
	return my_address_book->get_number_of_persons();
}

int address_book_adapted_to_table::get_number_of_columns()
{
	return person::get_number_of_fields_per_person();
}