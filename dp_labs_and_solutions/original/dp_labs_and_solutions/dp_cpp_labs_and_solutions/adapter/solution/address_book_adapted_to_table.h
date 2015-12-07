// address_book_adapted_to_table.h

#ifndef address_book_adapted_to_table_header
#define address_book_adapted_to_table_header

class address_book;
#include "table.h"

class address_book_adapted_to_table : public table
{
public:
	address_book_adapted_to_table(address_book * a_address_book);

	virtual int get_number_of_rows() const;
	virtual int get_number_of_columns() const;
	virtual const std::string & get_column_name(int a_column) const;
	virtual const std::string & get_value(int a_row, int a_column) const;

private:
	address_book * my_address_book;
};

#endif
