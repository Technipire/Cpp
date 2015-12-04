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
        int get_i() {
            return i;
        }
        ~HasPtr() {
            delete ps;
        }
    private:
        std::string *ps;
        int i;
};


