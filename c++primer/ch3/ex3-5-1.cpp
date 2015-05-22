#include<iostream>
#include<iterator>
#include<vector>
#include<string>

using namespace std;

int foo(){
    return 10;
}
int ia1[10];

bool cmp_arr(int arr1[], int m, int arr2[], int n){
    if (m != n) return false;
    for (unsigned i = 0; i < m; ++i){
        if (arr1[i] != arr2[i]) return false;
    }
    return true;

}
int main(){
    int cnt = 10;
    int ia[cnt];
    constexpr size_t size = 10;
    int arr[size];
    vector<int> vec;
    for (unsigned i = 0; i < size; ++i){
        arr[i] = i;
    }
    for (unsigned i = 0; i < size; ++i){
        ia[i] = arr[i];
        vec.push_back(arr[i]);
    } 
    auto ia2(arr); //ia2 is a pointer to arr
    *ia2 = 90;
    *(ia2 + 1) = 100;
    *(ia2 + 8) = 66;
    int *e = end(arr);
    *e = 88;
    for (auto i : arr) cout << i << endl;
    cout << endl;
    for (unsigned i = 0; i < 11; ++i) cout << arr[i] << endl;
    int *p = begin(arr);
    while (p != e){
        *p = 0;
        ++p;
    }
    for (auto i : arr) cout << i << endl;
    cout << endl;
    cout << cmp_arr(arr,10, ia2, 10) << endl;

    return 0;
}
