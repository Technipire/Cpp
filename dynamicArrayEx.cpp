#include<iostream>

using namespace std;

int main(){
	int* arr = new (nothrow) int[10];
	if(arr == nullptr) cerr << "Error: memory could not be allocated:" << endl;
	for(unsigned i = 0; i < 10; ++i)
	cout << arr[i] << endl;
	return 0;
}
