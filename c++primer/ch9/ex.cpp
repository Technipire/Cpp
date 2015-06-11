#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main () {
    vector<string> vec;
    list<char* > lst;
    char a[2], b[2];
    a[0] = 'a';
    b[0] = 'b';
    lst.push_back(a);
    lst.push_back(b);
    for (auto i : lst) cout << i << endl;
    vec.assign(lst.cbegin(), lst.cend());
    cout << endl;
    for (auto i : vec) cout << i << endl;
    return 0;
}
