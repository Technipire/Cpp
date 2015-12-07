// main.cpp

#include <iostream>
#include <string>
#include <vector>
#include "barista.h"
#include "beverage.h"

void main_helper(const std::string & a_description, beverage * a_beverage)
{
	std::cout << a_description << ":\n";

	a_beverage->prepare();

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

		beverage * a_beverage = a_barista.make_beverage(a_vector);

		main_helper("coffee with milk with sugar", a_beverage);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");
		a_vector.push_back("milk");

		barista a_barista;

		beverage * a_beverage = a_barista.make_beverage(a_vector);

		main_helper("coffee with milk", a_beverage);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");
		a_vector.push_back("sugar");

		barista a_barista;

		beverage * a_beverage = a_barista.make_beverage(a_vector);

		main_helper("coffee with sugar", a_beverage);
	}

	{
		std::vector<std::string> a_vector;
		a_vector.push_back("coffee");

		barista a_barista;

		beverage * a_beverage = a_barista.make_beverage(a_vector);

		main_helper("coffee", a_beverage);
	}

	return 0;
}
