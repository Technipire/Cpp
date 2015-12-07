// setup_class.cpp

#include "address_book.h"
#include "person.h"
#include "setup_class.h"

address_book * setup_class::setup()
{
	address_book * a_address_book = new address_book();

	a_address_book->add(
		new person("Barbara", "Kinney", "24 Harrison Ave", "Panama City", "FL", "(850) 747-1914"));

	a_address_book->add(
		new person("Mary", "Rich", "1893 S Ocean Dr", "Hallandale Beach", "FL", "(954) 454-6283"));

	a_address_book->add(
		new person("Su", "Lesperance", "2020 Hillside Dr", "Reedsville", "WI", "(920) 732-3680"));

	a_address_book->add(
		new person("Elizabeth", "Newman", "297 Pleasant St", "Worcester", "MA", "(508) 753-6141"));

	a_address_book->add(
		new person("Martha", "Gershun", "5710 Lockton Ln", "Mission", "KS", "(913) 362-7654"));

	return a_address_book;
}
