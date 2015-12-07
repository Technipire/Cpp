// table.h

#ifndef table_header
#define table_header

#include <string>

class table
{
public:
	virtual int get_number_of_rows() const = 0;
	virtual int get_number_of_columns() const = 0;
	virtual const std::string & get_column_name(int a_column) const = 0;
	virtual const std::string & get_value(int a_row, int a_column) const = 0;

	void display() const;
};

#endif
