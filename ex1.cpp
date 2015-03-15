#include<iostream>

using namespace std;

int main()
{
  int x = 5;
  int &r = x;
  int *p = &x;
  cout << "p = " << p << endl;
  cout << "&p = " << &p << endl;
  int &y = *p;
  int z = *p;
  cout << "z = " << z << endl;
  y = 6;
  cout << x << endl;
  
  
}