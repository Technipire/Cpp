#include<iostream>

using namespace std;

int sumOfDigits(int x){
  if(x >=0 && x <= 9)
    return x;
  else
    return x % 10 + sumOfDigits( x / 10);
}
int log2(int n){
  if(n < 2)
    return 0;
  else
    return 1 + log2(n / 2);
}

int fib(int n){
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}
int main(){
  int x = 0;
  cin >> x;
  int y = 0;
  //y = log2(x);
  //cout << "log2 of " << x << " is " << y << endl;
  //y = sumOfDigits(x);
  //cout << "sum of digits of " << x << " is " << y << endl;
  y = fib(x);
  cout << "The " << x << "th fibonacci number is " << y << endl;
  return 0;
}