#ifndef TEXTQUERY__H__
#define TEXTQUERY__H__

#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include "QueryResult.h"
#include <memory>

class TextQuery {
    private:
        std::vector<std::string> text;
        std::map<std::string, std::set<unsigned>> wordMaps;
    public:
        TextQuery(std::ifstream& infile);
        void printText();
        std::shared_ptr<QueryResult> query(std::string s);

};

#endif
