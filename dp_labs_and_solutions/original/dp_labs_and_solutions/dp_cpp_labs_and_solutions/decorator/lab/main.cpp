// main.cpp

#include <iostream>
#include <string>
#include <vector>
#include "barista.h"
#include "coffee.h"

void main_helper(const std::string & a_description, coffee * a_coffee)
{
	std::cout << a_description << ":\n";

	a_coffee->prepare();

	std::cout << "\n";
}

int main()
{
	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");
		a_vector.push_back("milk");
		a_vector.push_back("sugar");

		barista a_barista;

		coffee * a_coffee = a_barista.make_coffee(a_vector);

		main_helper("coffee with milk with sugar", a_coffee);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");
		a_vector.push_back("milk");

		barista a_barista;

		coffee * a_coffee = a_barista.make_coffee(a_vector);

		main_helper("coffee with milk", a_coffee);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");
		a_vector.push_back("sugar");

		barista a_barista;

		coffee * a_coffee = a_barista.make_coffee(a_vector);

		main_helper("coffee with sugar", a_coffee);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");

		barista a_barista;

		coffee * a_coffee = a_barista.make_coffee(a_vector);

		main_helper("coffee", a_coffee);
	}

	return 0;
}
