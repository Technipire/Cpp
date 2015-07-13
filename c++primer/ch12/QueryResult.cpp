#include <iostream>
#include "QueryResult.h"

std::string make_plural(unsigned size, std::string start, std::string end) {
    return size > 1? start + end : start;
}
void QueryResult::print() {
    if (freq == -1) {
        std::cout << "The result is empty." << std::endl;
        return;
    }
    std::cout << "Word '" << queryWord << "' occured "
        << freq << make_plural(freq, " time", "s") << std::endl;
    for (auto e : lines) {
        std::cout << "( line " << e.first + 1 << ") ";
        std::cout << e.second << std::endl;
    }

}
