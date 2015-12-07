// address_book.h

#ifndef address_book_header
#define address_book_header

#include "dp_const_iterator.h"
#include "dp_container.h"
#include "dp_iterator.h"
#include "dp_list.h"
class person;

class address_book : public dp_container<person *>
{
public:
	address_book();

	void add(person * a_person);

	int get_number_of_persons() const;

	void remove(person * a_person);

	dp_const_iterator<person *> * make_iterator() const;
	      dp_iterator<person *> * make_iterator()      ;

	person * get_person(int which) const;

private:
	dp_list<person *> my_persons;
};

#endif
