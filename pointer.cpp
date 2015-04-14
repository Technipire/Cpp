/*
 * Examines what happens when we have two pointers point to the same value, and delete 
 * one pointer.
 */
#include<iostream>

using namespace std;

int main(){
	int i = 5;
	int* iptr_1 = &i;
	int* iptr_2 = &i;
	cout << *iptr_1 << endl;
	cout << *iptr_2 << endl;
        //delete iptr_1;
	iptr_1 = NULL;
	delete iptr_1;
	cout << iptr_1 << endl;
	cout << *iptr_2 << endl;
	return 0;
}
