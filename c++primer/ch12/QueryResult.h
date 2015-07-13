#ifndef QUERYRESULT__H__
#define QUERYRESULT__H__

#include <string>
#include <map>

class QueryResult {
    private:
        std::string queryWord = "";
        int freq = -1;
        std::map<unsigned, std::string> lines; // the line of text where the word appears
    public:
        QueryResult() = default;
        QueryResult(std::string newQuery, int newFreq, std::map<unsigned, std::string> newLines) :
        queryWord(newQuery),
        freq(newFreq), 
        lines(newLines) {}
        void print();
        


};

#endif
