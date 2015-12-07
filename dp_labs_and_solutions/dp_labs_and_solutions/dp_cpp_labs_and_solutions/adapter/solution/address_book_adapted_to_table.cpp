// address_book_adapted_to_table.cpp

#include <string>
#include "address_book.h"
#include "address_book_adapted_to_table.h"
#include "dp_exception.h"
#include "person.h"

address_book_adapted_to_table::address_book_adapted_to_table(address_book * a_address_book)
{
	if (a_address_book == nullptr)
	{
		// throw an exception.
	}
	
	my_address_book = a_address_book;
}

int address_book_adapted_to_table::get_number_of_rows() const
{
	return my_address_book->get_number_of_persons();
}

int address_book_adapted_to_table::get_number_of_columns() const
{
	return person::get_number_of_fields_per_person();
}

const std::string & address_book_adapted_to_table::get_column_name(int a_column) const
{
	return person::get_field_name(a_column);
}

const std::string & address_book_adapted_to_table::get_value(int a_row, int a_column) const
{
	person * a_person = my_address_book->get_person(a_row);
	return a_person->get_field_value(a_column);
}