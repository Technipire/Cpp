#include<iostream>
#include<vector>
#include<string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    vector<string> svec {10, "null"};
    for (auto v : svec) cout << v << endl;
    /*
    vector<string> words;
    string input = "";
    while (true) {
        cin >> input;
        if (input == "q") break;
        words.push_back(input);
    }
    for (auto &w : words) {
        for (auto &c : w) c = toupper(c);
    }
    for (auto w : words) cout << w << endl;
    */
    vector<int> ivec;
    while (ivec.size() < 50){
        ivec.push_back(rand() % 101);
    }
    /*
    for (auto it = ivec.begin(); it != ivec.end(); ++it){
        cout << *it << " + " << *(it + 1) << " = ";
        cout << *it + *(it + 1) << endl;
    }*/
    for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i){
        cout << ivec[i] << " + " << ivec[ivec.size() - i] << " = ";
        cout << ivec[i] + ivec[ivec.size() - i] << endl;
    }
    cout << " here " << *(ivec.end() - 1) << endl;
    return 0;
}
