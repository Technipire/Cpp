#include <iostream>

using namespace std;

void sum(int &a, int &b)
{
  int c = a;
  int d = b;
  d = c * c;
}

int main()
{
  int a = 5;
  int b = 9;
  
  sum(a, b);
  cout << b << endl;
  
}

