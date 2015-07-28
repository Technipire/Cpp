#include "all.h"

class HasPtr {
    public:
        HasPtr(const std::string &s = std::string()):
            ps(new std::string(s)), i(0) {}
        HasPtr(const HasPtr &source) {
            *ps = *source.ps;
            i = source.i;
        }
        void print_info() {
            std::cout << "ps-> " << *ps << std::endl;
            std::cout << "i =  " << i << std::endl;
        }
        ~HasPtr() {
            delete ps;
        }
    private:
        std::string *ps;
        int i;
};

int main() {
    std::cout << "Enter a string: " << std::endl;
    std::string input = "";
    std::cin >> input;
    HasPtr* bar = new HasPtr(input);
    HasPtr* foo = new HasPtr("world");
    bar->print_info();
    bar = foo;
    bar->print_info();
    delete bar;
    delete foo;
    return 0;
}
