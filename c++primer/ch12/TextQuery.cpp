#include "TextQuery.h"
#include <iostream>
#include <sstream>

std::map<unsigned, std::string> mapStrings(std::set<unsigned> occurrences, std::vector<std::string> theText){
    std::map<unsigned, std::string> result;
    for (auto i : occurrences) {
        result[i] = theText[i];
    }
    return result;
}

TextQuery::TextQuery(std::ifstream& infile) {
    if (infile.is_open()) {
        std::string line = "", word = "";
        unsigned lineNumber = 0;
        while (getline(infile, line)) {
            text.push_back(line);
            std::istringstream record(line);
            while (record >> word) {
                wordMaps[word].insert(lineNumber);
            }
            ++lineNumber;
        }
        infile.close();
    }
    else {
        std::cerr << "File cannot be opened!" << std::endl;
    }

}

void TextQuery::printText() {
    for (auto line : text) {
        std::cout << "new line: " << line << std::endl;
    }
}

std::shared_ptr<QueryResult> TextQuery::query(std::string s) {
    auto iter = wordMaps.find(s);
    if (iter == wordMaps.end()) {
        return nullptr;
    }
    int freq = iter->second.size();
    std::shared_ptr<QueryResult> theResult = std::make_shared<QueryResult>(s, freq, mapStrings(iter->second, text));
    return theResult;
    
}
