#include<iostream>
#include<string>

using namespace std;

int main(){
  string str1;
  string str2;
  while(true){
  cin >> str1;
  cin >> str2;
  if(str1 > str2) cout << str1 << endl;
  else cout << str2 << endl;
  }
  
  return 0;
}