#ifndef ADDRESS_BOOK_ADAPTED_TO_TABLE__H__
#define ADDRESS_BOOK_ADAPTED_TO_TABLE__H__
#include "table.h"
#include "address_book.h"

class address_book_adapted_to_table : public table
{
public:
	int get_number_of_rows();
	int get_number_of_columns();
	string get_column_name(int a_column);
	string get_value(int a_row, int a_column);
private:
	address_book* my_address_book = nullptr;
	
}



#endif