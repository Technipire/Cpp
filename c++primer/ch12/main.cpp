#include <iostream>
#include "TextQuery.h"
#include <fstream>

int main() {
    std::ifstream infile("3littlepigs.txt");
    TextQuery txt(infile);
    txt.printText();
    std::cout << std::endl;
    std::cout << "Enter a word to query: " << std::endl;
    std::string word = "";
    std::cin >> word;
    auto result = txt.query(word); 
    // if just do result->print(), it'd compile but there
    // will be memory leaks as result could be nullptr
    if (result) result->print();
    else std::cout << word << " is not found!" << std::endl;
    return 0;
}
