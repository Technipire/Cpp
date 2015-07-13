#include <iostream>
#include "QueryResult.h"


void QueryResult::print() {
    if (freq == -1) {
        std::cout << "The result is empty." << std::endl;
        return;
    }
    std::cout << "Word " << queryWord << " occured "
        << freq << " times" << std::endl;
    for (auto e : lines) {
        std::cout << "( line " << e.first + 1 << ") ";
        std::cout << e.second << std::endl;
    }

}
