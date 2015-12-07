// table.cpp

#include <iostream>
#include <string>
#include "table.h"

void table::display() const
{
	for (int a_column = 0; a_column < get_number_of_columns(); ++a_column)
	{
		std::cout << "| " << get_column_name(a_column) << " ";
	}
	std::cout << "|" << std::endl;

	for (int a_row = 0; a_row < get_number_of_rows(); ++a_row)
	{
		for (int a_column = 0; a_column < get_number_of_columns(); ++a_column)
		{
			std::cout << "| " << get_value(a_row, a_column) << " ";
		}
		std::cout << "|" << std::endl;
	}
}
