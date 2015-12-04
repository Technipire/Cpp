#include "ex.h"
int main() {
    std::cout << "Enter a string: " << std::endl;
    std::string input = "";
    std::cin >> input;
    HasPtr* bar = new HasPtr(input);
    HasPtr* foo = new HasPtr("world");
    std::cout << foo->get_i() << std::endl;
    std::cout << "im here" << std::endl;
    bar->print_info();
    bar = foo;
    bar->print_info();
    delete bar;
    delete foo;
    return 0;
}
