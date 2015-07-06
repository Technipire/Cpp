#include "all.h"
#include <list>

using namespace std;
template <typename T>
void printVec(vector<T> vec, string msg) {
    cout << msg << endl;
    for (auto e : vec) {
        cout << e << " ";
    }
    cout << endl;
    cout << endl;
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

template <typename T>
void elimDups(vector<T> &vec) {
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

bool moreThanFive(string str) {
    return str.size() > 4;
}



int main() {
    vector<int> nums = {1,-1,1,-1,2,-3,3,4,-4,2,1,-2,5,-6,3};
    vector<string> vec {"the", "quick", "red", "fox","jumps", "over", "the", "slow", "red", "turtle"};
    /*
    cout << count(nums.cbegin(), nums.cend(), 1) << endl;
    vector<int> vec;
    list<int> lst;
    int i = 0;
    while (i != -1) {
        cin >> i;
        lst.push_back(i);
    }
    vec.resize(lst.size());
    copy(lst.cbegin(), lst.cend(), vec.begin());
    sort(nums.begin(), nums.end());
    auto end_unique = unique(nums.begin(), nums.end());
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << endl;
    }

    printVec(vec, "The original vec is below: ");
    elimDups(vec);
    printVec(vec, "The dup eliminated vec is below: ");
    vector<string> vec2(vec);
    vector<string> vec3(vec);
    sort(vec.begin(), vec.end());
    printVec(vec, "The normal sorted vec is below: ");
    sort(vec2.begin(), vec2.end(), isShorter);
    printVec(vec2, "The sorted vec by size is below: ");
    stable_sort(vec3.begin(), vec3.end(), isShorter);
    printVec(vec3, "The stable sort vec is below");
    auto end_partition = partition(vec.begin(), vec.end(), [](const string a){return a.size() > 4;});
    for (auto it = vec.cbegin(); it != end_partition; ++it) {
        cout << *it << endl;
    }
    transform(nums.begin(), nums.end(), nums.begin(),
        [](int i)->int {if (i < 0) return -i; else return i;});
    for (auto e : nums) cout << e << " ";
    cout << endl;
    */

    cout << count_if(vec.cbegin(), vec.cend(), moreThanFive) << endl;
    int x = 10;
    auto f = [x]() 
    mutable -> bool {// arrow indicates return type
                     // mutable means it can change captured variable
        if (x == 0) return true; 
        else {
          while (x !=0 ) {--x;}
          return false;
      }
    };
    cout << f() << endl;
    return 0;
}
