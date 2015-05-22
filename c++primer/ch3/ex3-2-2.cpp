#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string input = "";
    string input2 = "";
    string input3 = "";
    cin >> input >> input2 >> input3;
    if (input > input2) cout << input << " is larger" << endl;
    else if (input2 > input) cout << input2 << " is larger" << endl;
    if (input.size() > input2.size()) cout << input << " is longer" << endl;
    else if (input2.size() > input.size()) cout << input2 << " is longer" << endl;
    string result = input + input2 + input3;
    cout << "large string: " << result << endl;

    for(char &s : input) s = 'x';// has to use reference if we
                                 // want to modify the characters
    cout << "new input: " << input << endl;

    decltype(input.size()) i = 0;
    while(i < input.size()){
        input[i] = 'y';
        ++i;
    }
    cout << "while input: " << input << endl;

    for(decltype(input.size()) i = 0; i < input.size(); ++i)
        input[i] = 'z';
    cout << "for input: " << input << endl;
    input = "iosdhfk;.[]oo(...ugsjgdj)";
    string newInput = "";
    for(decltype(input.size()) i = 0; i < input.size(); ++i){
        if (ispunct(input[i])) continue;
        newInput += input[i];
    }
    cout << "no punct input: " << newInput << endl;
    const string s = "Keep out!";
    for (auto &c : s) cout << c << endl;
    return 0;
}
